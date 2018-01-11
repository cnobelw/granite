/***
    Copyright (C) 2012-2013 Victor Eduardo <victoreduardm@gmal.com>

    This program or library is free software; you can redistribute it
    and/or modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 3 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
    Lesser General Public License for more details.
 
    You should have received a copy of the GNU Lesser General
    Public License along with this library; if not, write to the
    Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301 USA.
***/

/**
 * A widget with two adjustable panes.
 *
 * A ThinPaned widget draws a thin separator between two child widgets, without
 * compromising usability, because it offers a wide-enough invisible handle that the user
 * can drag to adjust the division.
 *
 * The size of the invisible handle can be customized through the //"overlay-handle-size"//
 * style property. For instance:
 *
 * {{{
 * * {
 *     -GraniteWidgetsThinPaned-overlay-handle-size: 8px;
 * }
 * }}}
 *
 * @see Gtk.Paned
 * @since 0.2
 */
public class Granite.Widgets.ThinPaned : Gtk.Paned {
    private const string STYLE_PROP_OVERLAY_HANDLE_SIZE = "overlay-handle-size";

    private const string DEFAULT_STYLESHEET = """
        GraniteWidgetsThinPaned { -GtkPaned-handle-size: 1px; }
    """;

    private const string FALLBACK_STYLESHEET = """
        GraniteWidgetsThinPaned.sidebar-pane-separator {
            background-color: alpha (#000, 0.3);
            border-width: 0;
        }
    """;

    private Gdk.Window overlay_handle;
    private bool in_resize = false;

    static construct {
        install_style_property (new ParamSpecInt (STYLE_PROP_OVERLAY_HANDLE_SIZE,
                                                  "Overlay handle's size",
                                                  "Width of the invisible overlay handle",
                                                  1, 50, 10,
                                                  ParamFlags.READABLE));
    }

    public ThinPaned (Gtk.Orientation orientation = Gtk.Orientation.HORIZONTAL) {
        this.orientation = orientation;
        Utils.set_theming (this, DEFAULT_STYLESHEET, null, Gtk.STYLE_PROVIDER_PRIORITY_APPLICATION);
        Utils.set_theming (this, FALLBACK_STYLESHEET, null, Gtk.STYLE_PROVIDER_PRIORITY_THEME);
    }

    public unowned Gdk.Window get_overlay_handle_window () {
        return overlay_handle;
    }

    public override void realize () {
        base.realize ();

        // Create invisible overlay handle
        var attributes = Gdk.WindowAttr ();

        attributes.window_type = Gdk.WindowType.CHILD;
        attributes.x = 0;
        attributes.y = 0;
        attributes.width = 0;
        attributes.height = 0;
        attributes.wclass = Gdk.WindowWindowClass.INPUT_ONLY;

        attributes.event_mask = Gdk.EventMask.BUTTON_PRESS_MASK
                              | Gdk.EventMask.BUTTON_RELEASE_MASK
                              | Gdk.EventMask.ENTER_NOTIFY_MASK
                              | Gdk.EventMask.LEAVE_NOTIFY_MASK
                              | Gdk.EventMask.POINTER_MOTION_MASK
                              | Gdk.EventMask.POINTER_MOTION_HINT_MASK;

        var attributes_mask = Gdk.WindowAttributesType.X
                            | Gdk.WindowAttributesType.Y
                            | Gdk.WindowAttributesType.CURSOR;

        overlay_handle = new Gdk.Window (get_window (), attributes, attributes_mask);

        // Have GTK+ forward the events to this widget
        overlay_handle.set_user_data (this);

        update_overlay_handle ();
    }

    public override void unrealize () {
        base.unrealize ();
        overlay_handle.set_user_data (null);
        overlay_handle.destroy ();
        overlay_handle = null;
    }

    public override void map () {
        base.map ();
        overlay_handle.show ();
    }

    public override void unmap () {
        base.unmap ();
        overlay_handle.hide ();
    }

    public override bool draw (Cairo.Context ctx) {
        base.draw (ctx);

        // if the overlay handle is not visible, don't draw a pane separator.
        if (!overlay_handle.is_visible ())
            return false;

        Gtk.Allocation allocation;
        get_allocation (out allocation);

        var style_context = get_style_context ();
        var state = style_context.get_state ();

        if (is_focus)
            state |= Gtk.StateFlags.SELECTED;

        if (in_resize)
            state |= Gtk.StateFlags.PRELIGHT;

        double width, height;

        if (orientation == Gtk.Orientation.HORIZONTAL) {
            width = 1;
            height = allocation.height;
        } else {
            width = allocation.width;
            height = 1;
        }

        ctx.save ();
        Gtk.cairo_transform_to_window (ctx, this, get_handle_window ());

        // render normal background to override default handle.
        style_context.render_background (ctx, 0, 0, width, height);

        style_context.save ();
        style_context.add_class (StyleClass.THIN_PANE_SEPARATOR);
        style_context.set_state (state);

        // draw thin separator. We don't use render_handle() because we're
        // only supposed to draw a thin separator without any marks.
        style_context.render_background (ctx, 0, 0, width, height);

        ctx.restore ();
        style_context.restore ();

        return false;
    }

    public override void size_allocate (Gtk.Allocation allocation) {
        base.size_allocate (allocation);
        update_overlay_handle ();
    }

    private void update_overlay_handle () {
        if (overlay_handle == null || !get_realized ())
            return;

        int overlay_handle_x, overlay_handle_y, overlay_handle_width, overlay_handle_height;

        var default_handle = get_handle_window ();
        default_handle.get_position (out overlay_handle_x, out overlay_handle_y);
        overlay_handle_width = default_handle.get_width ();
        overlay_handle_height = default_handle.get_height ();

        int overlay_handle_size;
        style_get (STYLE_PROP_OVERLAY_HANDLE_SIZE, out overlay_handle_size);

        if (orientation == Gtk.Orientation.HORIZONTAL) {
            overlay_handle_x -= overlay_handle_size / 2;
            overlay_handle_width += overlay_handle_size;
        } else {
            overlay_handle_y -= overlay_handle_size / 2;
            overlay_handle_height += overlay_handle_size;
        }

        overlay_handle.move_resize (overlay_handle_x,
                                    overlay_handle_y,
                                    overlay_handle_width,
                                    overlay_handle_height);

        state_flags_changed (0); // Updates the handle's cursor

        if (get_mapped () && default_handle.is_visible ())
            overlay_handle.show ();
        else
            overlay_handle.hide ();
    }

    public override void state_flags_changed (Gtk.StateFlags previous_state) {
        base.state_flags_changed (previous_state);

        if (get_realized ()) {
            var default_handle_cursor = get_handle_window ().get_cursor ();
            if (overlay_handle.get_cursor () != default_handle_cursor)
                overlay_handle.set_cursor (default_handle_cursor);
        }
    }

    public override bool motion_notify_event (Gdk.EventMotion event) {
        if (!in_resize)
            return base.motion_notify_event (event);

        var device = event.device ?? Gtk.get_current_event_device ();

        if (device == null) {
            var display = get_display ();
            if (display != null) {
                var dev_manager = display.get_device_manager ();
                if (dev_manager != null)
                    device = dev_manager.list_devices (Gdk.DeviceType.MASTER).nth_data (0);
            }
        }

        if (device != null) {
            int x, y, pos = 0;

            get_window ().get_device_position (device, out x, out y, null);

            Gtk.Allocation allocation;
            get_allocation (out allocation);

            if (orientation == Gtk.Orientation.HORIZONTAL) {
                x -= allocation.x;
                pos = Utils.is_left_to_right (this) ? x : get_allocated_width () - x;
            } else {
                pos = y - allocation.y;
            }

            position = pos.clamp (min_position, max_position);
            return true;
        }

        return_val_if_reached (false);
    }

    public override bool button_press_event (Gdk.EventButton event) {
        if (!in_resize && event.button == Gdk.BUTTON_PRIMARY && event.window == overlay_handle) {
            in_resize = true;
            Gtk.grab_add (this);
            return true;
        }

        return base.button_press_event (event);
    }

    public override bool button_release_event (Gdk.EventButton event) {
        if (event.window == overlay_handle) {
            in_resize = false;
            Gtk.grab_remove (this);
            return true;
        }

        return base.button_release_event (event);
    }

    public override bool grab_broken_event (Gdk.EventGrabBroken event) {
        in_resize = false;
        return base.grab_broken_event (event);
    }
}
