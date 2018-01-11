/* StatusBar.c generated by valac 0.36.7, the Vala compiler
 * generated from StatusBar.vala, do not modify */

/***
    Copyright (C) 2012-2013 Granite Developers

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

    Authored by: Victor Eduardo <victoreduardm@gmal.com>
***/

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gdk/gdk.h>


#define GRANITE_WIDGETS_TYPE_STATUS_BAR (granite_widgets_status_bar_get_type ())
#define GRANITE_WIDGETS_STATUS_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRANITE_WIDGETS_TYPE_STATUS_BAR, GraniteWidgetsStatusBar))
#define GRANITE_WIDGETS_STATUS_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRANITE_WIDGETS_TYPE_STATUS_BAR, GraniteWidgetsStatusBarClass))
#define GRANITE_WIDGETS_IS_STATUS_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRANITE_WIDGETS_TYPE_STATUS_BAR))
#define GRANITE_WIDGETS_IS_STATUS_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRANITE_WIDGETS_TYPE_STATUS_BAR))
#define GRANITE_WIDGETS_STATUS_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRANITE_WIDGETS_TYPE_STATUS_BAR, GraniteWidgetsStatusBarClass))

typedef struct _GraniteWidgetsStatusBar GraniteWidgetsStatusBar;
typedef struct _GraniteWidgetsStatusBarClass GraniteWidgetsStatusBarClass;
typedef struct _GraniteWidgetsStatusBarPrivate GraniteWidgetsStatusBarPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _GraniteWidgetsStatusBar {
	GtkToolbar parent_instance;
	GraniteWidgetsStatusBarPrivate * priv;
};

struct _GraniteWidgetsStatusBarClass {
	GtkToolbarClass parent_class;
};

struct _GraniteWidgetsStatusBarPrivate {
	GtkLabel* status_label;
	GtkBox* left_box;
	GtkBox* right_box;
};


static gpointer granite_widgets_status_bar_parent_class = NULL;

GType granite_widgets_status_bar_get_type (void) G_GNUC_CONST;
#define GRANITE_WIDGETS_STATUS_BAR_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GRANITE_WIDGETS_TYPE_STATUS_BAR, GraniteWidgetsStatusBarPrivate))
enum  {
	GRANITE_WIDGETS_STATUS_BAR_0_PROPERTY
};
#define GRANITE_WIDGETS_STATUS_BAR_ITEM_SPACING 3
#define GRANITE_WIDGETS_STATUS_BAR_STYLESHEET "\n" \
"        GraniteWidgetsStatusBar {\n" \
"            border-bottom-width: 0;\n" \
"            border-right-width: 0;\n" \
"            border-left-width: 0;\n" \
"            -GtkWidget-window-dragging: false;\n" \
"        }\n" \
"        GraniteWidgetsStatusBar .button {\n" \
"            padding: 0;\n" \
"        }\n" \
"    "
GraniteWidgetsStatusBar* granite_widgets_status_bar_new (void);
GraniteWidgetsStatusBar* granite_widgets_status_bar_construct (GType object_type);
GtkCssProvider* granite_widgets_utils_set_theming_for_screen (GdkScreen* screen, const gchar* stylesheet, gint priority);
void granite_widgets_status_bar_insert_widget (GraniteWidgetsStatusBar* self, GtkWidget* widget, gboolean use_left_side);
void granite_widgets_status_bar_set_text (GraniteWidgetsStatusBar* self, const gchar* text);
static void granite_widgets_status_bar_finalize (GObject * obj);


/**
     * Creates a new StatusBar.
     */
GraniteWidgetsStatusBar* granite_widgets_status_bar_construct (GType object_type) {
	GraniteWidgetsStatusBar * self = NULL;
	GtkStyleContext* _tmp0_;
	GdkScreen* _tmp1_;
	GtkCssProvider* _tmp2_;
	GtkCssProvider* _tmp3_;
	GtkLabel* _tmp4_;
	GtkLabel* _tmp5_;
	GtkBox* _tmp6_;
	GtkBox* _tmp7_;
	GtkToolItem* left_item = NULL;
	GtkToolItem* _tmp8_;
	GtkToolItem* status_label_item = NULL;
	GtkToolItem* _tmp9_;
	GtkToolItem* right_item = NULL;
	GtkToolItem* _tmp10_;
	GtkBox* _tmp11_;
	GtkLabel* _tmp12_;
	GtkBox* _tmp13_;
	self = (GraniteWidgetsStatusBar*) g_object_new (object_type, NULL);
	_tmp0_ = gtk_widget_get_style_context ((GtkWidget*) self);
	gtk_style_context_remove_class (_tmp0_, GTK_STYLE_CLASS_TOOLBAR);
	_tmp1_ = gtk_widget_get_screen ((GtkWidget*) self);
	_tmp2_ = granite_widgets_utils_set_theming_for_screen (_tmp1_, GRANITE_WIDGETS_STATUS_BAR_STYLESHEET, GTK_STYLE_PROVIDER_PRIORITY_THEME);
	_tmp3_ = _tmp2_;
	_g_object_unref0 (_tmp3_);
	_tmp4_ = (GtkLabel*) gtk_label_new (NULL);
	g_object_ref_sink (_tmp4_);
	_g_object_unref0 (self->priv->status_label);
	self->priv->status_label = _tmp4_;
	_tmp5_ = self->priv->status_label;
	gtk_label_set_justify (_tmp5_, GTK_JUSTIFY_CENTER);
	_tmp6_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 0);
	g_object_ref_sink (_tmp6_);
	_g_object_unref0 (self->priv->left_box);
	self->priv->left_box = _tmp6_;
	_tmp7_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 0);
	g_object_ref_sink (_tmp7_);
	_g_object_unref0 (self->priv->right_box);
	self->priv->right_box = _tmp7_;
	_tmp8_ = gtk_tool_item_new ();
	g_object_ref_sink (_tmp8_);
	left_item = _tmp8_;
	_tmp9_ = gtk_tool_item_new ();
	g_object_ref_sink (_tmp9_);
	status_label_item = _tmp9_;
	_tmp10_ = gtk_tool_item_new ();
	g_object_ref_sink (_tmp10_);
	right_item = _tmp10_;
	_tmp11_ = self->priv->left_box;
	gtk_container_add ((GtkContainer*) left_item, (GtkWidget*) _tmp11_);
	_tmp12_ = self->priv->status_label;
	gtk_container_add ((GtkContainer*) status_label_item, (GtkWidget*) _tmp12_);
	_tmp13_ = self->priv->right_box;
	gtk_container_add ((GtkContainer*) right_item, (GtkWidget*) _tmp13_);
	gtk_tool_item_set_expand (status_label_item, TRUE);
	gtk_widget_set_halign ((GtkWidget*) status_label_item, GTK_ALIGN_CENTER);
	gtk_widget_set_valign ((GtkWidget*) status_label_item, GTK_ALIGN_CENTER);
	gtk_widget_set_valign ((GtkWidget*) right_item, GTK_ALIGN_CENTER);
	gtk_widget_set_valign ((GtkWidget*) left_item, GTK_ALIGN_CENTER);
	gtk_toolbar_insert ((GtkToolbar*) self, left_item, 0);
	gtk_toolbar_insert ((GtkToolbar*) self, status_label_item, 1);
	gtk_toolbar_insert ((GtkToolbar*) self, right_item, 2);
	_g_object_unref0 (right_item);
	_g_object_unref0 (status_label_item);
	_g_object_unref0 (left_item);
	return self;
}


GraniteWidgetsStatusBar* granite_widgets_status_bar_new (void) {
	return granite_widgets_status_bar_construct (GRANITE_WIDGETS_TYPE_STATUS_BAR);
}


/**
     * Inserts widget in status bar
     * 
     * @param widget widget to insert
     * @param use_left_side whether or not to use left_side
     */
void granite_widgets_status_bar_insert_widget (GraniteWidgetsStatusBar* self, GtkWidget* widget, gboolean use_left_side) {
	gboolean _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (widget != NULL);
	_tmp0_ = use_left_side;
	if (_tmp0_) {
		GtkBox* _tmp1_;
		GtkWidget* _tmp2_;
		_tmp1_ = self->priv->left_box;
		_tmp2_ = widget;
		gtk_box_pack_start (_tmp1_, _tmp2_, FALSE, FALSE, (guint) GRANITE_WIDGETS_STATUS_BAR_ITEM_SPACING);
	} else {
		GtkBox* _tmp3_;
		GtkWidget* _tmp4_;
		_tmp3_ = self->priv->right_box;
		_tmp4_ = widget;
		gtk_box_pack_start (_tmp3_, _tmp4_, FALSE, FALSE, (guint) GRANITE_WIDGETS_STATUS_BAR_ITEM_SPACING);
	}
}


/**
     * Sets the text of StatusBar
     * 
     * @param text text to set Status bar to
     */
void granite_widgets_status_bar_set_text (GraniteWidgetsStatusBar* self, const gchar* text) {
	GtkLabel* _tmp0_;
	const gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (text != NULL);
	_tmp0_ = self->priv->status_label;
	_tmp1_ = text;
	gtk_label_set_text (_tmp0_, _tmp1_);
}


static void granite_widgets_status_bar_class_init (GraniteWidgetsStatusBarClass * klass) {
	granite_widgets_status_bar_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GraniteWidgetsStatusBarPrivate));
	G_OBJECT_CLASS (klass)->finalize = granite_widgets_status_bar_finalize;
}


static void granite_widgets_status_bar_instance_init (GraniteWidgetsStatusBar * self) {
	self->priv = GRANITE_WIDGETS_STATUS_BAR_GET_PRIVATE (self);
}


static void granite_widgets_status_bar_finalize (GObject * obj) {
	GraniteWidgetsStatusBar * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRANITE_WIDGETS_TYPE_STATUS_BAR, GraniteWidgetsStatusBar);
	_g_object_unref0 (self->priv->status_label);
	_g_object_unref0 (self->priv->left_box);
	_g_object_unref0 (self->priv->right_box);
	G_OBJECT_CLASS (granite_widgets_status_bar_parent_class)->finalize (obj);
}


/**
 * A status bar with a centered label.
 *
 * It supports adding widgets at its left and right sides.
 */
GType granite_widgets_status_bar_get_type (void) {
	static volatile gsize granite_widgets_status_bar_type_id__volatile = 0;
	if (g_once_init_enter (&granite_widgets_status_bar_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GraniteWidgetsStatusBarClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) granite_widgets_status_bar_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GraniteWidgetsStatusBar), 0, (GInstanceInitFunc) granite_widgets_status_bar_instance_init, NULL };
		GType granite_widgets_status_bar_type_id;
		granite_widgets_status_bar_type_id = g_type_register_static (gtk_toolbar_get_type (), "GraniteWidgetsStatusBar", &g_define_type_info, 0);
		g_once_init_leave (&granite_widgets_status_bar_type_id__volatile, granite_widgets_status_bar_type_id);
	}
	return granite_widgets_status_bar_type_id__volatile;
}



