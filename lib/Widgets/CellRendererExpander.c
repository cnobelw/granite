/* CellRendererExpander.c generated by valac 0.36.7, the Vala compiler
 * generated from CellRendererExpander.vala, do not modify */

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
***/

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <cairo.h>
#include <gdk/gdk.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define GRANITE_WIDGETS_TYPE_CELL_RENDERER_EXPANDER (granite_widgets_cell_renderer_expander_get_type ())
#define GRANITE_WIDGETS_CELL_RENDERER_EXPANDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRANITE_WIDGETS_TYPE_CELL_RENDERER_EXPANDER, GraniteWidgetsCellRendererExpander))
#define GRANITE_WIDGETS_CELL_RENDERER_EXPANDER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRANITE_WIDGETS_TYPE_CELL_RENDERER_EXPANDER, GraniteWidgetsCellRendererExpanderClass))
#define GRANITE_WIDGETS_IS_CELL_RENDERER_EXPANDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRANITE_WIDGETS_TYPE_CELL_RENDERER_EXPANDER))
#define GRANITE_WIDGETS_IS_CELL_RENDERER_EXPANDER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRANITE_WIDGETS_TYPE_CELL_RENDERER_EXPANDER))
#define GRANITE_WIDGETS_CELL_RENDERER_EXPANDER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRANITE_WIDGETS_TYPE_CELL_RENDERER_EXPANDER, GraniteWidgetsCellRendererExpanderClass))

typedef struct _GraniteWidgetsCellRendererExpander GraniteWidgetsCellRendererExpander;
typedef struct _GraniteWidgetsCellRendererExpanderClass GraniteWidgetsCellRendererExpanderClass;
typedef struct _GraniteWidgetsCellRendererExpanderPrivate GraniteWidgetsCellRendererExpanderPrivate;

struct _GraniteWidgetsCellRendererExpander {
	GtkCellRenderer parent_instance;
	GraniteWidgetsCellRendererExpanderPrivate * priv;
};

struct _GraniteWidgetsCellRendererExpanderClass {
	GtkCellRendererClass parent_class;
	gint (*get_arrow_size) (GraniteWidgetsCellRendererExpander* self, GtkWidget* widget);
};

struct _GraniteWidgetsCellRendererExpanderPrivate {
	gboolean _is_category_expander;
};


static gpointer granite_widgets_cell_renderer_expander_parent_class = NULL;

GType granite_widgets_cell_renderer_expander_get_type (void) G_GNUC_CONST;
#define GRANITE_WIDGETS_CELL_RENDERER_EXPANDER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GRANITE_WIDGETS_TYPE_CELL_RENDERER_EXPANDER, GraniteWidgetsCellRendererExpanderPrivate))
enum  {
	GRANITE_WIDGETS_CELL_RENDERER_EXPANDER_0_PROPERTY,
	GRANITE_WIDGETS_CELL_RENDERER_EXPANDER_IS_CATEGORY_EXPANDER_PROPERTY
};
GraniteWidgetsCellRendererExpander* granite_widgets_cell_renderer_expander_new (void);
GraniteWidgetsCellRendererExpander* granite_widgets_cell_renderer_expander_construct (GType object_type);
static GtkSizeRequestMode granite_widgets_cell_renderer_expander_real_get_request_mode (GtkCellRenderer* base);
static void granite_widgets_cell_renderer_expander_real_get_preferred_width (GtkCellRenderer* base, GtkWidget* widget, gint* minimum_size, gint* natural_size);
static GtkStyleContext* granite_widgets_cell_renderer_expander_apply_style_changes (GraniteWidgetsCellRendererExpander* self, GtkWidget* widget);
gint granite_widgets_cell_renderer_expander_get_arrow_size (GraniteWidgetsCellRendererExpander* self, GtkWidget* widget);
static void granite_widgets_cell_renderer_expander_revert_style_changes (GraniteWidgetsCellRendererExpander* self, GtkWidget* widget);
static void granite_widgets_cell_renderer_expander_real_get_preferred_height_for_width (GtkCellRenderer* base, GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
static gint granite_widgets_cell_renderer_expander_real_get_arrow_size (GraniteWidgetsCellRendererExpander* self, GtkWidget* widget);
static void granite_widgets_cell_renderer_expander_real_render (GtkCellRenderer* base, cairo_t* context, GtkWidget* widget, GdkRectangle* bg_area, GdkRectangle* cell_area, GtkCellRendererState flags);
static void granite_widgets_cell_renderer_expander_real_get_size (GtkCellRenderer* base, GtkWidget* widget, GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height) G_GNUC_DEPRECATED;
gboolean granite_widgets_cell_renderer_expander_get_is_category_expander (GraniteWidgetsCellRendererExpander* self);
#define GRANITE_STYLE_CLASS_CATEGORY_EXPANDER "category-expander"
void granite_widgets_cell_renderer_expander_set_is_category_expander (GraniteWidgetsCellRendererExpander* self, gboolean value);
static void granite_widgets_cell_renderer_expander_finalize (GObject * obj);
static void _vala_granite_widgets_cell_renderer_expander_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_granite_widgets_cell_renderer_expander_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


GraniteWidgetsCellRendererExpander* granite_widgets_cell_renderer_expander_construct (GType object_type) {
	GraniteWidgetsCellRendererExpander * self = NULL;
	self = (GraniteWidgetsCellRendererExpander*) g_object_new (object_type, NULL);
	return self;
}


GraniteWidgetsCellRendererExpander* granite_widgets_cell_renderer_expander_new (void) {
	return granite_widgets_cell_renderer_expander_construct (GRANITE_WIDGETS_TYPE_CELL_RENDERER_EXPANDER);
}


static GtkSizeRequestMode granite_widgets_cell_renderer_expander_real_get_request_mode (GtkCellRenderer* base) {
	GraniteWidgetsCellRendererExpander * self;
	GtkSizeRequestMode result = 0;
	self = (GraniteWidgetsCellRendererExpander*) base;
	result = GTK_SIZE_REQUEST_HEIGHT_FOR_WIDTH;
	return result;
}


static void granite_widgets_cell_renderer_expander_real_get_preferred_width (GtkCellRenderer* base, GtkWidget* widget, gint* minimum_size, gint* natural_size) {
	GraniteWidgetsCellRendererExpander * self;
	gint _vala_minimum_size = 0;
	gint _vala_natural_size = 0;
	GtkWidget* _tmp0_;
	GtkWidget* _tmp1_;
	gint _tmp2_;
	guint _tmp3_;
	guint _tmp4_;
	GtkWidget* _tmp5_;
	self = (GraniteWidgetsCellRendererExpander*) base;
	g_return_if_fail (widget != NULL);
	_tmp0_ = widget;
	granite_widgets_cell_renderer_expander_apply_style_changes (self, _tmp0_);
	_tmp1_ = widget;
	_tmp2_ = granite_widgets_cell_renderer_expander_get_arrow_size (self, _tmp1_);
	g_object_get ((GtkCellRenderer*) self, "xpad", &_tmp3_, NULL);
	_tmp4_ = _tmp3_;
	_vala_natural_size = _tmp2_ + (2 * ((gint) _tmp4_));
	_vala_minimum_size = _vala_natural_size;
	_tmp5_ = widget;
	granite_widgets_cell_renderer_expander_revert_style_changes (self, _tmp5_);
	if (minimum_size) {
		*minimum_size = _vala_minimum_size;
	}
	if (natural_size) {
		*natural_size = _vala_natural_size;
	}
}


static void granite_widgets_cell_renderer_expander_real_get_preferred_height_for_width (GtkCellRenderer* base, GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height) {
	GraniteWidgetsCellRendererExpander * self;
	gint _vala_minimum_height = 0;
	gint _vala_natural_height = 0;
	GtkWidget* _tmp0_;
	GtkWidget* _tmp1_;
	gint _tmp2_;
	guint _tmp3_;
	guint _tmp4_;
	GtkWidget* _tmp5_;
	self = (GraniteWidgetsCellRendererExpander*) base;
	g_return_if_fail (widget != NULL);
	_tmp0_ = widget;
	granite_widgets_cell_renderer_expander_apply_style_changes (self, _tmp0_);
	_tmp1_ = widget;
	_tmp2_ = granite_widgets_cell_renderer_expander_get_arrow_size (self, _tmp1_);
	g_object_get ((GtkCellRenderer*) self, "ypad", &_tmp3_, NULL);
	_tmp4_ = _tmp3_;
	_vala_natural_height = _tmp2_ + (2 * ((gint) _tmp4_));
	_vala_minimum_height = _vala_natural_height;
	_tmp5_ = widget;
	granite_widgets_cell_renderer_expander_revert_style_changes (self, _tmp5_);
	if (minimum_height) {
		*minimum_height = _vala_minimum_height;
	}
	if (natural_height) {
		*natural_height = _vala_natural_height;
	}
}


/**
     * Gets the size of the expander arrow.
     *
     * The default implementation tries to retrieve the "expander-size" style property from
     * //widget//, as it is primarily meant to be used along with a {@link Gtk.TreeView}.
     * For those with special needs, it is recommended to override this method.
     *
     * @param widget Widget used to query the "expander-size" style property (should be a Gtk.TreeView.)
     * @return Size of the expander arrow.
     * @since 0.2
     */
static gint granite_widgets_cell_renderer_expander_real_get_arrow_size (GraniteWidgetsCellRendererExpander* self, GtkWidget* widget) {
	gint result = 0;
	gint arrow_size = 0;
	GtkWidget* _tmp0_;
	g_return_val_if_fail (widget != NULL, 0);
	_tmp0_ = widget;
	gtk_widget_style_get (_tmp0_, "expander-size", &arrow_size, NULL);
	result = arrow_size;
	return result;
}


gint granite_widgets_cell_renderer_expander_get_arrow_size (GraniteWidgetsCellRendererExpander* self, GtkWidget* widget) {
	g_return_val_if_fail (self != NULL, 0);
	return GRANITE_WIDGETS_CELL_RENDERER_EXPANDER_GET_CLASS (self)->get_arrow_size (self, widget);
}


static void granite_widgets_cell_renderer_expander_real_render (GtkCellRenderer* base, cairo_t* context, GtkWidget* widget, GdkRectangle* bg_area, GdkRectangle* cell_area, GtkCellRendererState flags) {
	GraniteWidgetsCellRendererExpander * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	GtkStyleContext* ctx = NULL;
	GtkWidget* _tmp2_;
	GtkStyleContext* _tmp3_;
	GdkRectangle aligned_area = {0};
	GtkWidget* _tmp4_;
	GtkCellRendererState _tmp5_;
	GdkRectangle _tmp6_;
	GdkRectangle _tmp7_ = {0};
	gint arrow_size = 0;
	GtkWidget* _tmp8_;
	gint _tmp9_;
	GdkRectangle _tmp10_;
	gint _tmp11_;
	gint _tmp12_;
	gint offset = 0;
	gint _tmp13_;
	gint x = 0;
	GdkRectangle _tmp14_;
	gint _tmp15_;
	GdkRectangle _tmp16_;
	gint _tmp17_;
	gint _tmp18_;
	gint y = 0;
	GdkRectangle _tmp19_;
	gint _tmp20_;
	GdkRectangle _tmp21_;
	gint _tmp22_;
	gint _tmp23_;
	GtkStateFlags state = 0;
	GtkStyleContext* _tmp24_;
	GtkStateFlags _tmp25_;
	static const GtkStateFlags EXPANDED_FLAG = GTK_STATE_FLAG_ACTIVE;
	GtkStateFlags _tmp26_ = 0;
	gboolean _tmp27_;
	gboolean _tmp28_;
	GtkStyleContext* _tmp31_;
	GtkStyleContext* _tmp32_;
	cairo_t* _tmp33_;
	gint _tmp34_;
	gint _tmp35_;
	gint _tmp36_;
	gint _tmp37_;
	GtkWidget* _tmp38_;
	self = (GraniteWidgetsCellRendererExpander*) base;
	g_return_if_fail (context != NULL);
	g_return_if_fail (widget != NULL);
	g_return_if_fail (bg_area != NULL);
	g_return_if_fail (cell_area != NULL);
	g_object_get ((GtkCellRenderer*) self, "is-expander", &_tmp0_, NULL);
	_tmp1_ = _tmp0_;
	if (!_tmp1_) {
		return;
	}
	_tmp2_ = widget;
	_tmp3_ = granite_widgets_cell_renderer_expander_apply_style_changes (self, _tmp2_);
	ctx = _tmp3_;
	_tmp4_ = widget;
	_tmp5_ = flags;
	_tmp6_ = *cell_area;
	gtk_cell_renderer_get_aligned_area ((GtkCellRenderer*) self, _tmp4_, _tmp5_, &_tmp6_, &_tmp7_);
	aligned_area = _tmp7_;
	_tmp8_ = widget;
	_tmp9_ = granite_widgets_cell_renderer_expander_get_arrow_size (self, _tmp8_);
	_tmp10_ = aligned_area;
	_tmp11_ = _tmp10_.width;
	_tmp12_ = MIN (_tmp9_, _tmp11_);
	arrow_size = _tmp12_;
	_tmp13_ = arrow_size;
	offset = _tmp13_ / 2;
	_tmp14_ = aligned_area;
	_tmp15_ = _tmp14_.x;
	_tmp16_ = aligned_area;
	_tmp17_ = _tmp16_.width;
	_tmp18_ = offset;
	x = (_tmp15_ + (_tmp17_ / 2)) - _tmp18_;
	_tmp19_ = aligned_area;
	_tmp20_ = _tmp19_.y;
	_tmp21_ = aligned_area;
	_tmp22_ = _tmp21_.height;
	_tmp23_ = offset;
	y = (_tmp20_ + (_tmp22_ / 2)) - _tmp23_;
	_tmp24_ = ctx;
	_tmp25_ = gtk_style_context_get_state (_tmp24_);
	state = _tmp25_;
	g_object_get ((GtkCellRenderer*) self, "is-expanded", &_tmp27_, NULL);
	_tmp28_ = _tmp27_;
	if (_tmp28_) {
		GtkStateFlags _tmp29_;
		_tmp29_ = state;
		_tmp26_ = _tmp29_ | EXPANDED_FLAG;
	} else {
		GtkStateFlags _tmp30_;
		_tmp30_ = state;
		_tmp26_ = _tmp30_ & (~EXPANDED_FLAG);
	}
	_tmp31_ = ctx;
	gtk_style_context_set_state (_tmp31_, _tmp26_);
	_tmp32_ = ctx;
	_tmp33_ = context;
	_tmp34_ = x;
	_tmp35_ = y;
	_tmp36_ = arrow_size;
	_tmp37_ = arrow_size;
	gtk_render_expander (_tmp32_, _tmp33_, (gdouble) _tmp34_, (gdouble) _tmp35_, (gdouble) _tmp36_, (gdouble) _tmp37_);
	_tmp38_ = widget;
	granite_widgets_cell_renderer_expander_revert_style_changes (self, _tmp38_);
}


static void granite_widgets_cell_renderer_expander_real_get_size (GtkCellRenderer* base, GtkWidget* widget, GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height) {
	GraniteWidgetsCellRendererExpander * self;
	gint _vala_x_offset = 0;
	gint _vala_y_offset = 0;
	gint _vala_width = 0;
	gint _vala_height = 0;
	self = (GraniteWidgetsCellRendererExpander*) base;
	g_return_if_fail (widget != NULL);
	g_assert_not_reached ();
	if (x_offset) {
		*x_offset = _vala_x_offset;
	}
	if (y_offset) {
		*y_offset = _vala_y_offset;
	}
	if (width) {
		*width = _vala_width;
	}
	if (height) {
		*height = _vala_height;
	}
}


static GtkStyleContext* granite_widgets_cell_renderer_expander_apply_style_changes (GraniteWidgetsCellRendererExpander* self, GtkWidget* widget) {
	GtkStyleContext* result = NULL;
	GtkStyleContext* ctx = NULL;
	GtkWidget* _tmp0_;
	GtkStyleContext* _tmp1_;
	GtkStyleContext* _tmp2_;
	gboolean _tmp3_;
	GtkStyleContext* _tmp6_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (widget != NULL, NULL);
	_tmp0_ = widget;
	_tmp1_ = gtk_widget_get_style_context (_tmp0_);
	ctx = _tmp1_;
	_tmp2_ = ctx;
	gtk_style_context_save (_tmp2_);
	_tmp3_ = self->priv->_is_category_expander;
	if (_tmp3_) {
		GtkStyleContext* _tmp4_;
		_tmp4_ = ctx;
		gtk_style_context_add_class (_tmp4_, GRANITE_STYLE_CLASS_CATEGORY_EXPANDER);
	} else {
		GtkStyleContext* _tmp5_;
		_tmp5_ = ctx;
		gtk_style_context_add_class (_tmp5_, GTK_STYLE_CLASS_EXPANDER);
	}
	_tmp6_ = ctx;
	result = _tmp6_;
	return result;
}


static void granite_widgets_cell_renderer_expander_revert_style_changes (GraniteWidgetsCellRendererExpander* self, GtkWidget* widget) {
	GtkWidget* _tmp0_;
	GtkStyleContext* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (widget != NULL);
	_tmp0_ = widget;
	_tmp1_ = gtk_widget_get_style_context (_tmp0_);
	gtk_style_context_restore (_tmp1_);
}


gboolean granite_widgets_cell_renderer_expander_get_is_category_expander (GraniteWidgetsCellRendererExpander* self) {
	gboolean result;
	gboolean _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_is_category_expander;
	result = _tmp0_;
	return result;
}


void granite_widgets_cell_renderer_expander_set_is_category_expander (GraniteWidgetsCellRendererExpander* self, gboolean value) {
	g_return_if_fail (self != NULL);
	if (granite_widgets_cell_renderer_expander_get_is_category_expander (self) != value) {
		gboolean _tmp0_;
		_tmp0_ = value;
		self->priv->_is_category_expander = _tmp0_;
		g_object_notify ((GObject *) self, "is-category-expander");
	}
}


static void granite_widgets_cell_renderer_expander_class_init (GraniteWidgetsCellRendererExpanderClass * klass) {
	granite_widgets_cell_renderer_expander_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GraniteWidgetsCellRendererExpanderPrivate));
	((GtkCellRendererClass *) klass)->get_request_mode = (GtkSizeRequestMode (*) (GtkCellRenderer *)) granite_widgets_cell_renderer_expander_real_get_request_mode;
	((GtkCellRendererClass *) klass)->get_preferred_width = (void (*) (GtkCellRenderer *, GtkWidget*, gint*, gint*)) granite_widgets_cell_renderer_expander_real_get_preferred_width;
	((GtkCellRendererClass *) klass)->get_preferred_height_for_width = (void (*) (GtkCellRenderer *, GtkWidget*, gint, gint*, gint*)) granite_widgets_cell_renderer_expander_real_get_preferred_height_for_width;
	((GraniteWidgetsCellRendererExpanderClass *) klass)->get_arrow_size = (gint (*) (GraniteWidgetsCellRendererExpander *, GtkWidget*)) granite_widgets_cell_renderer_expander_real_get_arrow_size;
	((GtkCellRendererClass *) klass)->render = (void (*) (GtkCellRenderer *, cairo_t*, GtkWidget*, GdkRectangle*, GdkRectangle*, GtkCellRendererState)) granite_widgets_cell_renderer_expander_real_render;
	((GtkCellRendererClass *) klass)->get_size = (void (*) (GtkCellRenderer *, GtkWidget*, GdkRectangle*, gint*, gint*, gint*, gint*)) granite_widgets_cell_renderer_expander_real_get_size;
	G_OBJECT_CLASS (klass)->get_property = _vala_granite_widgets_cell_renderer_expander_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_granite_widgets_cell_renderer_expander_set_property;
	G_OBJECT_CLASS (klass)->finalize = granite_widgets_cell_renderer_expander_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GRANITE_WIDGETS_CELL_RENDERER_EXPANDER_IS_CATEGORY_EXPANDER_PROPERTY, g_param_spec_boolean ("is-category-expander", "is-category-expander", "is-category-expander", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void granite_widgets_cell_renderer_expander_instance_init (GraniteWidgetsCellRendererExpander * self) {
	self->priv = GRANITE_WIDGETS_CELL_RENDERER_EXPANDER_GET_PRIVATE (self);
	self->priv->_is_category_expander = FALSE;
}


static void granite_widgets_cell_renderer_expander_finalize (GObject * obj) {
	GraniteWidgetsCellRendererExpander * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRANITE_WIDGETS_TYPE_CELL_RENDERER_EXPANDER, GraniteWidgetsCellRendererExpander);
	G_OBJECT_CLASS (granite_widgets_cell_renderer_expander_parent_class)->finalize (obj);
}


/**
 * An expander renderer.
 *
 * For it to draw an expander, the the {@link Gtk.CellRenderer.is_expander} property must
 * be set to true; otherwise nothing is drawn. The state of the expander (i.e. expanded or
 * collapsed) is controlled by the {@link Gtk.CellRenderer.is_expanded} property. 
 *
 * @since 0.2
 */
GType granite_widgets_cell_renderer_expander_get_type (void) {
	static volatile gsize granite_widgets_cell_renderer_expander_type_id__volatile = 0;
	if (g_once_init_enter (&granite_widgets_cell_renderer_expander_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GraniteWidgetsCellRendererExpanderClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) granite_widgets_cell_renderer_expander_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GraniteWidgetsCellRendererExpander), 0, (GInstanceInitFunc) granite_widgets_cell_renderer_expander_instance_init, NULL };
		GType granite_widgets_cell_renderer_expander_type_id;
		granite_widgets_cell_renderer_expander_type_id = g_type_register_static (gtk_cell_renderer_get_type (), "GraniteWidgetsCellRendererExpander", &g_define_type_info, 0);
		g_once_init_leave (&granite_widgets_cell_renderer_expander_type_id__volatile, granite_widgets_cell_renderer_expander_type_id);
	}
	return granite_widgets_cell_renderer_expander_type_id__volatile;
}


static void _vala_granite_widgets_cell_renderer_expander_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GraniteWidgetsCellRendererExpander * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GRANITE_WIDGETS_TYPE_CELL_RENDERER_EXPANDER, GraniteWidgetsCellRendererExpander);
	switch (property_id) {
		case GRANITE_WIDGETS_CELL_RENDERER_EXPANDER_IS_CATEGORY_EXPANDER_PROPERTY:
		g_value_set_boolean (value, granite_widgets_cell_renderer_expander_get_is_category_expander (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_granite_widgets_cell_renderer_expander_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GraniteWidgetsCellRendererExpander * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GRANITE_WIDGETS_TYPE_CELL_RENDERER_EXPANDER, GraniteWidgetsCellRendererExpander);
	switch (property_id) {
		case GRANITE_WIDGETS_CELL_RENDERER_EXPANDER_IS_CATEGORY_EXPANDER_PROPERTY:
		granite_widgets_cell_renderer_expander_set_is_category_expander (self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



