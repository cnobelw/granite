/* AboutDialog.c generated by valac 0.36.7, the Vala compiler
 * generated from AboutDialog.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <gdk/gdk.h>
#include <cairo.h>
#include <glib/gi18n-lib.h>
#include <unistd.h>


#define GRANITE_GTK_PATCH_TYPE_ABOUT_DIALOG (granite_gtk_patch_about_dialog_get_type ())
#define GRANITE_GTK_PATCH_ABOUT_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRANITE_GTK_PATCH_TYPE_ABOUT_DIALOG, GraniteGtkPatchAboutDialog))
#define GRANITE_GTK_PATCH_ABOUT_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRANITE_GTK_PATCH_TYPE_ABOUT_DIALOG, GraniteGtkPatchAboutDialogClass))
#define GRANITE_GTK_PATCH_IS_ABOUT_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRANITE_GTK_PATCH_TYPE_ABOUT_DIALOG))
#define GRANITE_GTK_PATCH_IS_ABOUT_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRANITE_GTK_PATCH_TYPE_ABOUT_DIALOG))
#define GRANITE_GTK_PATCH_ABOUT_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRANITE_GTK_PATCH_TYPE_ABOUT_DIALOG, GraniteGtkPatchAboutDialogClass))

typedef struct _GraniteGtkPatchAboutDialog GraniteGtkPatchAboutDialog;
typedef struct _GraniteGtkPatchAboutDialogClass GraniteGtkPatchAboutDialogClass;
typedef struct _GraniteGtkPatchAboutDialogPrivate GraniteGtkPatchAboutDialogPrivate;

#define GRANITE_WIDGETS_TYPE_ABOUT_DIALOG (granite_widgets_about_dialog_get_type ())
#define GRANITE_WIDGETS_ABOUT_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRANITE_WIDGETS_TYPE_ABOUT_DIALOG, GraniteWidgetsAboutDialog))
#define GRANITE_WIDGETS_ABOUT_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRANITE_WIDGETS_TYPE_ABOUT_DIALOG, GraniteWidgetsAboutDialogClass))
#define GRANITE_WIDGETS_IS_ABOUT_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRANITE_WIDGETS_TYPE_ABOUT_DIALOG))
#define GRANITE_WIDGETS_IS_ABOUT_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRANITE_WIDGETS_TYPE_ABOUT_DIALOG))
#define GRANITE_WIDGETS_ABOUT_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRANITE_WIDGETS_TYPE_ABOUT_DIALOG, GraniteWidgetsAboutDialogClass))

typedef struct _GraniteWidgetsAboutDialog GraniteWidgetsAboutDialog;
typedef struct _GraniteWidgetsAboutDialogClass GraniteWidgetsAboutDialogClass;
typedef struct _GraniteWidgetsAboutDialogPrivate GraniteWidgetsAboutDialogPrivate;

#define GRANITE_DRAWING_TYPE_BUFFER_SURFACE (granite_drawing_buffer_surface_get_type ())
#define GRANITE_DRAWING_BUFFER_SURFACE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRANITE_DRAWING_TYPE_BUFFER_SURFACE, GraniteDrawingBufferSurface))
#define GRANITE_DRAWING_BUFFER_SURFACE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRANITE_DRAWING_TYPE_BUFFER_SURFACE, GraniteDrawingBufferSurfaceClass))
#define GRANITE_DRAWING_IS_BUFFER_SURFACE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRANITE_DRAWING_TYPE_BUFFER_SURFACE))
#define GRANITE_DRAWING_IS_BUFFER_SURFACE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRANITE_DRAWING_TYPE_BUFFER_SURFACE))
#define GRANITE_DRAWING_BUFFER_SURFACE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRANITE_DRAWING_TYPE_BUFFER_SURFACE, GraniteDrawingBufferSurfaceClass))

typedef struct _GraniteDrawingBufferSurface GraniteDrawingBufferSurface;
typedef struct _GraniteDrawingBufferSurfaceClass GraniteDrawingBufferSurfaceClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block3Data Block3Data;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _GraniteGtkPatchAboutDialog {
	GtkDialog parent_instance;
	GraniteGtkPatchAboutDialogPrivate * priv;
};

struct _GraniteGtkPatchAboutDialogClass {
	GtkDialogClass parent_class;
	gboolean (*activate_link) (GraniteGtkPatchAboutDialog* self, const gchar* uri);
};

struct _GraniteWidgetsAboutDialog {
	GraniteGtkPatchAboutDialog parent_instance;
	GraniteWidgetsAboutDialogPrivate * priv;
};

struct _GraniteWidgetsAboutDialogClass {
	GraniteGtkPatchAboutDialogClass parent_class;
};

struct _GraniteWidgetsAboutDialogPrivate {
	gchar* _help;
	gchar* _translate;
	gchar* _bug;
	GtkButton* help_button;
	GtkButton* translate_button;
	GtkButton* bug_button;
	GraniteDrawingBufferSurface* buffer;
	gint shadow_blur;
	gint shadow_x;
	gint shadow_y;
	gdouble shadow_alpha;
};

struct _Block3Data {
	int _ref_count_;
	GraniteWidgetsAboutDialog* self;
	GtkWindow* draw_ref;
	gint w;
	gint h;
};


static gpointer granite_widgets_about_dialog_parent_class = NULL;

GType granite_gtk_patch_about_dialog_get_type (void) G_GNUC_CONST;
GType granite_widgets_about_dialog_get_type (void) G_GNUC_CONST;
GType granite_drawing_buffer_surface_get_type (void) G_GNUC_CONST;
#define GRANITE_WIDGETS_ABOUT_DIALOG_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GRANITE_WIDGETS_TYPE_ABOUT_DIALOG, GraniteWidgetsAboutDialogPrivate))
enum  {
	GRANITE_WIDGETS_ABOUT_DIALOG_0_PROPERTY,
	GRANITE_WIDGETS_ABOUT_DIALOG_HELP_PROPERTY,
	GRANITE_WIDGETS_ABOUT_DIALOG_TRANSLATE_PROPERTY,
	GRANITE_WIDGETS_ABOUT_DIALOG_BUG_PROPERTY
};
#define GRANITE_WIDGETS_ABOUT_DIALOG_HELP_BUTTON_STYLESHEET "\n" \
"            .help_button {\n" \
"                border-radius: 200px;\n" \
"            }\n" \
"        "
GraniteWidgetsAboutDialog* granite_widgets_about_dialog_new (void);
GraniteWidgetsAboutDialog* granite_widgets_about_dialog_construct (GType object_type);
static Block3Data* block3_data_ref (Block3Data* _data3_);
static void block3_data_unref (void * _userdata_);
GraniteGtkPatchAboutDialog* granite_gtk_patch_about_dialog_new (void);
GraniteGtkPatchAboutDialog* granite_gtk_patch_about_dialog_construct (GType object_type);
#define GRANITE_STYLE_CLASS_CONTENT_VIEW_WINDOW "content-view-window"
void granite_widgets_decorated_window_set_default_theming (GtkWindow* ref_window);
#define GRANITE_STYLE_CLASS_CONTENT_VIEW "content-view"
GtkCssProvider* granite_widgets_utils_set_theming (GtkWidget* widget, const gchar* stylesheet, const gchar* class_name, gint priority);
#define GRANITE_STYLE_CLASS_HELP_BUTTON "help_button"
static void __lambda10_ (GraniteWidgetsAboutDialog* self);
const gchar* granite_widgets_about_dialog_get_help (GraniteWidgetsAboutDialog* self);
static void ___lambda10__gtk_button_clicked (GtkButton* _sender, gpointer self);
static void __lambda11_ (GraniteWidgetsAboutDialog* self, GtkAllocation* alloc);
static void ___lambda11__gtk_widget_size_allocate (GtkWidget* _sender, GtkAllocation* allocation, gpointer self);
static void __lambda12_ (GraniteWidgetsAboutDialog* self);
const gchar* granite_widgets_about_dialog_get_translate (GraniteWidgetsAboutDialog* self);
static void ___lambda12__gtk_button_clicked (GtkButton* _sender, gpointer self);
static void __lambda13_ (GraniteWidgetsAboutDialog* self);
const gchar* granite_widgets_about_dialog_get_bug (GraniteWidgetsAboutDialog* self);
static void ___lambda13__gtk_button_clicked (GtkButton* _sender, gpointer self);
static void __lambda14_ (Block3Data* _data3_);
GraniteDrawingBufferSurface* granite_drawing_buffer_surface_new (gint width, gint height);
GraniteDrawingBufferSurface* granite_drawing_buffer_surface_construct (GType object_type, gint width, gint height);
cairo_t* granite_drawing_buffer_surface_get_context (GraniteDrawingBufferSurface* self);
void granite_drawing_buffer_surface_exponential_blur (GraniteDrawingBufferSurface* self, gint radius);
static void ___lambda14__gtk_widget_size_allocate (GtkWidget* _sender, GtkAllocation* allocation, gpointer self);
static gboolean __lambda15_ (Block3Data* _data3_, cairo_t* ctx);
cairo_surface_t* granite_drawing_buffer_surface_get_surface (GraniteDrawingBufferSurface* self);
static gboolean ___lambda15__gtk_widget_draw (GtkWidget* _sender, cairo_t* cr, gpointer self);
static gboolean __lambda16_ (GraniteWidgetsAboutDialog* self, GdkEventButton* e);
static gboolean ___lambda16__gtk_widget_button_press_event (GtkWidget* _sender, GdkEventButton* event, gpointer self);
void granite_widgets_about_dialog_set_help (GraniteWidgetsAboutDialog* self, const gchar* value);
void granite_widgets_about_dialog_set_translate (GraniteWidgetsAboutDialog* self, const gchar* value);
void granite_widgets_about_dialog_set_bug (GraniteWidgetsAboutDialog* self, const gchar* value);
static void granite_widgets_about_dialog_finalize (GObject * obj);
static void _vala_granite_widgets_about_dialog_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_granite_widgets_about_dialog_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
void granite_widgets_show_about_dialog (GtkWindow* parent, ...);


/**
         * Creates a new Granite.Widgets.AboutDialog
         */
static Block3Data* block3_data_ref (Block3Data* _data3_) {
	g_atomic_int_inc (&_data3_->_ref_count_);
	return _data3_;
}


static void block3_data_unref (void * _userdata_) {
	Block3Data* _data3_;
	_data3_ = (Block3Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data3_->_ref_count_)) {
		GraniteWidgetsAboutDialog* self;
		self = _data3_->self;
		_g_object_unref0 (_data3_->draw_ref);
		_g_object_unref0 (self);
		g_slice_free (Block3Data, _data3_);
	}
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void __lambda10_ (GraniteWidgetsAboutDialog* self) {
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	gboolean _tmp2_ = FALSE;
	_tmp0_ = granite_widgets_about_dialog_get_help (self);
	_tmp1_ = _tmp0_;
	g_signal_emit_by_name ((GraniteGtkPatchAboutDialog*) self, "activate-link", _tmp1_, &_tmp2_);
}


static void ___lambda10__gtk_button_clicked (GtkButton* _sender, gpointer self) {
	__lambda10_ ((GraniteWidgetsAboutDialog*) self);
}


static void __lambda11_ (GraniteWidgetsAboutDialog* self, GtkAllocation* alloc) {
	GtkButton* _tmp0_;
	GtkAllocation _tmp1_;
	gint _tmp2_;
	g_return_if_fail (alloc != NULL);
	_tmp0_ = self->priv->help_button;
	_tmp1_ = *alloc;
	_tmp2_ = _tmp1_.height;
	gtk_widget_set_size_request ((GtkWidget*) _tmp0_, _tmp2_, -1);
}


static void ___lambda11__gtk_widget_size_allocate (GtkWidget* _sender, GtkAllocation* allocation, gpointer self) {
	__lambda11_ ((GraniteWidgetsAboutDialog*) self, allocation);
}


static void __lambda12_ (GraniteWidgetsAboutDialog* self) {
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	gboolean _tmp2_ = FALSE;
	_tmp0_ = granite_widgets_about_dialog_get_translate (self);
	_tmp1_ = _tmp0_;
	g_signal_emit_by_name ((GraniteGtkPatchAboutDialog*) self, "activate-link", _tmp1_, &_tmp2_);
}


static void ___lambda12__gtk_button_clicked (GtkButton* _sender, gpointer self) {
	__lambda12_ ((GraniteWidgetsAboutDialog*) self);
}


static void __lambda13_ (GraniteWidgetsAboutDialog* self) {
	GError * _inner_error_ = NULL;
	{
		pid_t _tmp0_;
		gchar* _tmp1_;
		gchar* _tmp2_;
		_tmp0_ = getpid ();
		_tmp1_ = g_strdup_printf ("apport-bug %i", (gint) _tmp0_);
		_tmp2_ = _tmp1_;
		g_spawn_command_line_async (_tmp2_, &_inner_error_);
		_g_free0 (_tmp2_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch22_g_error;
		}
	}
	goto __finally22;
	__catch22_g_error:
	{
		GError* e = NULL;
		const gchar* _tmp3_;
		const gchar* _tmp4_;
		gboolean _tmp5_ = FALSE;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_warning ("AboutDialog.vala:136: Could Not Launch 'apport-bug'.");
		_tmp3_ = granite_widgets_about_dialog_get_bug (self);
		_tmp4_ = _tmp3_;
		g_signal_emit_by_name ((GraniteGtkPatchAboutDialog*) self, "activate-link", _tmp4_, &_tmp5_);
		_g_error_free0 (e);
	}
	__finally22:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


static void ___lambda13__gtk_button_clicked (GtkButton* _sender, gpointer self) {
	__lambda13_ ((GraniteWidgetsAboutDialog*) self);
}


static void __lambda14_ (Block3Data* _data3_) {
	GraniteWidgetsAboutDialog* self;
	gboolean _tmp0_ = FALSE;
	gint _tmp1_;
	gint _tmp3_;
	gint _tmp4_;
	GraniteDrawingBufferSurface* _tmp5_;
	GraniteDrawingBufferSurface* _tmp6_;
	cairo_t* _tmp7_;
	cairo_t* _tmp8_;
	gint _tmp9_;
	gint _tmp10_;
	gint _tmp11_;
	gint _tmp12_;
	gint _tmp13_;
	gint _tmp14_;
	gint _tmp15_;
	gint _tmp16_;
	GraniteDrawingBufferSurface* _tmp17_;
	cairo_t* _tmp18_;
	cairo_t* _tmp19_;
	gdouble _tmp20_;
	GraniteDrawingBufferSurface* _tmp21_;
	cairo_t* _tmp22_;
	cairo_t* _tmp23_;
	GraniteDrawingBufferSurface* _tmp24_;
	gint _tmp25_;
	GtkStyleContext* _tmp26_;
	GraniteDrawingBufferSurface* _tmp27_;
	cairo_t* _tmp28_;
	cairo_t* _tmp29_;
	gint _tmp30_;
	gint _tmp31_;
	gint _tmp32_;
	gint _tmp33_;
	gint _tmp34_;
	gint _tmp35_;
	gint _tmp36_;
	gint _tmp37_;
	self = _data3_->self;
	_tmp1_ = gtk_widget_get_allocated_width ((GtkWidget*) self);
	if (_tmp1_ == _data3_->w) {
		gint _tmp2_;
		_tmp2_ = gtk_widget_get_allocated_height ((GtkWidget*) self);
		_tmp0_ = _tmp2_ == _data3_->h;
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		return;
	}
	_tmp3_ = gtk_widget_get_allocated_width ((GtkWidget*) self);
	_data3_->w = _tmp3_;
	_tmp4_ = gtk_widget_get_allocated_height ((GtkWidget*) self);
	_data3_->h = _tmp4_;
	_tmp5_ = granite_drawing_buffer_surface_new (_data3_->w, _data3_->h);
	_g_object_unref0 (self->priv->buffer);
	self->priv->buffer = _tmp5_;
	_tmp6_ = self->priv->buffer;
	_tmp7_ = granite_drawing_buffer_surface_get_context (_tmp6_);
	_tmp8_ = _tmp7_;
	_tmp9_ = self->priv->shadow_blur;
	_tmp10_ = self->priv->shadow_x;
	_tmp11_ = self->priv->shadow_blur;
	_tmp12_ = self->priv->shadow_y;
	_tmp13_ = self->priv->shadow_blur;
	_tmp14_ = self->priv->shadow_x;
	_tmp15_ = self->priv->shadow_blur;
	_tmp16_ = self->priv->shadow_y;
	cairo_rectangle (_tmp8_, (gdouble) (_tmp9_ + _tmp10_), (gdouble) (_tmp11_ + _tmp12_), (gdouble) ((_data3_->w - (_tmp13_ * 2)) + _tmp14_), (gdouble) ((_data3_->h - (_tmp15_ * 2)) + _tmp16_));
	_tmp17_ = self->priv->buffer;
	_tmp18_ = granite_drawing_buffer_surface_get_context (_tmp17_);
	_tmp19_ = _tmp18_;
	_tmp20_ = self->priv->shadow_alpha;
	cairo_set_source_rgba (_tmp19_, (gdouble) 0, (gdouble) 0, (gdouble) 0, _tmp20_);
	_tmp21_ = self->priv->buffer;
	_tmp22_ = granite_drawing_buffer_surface_get_context (_tmp21_);
	_tmp23_ = _tmp22_;
	cairo_fill (_tmp23_);
	_tmp24_ = self->priv->buffer;
	_tmp25_ = self->priv->shadow_blur;
	granite_drawing_buffer_surface_exponential_blur (_tmp24_, _tmp25_ / 2);
	_tmp26_ = gtk_widget_get_style_context ((GtkWidget*) _data3_->draw_ref);
	_tmp27_ = self->priv->buffer;
	_tmp28_ = granite_drawing_buffer_surface_get_context (_tmp27_);
	_tmp29_ = _tmp28_;
	_tmp30_ = self->priv->shadow_blur;
	_tmp31_ = self->priv->shadow_x;
	_tmp32_ = self->priv->shadow_blur;
	_tmp33_ = self->priv->shadow_y;
	_tmp34_ = self->priv->shadow_blur;
	_tmp35_ = self->priv->shadow_x;
	_tmp36_ = self->priv->shadow_blur;
	_tmp37_ = self->priv->shadow_y;
	gtk_render_activity (_tmp26_, _tmp29_, (gdouble) (_tmp30_ + _tmp31_), (gdouble) (_tmp32_ + _tmp33_), (gdouble) ((_data3_->w - (_tmp34_ * 2)) + _tmp35_), (gdouble) ((_data3_->h - (_tmp36_ * 2)) + _tmp37_));
}


static void ___lambda14__gtk_widget_size_allocate (GtkWidget* _sender, GtkAllocation* allocation, gpointer self) {
	__lambda14_ (self);
}


static gboolean __lambda15_ (Block3Data* _data3_, cairo_t* ctx) {
	GraniteWidgetsAboutDialog* self;
	gboolean result = FALSE;
	GraniteDrawingBufferSurface* _tmp0_;
	cairo_t* _tmp1_;
	cairo_t* _tmp2_;
	cairo_t* _tmp3_;
	cairo_t* _tmp4_;
	cairo_t* _tmp5_;
	GraniteDrawingBufferSurface* _tmp6_;
	cairo_surface_t* _tmp7_;
	cairo_surface_t* _tmp8_;
	cairo_t* _tmp9_;
	self = _data3_->self;
	g_return_val_if_fail (ctx != NULL, FALSE);
	_tmp0_ = self->priv->buffer;
	if (_tmp0_ == NULL) {
		result = FALSE;
		return result;
	}
	_tmp1_ = ctx;
	cairo_set_operator (_tmp1_, CAIRO_OPERATOR_SOURCE);
	_tmp2_ = ctx;
	cairo_rectangle (_tmp2_, (gdouble) 0, (gdouble) 0, (gdouble) _data3_->w, (gdouble) _data3_->h);
	_tmp3_ = ctx;
	cairo_set_source_rgba (_tmp3_, (gdouble) 0, (gdouble) 0, (gdouble) 0, (gdouble) 0);
	_tmp4_ = ctx;
	cairo_fill (_tmp4_);
	_tmp5_ = ctx;
	_tmp6_ = self->priv->buffer;
	_tmp7_ = granite_drawing_buffer_surface_get_surface (_tmp6_);
	_tmp8_ = _tmp7_;
	cairo_set_source_surface (_tmp5_, _tmp8_, (gdouble) 0, (gdouble) 0);
	_tmp9_ = ctx;
	cairo_paint (_tmp9_);
	result = FALSE;
	return result;
}


static gboolean ___lambda15__gtk_widget_draw (GtkWidget* _sender, cairo_t* cr, gpointer self) {
	gboolean result;
	result = __lambda15_ (self, cr);
	return result;
}


static gboolean __lambda16_ (GraniteWidgetsAboutDialog* self, GdkEventButton* e) {
	gboolean result = FALSE;
	GdkEventButton* _tmp0_;
	guint _tmp1_;
	g_return_val_if_fail (e != NULL, FALSE);
	_tmp0_ = e;
	_tmp1_ = _tmp0_->button;
	if (_tmp1_ == ((guint) 1)) {
		GdkEventButton* _tmp2_;
		guint _tmp3_;
		GdkEventButton* _tmp4_;
		gdouble _tmp5_;
		GdkEventButton* _tmp6_;
		gdouble _tmp7_;
		GdkEventButton* _tmp8_;
		guint32 _tmp9_;
		_tmp2_ = e;
		_tmp3_ = _tmp2_->button;
		_tmp4_ = e;
		_tmp5_ = _tmp4_->x_root;
		_tmp6_ = e;
		_tmp7_ = _tmp6_->y_root;
		_tmp8_ = e;
		_tmp9_ = _tmp8_->time;
		gtk_window_begin_move_drag ((GtkWindow*) self, (gint) _tmp3_, (gint) _tmp5_, (gint) _tmp7_, _tmp9_);
		result = TRUE;
		return result;
	}
	result = FALSE;
	return result;
}


static gboolean ___lambda16__gtk_widget_button_press_event (GtkWidget* _sender, GdkEventButton* event, gpointer self) {
	gboolean result;
	result = __lambda16_ ((GraniteWidgetsAboutDialog*) self, event);
	return result;
}


GraniteWidgetsAboutDialog* granite_widgets_about_dialog_construct (GType object_type) {
	GraniteWidgetsAboutDialog * self = NULL;
	Block3Data* _data3_;
	GtkBox* action_area = NULL;
	GtkWidget* _tmp0_;
	GtkBox* _tmp1_;
	GtkWindow* _tmp2_;
	GtkStyleContext* _tmp3_;
	GtkStyleContext* _tmp4_;
	GdkScreen* _tmp5_;
	GdkVisual* _tmp6_;
	GtkBox* _tmp7_;
	GtkBox* _tmp8_;
	GtkBox* _tmp9_;
	GtkButton* _tmp10_;
	GtkButton* _tmp11_;
	GtkCssProvider* _tmp12_;
	GtkCssProvider* _tmp13_;
	GtkButton* _tmp14_;
	GtkButton* _tmp15_;
	GtkButton* _tmp16_;
	GtkButton* _tmp17_;
	GtkButton* _tmp18_;
	GtkButton* _tmp19_;
	GtkButton* _tmp20_;
	GtkButton* _tmp21_;
	GtkButton* _tmp22_;
	GtkButton* _tmp23_;
	GtkButton* _tmp24_;
	GtkButton* _tmp25_;
	GtkButton* _tmp26_;
	GtkButton* _tmp27_;
	_data3_ = g_slice_new0 (Block3Data);
	_data3_->_ref_count_ = 1;
	self = (GraniteWidgetsAboutDialog*) granite_gtk_patch_about_dialog_construct (object_type);
	_data3_->self = g_object_ref (self);
	_tmp0_ = gtk_dialog_get_action_area ((GtkDialog*) self);
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, gtk_box_get_type (), GtkBox));
	action_area = _tmp1_;
	_tmp2_ = (GtkWindow*) gtk_window_new (GTK_WINDOW_TOPLEVEL);
	g_object_ref_sink (_tmp2_);
	_data3_->draw_ref = _tmp2_;
	_tmp3_ = gtk_widget_get_style_context ((GtkWidget*) _data3_->draw_ref);
	gtk_style_context_add_class (_tmp3_, GRANITE_STYLE_CLASS_CONTENT_VIEW_WINDOW);
	granite_widgets_decorated_window_set_default_theming (_data3_->draw_ref);
	_tmp4_ = gtk_widget_get_style_context ((GtkWidget*) action_area);
	gtk_style_context_add_class (_tmp4_, GRANITE_STYLE_CLASS_CONTENT_VIEW);
	gtk_window_set_decorated ((GtkWindow*) self, FALSE);
	_tmp5_ = gtk_window_get_screen ((GtkWindow*) self);
	_tmp6_ = gdk_screen_get_rgba_visual (_tmp5_);
	gtk_widget_set_visual ((GtkWidget*) self, _tmp6_);
	gtk_widget_set_app_paintable ((GtkWidget*) self, TRUE);
	g_object_set ((GtkWidget*) action_area, "margin", 4, NULL);
	gtk_widget_set_margin_bottom ((GtkWidget*) action_area, 8);
	_tmp7_ = (GtkBox*) gtk_dialog_get_content_area ((GtkDialog*) self);
	g_object_set ((GtkWidget*) _tmp7_, "margin", 10, NULL);
	_tmp8_ = (GtkBox*) gtk_dialog_get_content_area ((GtkDialog*) self);
	gtk_widget_set_margin_top ((GtkWidget*) _tmp8_, 27);
	_tmp9_ = (GtkBox*) gtk_dialog_get_content_area ((GtkDialog*) self);
	gtk_widget_set_margin_bottom ((GtkWidget*) _tmp9_, 3);
	_tmp10_ = (GtkButton*) gtk_button_new_with_label ("?");
	g_object_ref_sink (_tmp10_);
	_g_object_unref0 (self->priv->help_button);
	self->priv->help_button = _tmp10_;
	_tmp11_ = self->priv->help_button;
	_tmp12_ = granite_widgets_utils_set_theming ((GtkWidget*) _tmp11_, GRANITE_WIDGETS_ABOUT_DIALOG_HELP_BUTTON_STYLESHEET, GRANITE_STYLE_CLASS_HELP_BUTTON, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
	_tmp13_ = _tmp12_;
	_g_object_unref0 (_tmp13_);
	_tmp14_ = self->priv->help_button;
	gtk_widget_set_halign ((GtkWidget*) _tmp14_, GTK_ALIGN_CENTER);
	_tmp15_ = self->priv->help_button;
	g_signal_connect_object (_tmp15_, "clicked", (GCallback) ___lambda10__gtk_button_clicked, self, 0);
	_tmp16_ = self->priv->help_button;
	g_signal_connect_object ((GtkWidget*) _tmp16_, "size-allocate", (GCallback) ___lambda11__gtk_widget_size_allocate, self, 0);
	_tmp17_ = self->priv->help_button;
	gtk_box_pack_end (action_area, (GtkWidget*) _tmp17_, FALSE, FALSE, (guint) 0);
	_tmp18_ = self->priv->help_button;
	gtk_button_box_set_child_secondary (G_TYPE_CHECK_INSTANCE_CAST (action_area, gtk_button_box_get_type (), GtkButtonBox), (GtkWidget*) _tmp18_, TRUE);
	_tmp19_ = self->priv->help_button;
	gtk_button_box_set_child_non_homogeneous (G_TYPE_CHECK_INSTANCE_CAST (action_area, gtk_button_box_get_type (), GtkButtonBox), (GtkWidget*) _tmp19_, TRUE);
	_tmp20_ = (GtkButton*) gtk_button_new_with_label (_ ("Translate This App"));
	g_object_ref_sink (_tmp20_);
	_g_object_unref0 (self->priv->translate_button);
	self->priv->translate_button = _tmp20_;
	_tmp21_ = self->priv->translate_button;
	g_signal_connect_object (_tmp21_, "clicked", (GCallback) ___lambda12__gtk_button_clicked, self, 0);
	_tmp22_ = self->priv->translate_button;
	gtk_box_pack_start (action_area, (GtkWidget*) _tmp22_, FALSE, FALSE, (guint) 0);
	_tmp23_ = (GtkButton*) gtk_button_new_with_label (_ ("Report a Problem"));
	g_object_ref_sink (_tmp23_);
	_g_object_unref0 (self->priv->bug_button);
	self->priv->bug_button = _tmp23_;
	_tmp24_ = self->priv->bug_button;
	g_signal_connect_object (_tmp24_, "clicked", (GCallback) ___lambda13__gtk_button_clicked, self, 0);
	_tmp25_ = self->priv->bug_button;
	gtk_box_pack_start (action_area, (GtkWidget*) _tmp25_, FALSE, FALSE, (guint) 0);
	_tmp26_ = self->priv->bug_button;
	gtk_box_reorder_child (action_area, (GtkWidget*) _tmp26_, 0);
	_tmp27_ = self->priv->translate_button;
	gtk_box_reorder_child (action_area, (GtkWidget*) _tmp27_, 0);
	g_object_set ((GtkWidget*) self, "height-request", 282, NULL);
	_data3_->w = -1;
	_data3_->h = -1;
	g_signal_connect_data ((GtkWidget*) self, "size-allocate", (GCallback) ___lambda14__gtk_widget_size_allocate, block3_data_ref (_data3_), (GClosureNotify) block3_data_unref, 0);
	g_signal_connect_data ((GtkWidget*) self, "draw", (GCallback) ___lambda15__gtk_widget_draw, block3_data_ref (_data3_), (GClosureNotify) block3_data_unref, 0);
	g_signal_connect_object ((GtkWidget*) self, "button-press-event", (GCallback) ___lambda16__gtk_widget_button_press_event, self, 0);
	gtk_widget_show_all ((GtkWidget*) self);
	_g_object_unref0 (action_area);
	block3_data_unref (_data3_);
	_data3_ = NULL;
	return self;
}


GraniteWidgetsAboutDialog* granite_widgets_about_dialog_new (void) {
	return granite_widgets_about_dialog_construct (GRANITE_WIDGETS_TYPE_ABOUT_DIALOG);
}


const gchar* granite_widgets_about_dialog_get_help (GraniteWidgetsAboutDialog* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_help;
	result = _tmp0_;
	return result;
}


void granite_widgets_about_dialog_set_help (GraniteWidgetsAboutDialog* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gboolean _tmp2_ = FALSE;
	const gchar* _tmp3_;
	GtkButton* _tmp5_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_help);
	self->priv->_help = _tmp1_;
	_tmp3_ = self->priv->_help;
	if (_tmp3_ == NULL) {
		_tmp2_ = TRUE;
	} else {
		const gchar* _tmp4_;
		_tmp4_ = self->priv->_help;
		_tmp2_ = g_strcmp0 (_tmp4_, "") == 0;
	}
	_tmp5_ = self->priv->help_button;
	gtk_widget_set_sensitive ((GtkWidget*) _tmp5_, !_tmp2_);
	g_object_notify ((GObject *) self, "help");
}


const gchar* granite_widgets_about_dialog_get_translate (GraniteWidgetsAboutDialog* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_translate;
	result = _tmp0_;
	return result;
}


void granite_widgets_about_dialog_set_translate (GraniteWidgetsAboutDialog* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gboolean _tmp2_ = FALSE;
	const gchar* _tmp3_;
	GtkButton* _tmp5_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_translate);
	self->priv->_translate = _tmp1_;
	_tmp3_ = self->priv->_translate;
	if (_tmp3_ == NULL) {
		_tmp2_ = TRUE;
	} else {
		const gchar* _tmp4_;
		_tmp4_ = self->priv->_translate;
		_tmp2_ = g_strcmp0 (_tmp4_, "") == 0;
	}
	_tmp5_ = self->priv->translate_button;
	gtk_widget_set_sensitive ((GtkWidget*) _tmp5_, !_tmp2_);
	g_object_notify ((GObject *) self, "translate");
}


const gchar* granite_widgets_about_dialog_get_bug (GraniteWidgetsAboutDialog* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_bug;
	result = _tmp0_;
	return result;
}


void granite_widgets_about_dialog_set_bug (GraniteWidgetsAboutDialog* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gboolean _tmp2_ = FALSE;
	const gchar* _tmp3_;
	GtkButton* _tmp5_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_bug);
	self->priv->_bug = _tmp1_;
	_tmp3_ = self->priv->_bug;
	if (_tmp3_ == NULL) {
		_tmp2_ = TRUE;
	} else {
		const gchar* _tmp4_;
		_tmp4_ = self->priv->_bug;
		_tmp2_ = g_strcmp0 (_tmp4_, "") == 0;
	}
	_tmp5_ = self->priv->bug_button;
	gtk_widget_set_sensitive ((GtkWidget*) _tmp5_, !_tmp2_);
	g_object_notify ((GObject *) self, "bug");
}


static void granite_widgets_about_dialog_class_init (GraniteWidgetsAboutDialogClass * klass) {
	granite_widgets_about_dialog_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GraniteWidgetsAboutDialogPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_granite_widgets_about_dialog_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_granite_widgets_about_dialog_set_property;
	G_OBJECT_CLASS (klass)->finalize = granite_widgets_about_dialog_finalize;
	/**
	         * The URL for the link to the website of the program.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GRANITE_WIDGETS_ABOUT_DIALOG_HELP_PROPERTY, g_param_spec_string ("help", "help", "help", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	         * The URL for the link to the website of the program.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GRANITE_WIDGETS_ABOUT_DIALOG_TRANSLATE_PROPERTY, g_param_spec_string ("translate", "translate", "translate", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	         * The URL for the link to the website of the program.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GRANITE_WIDGETS_ABOUT_DIALOG_BUG_PROPERTY, g_param_spec_string ("bug", "bug", "bug", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void granite_widgets_about_dialog_instance_init (GraniteWidgetsAboutDialog * self) {
	gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	self->priv = GRANITE_WIDGETS_ABOUT_DIALOG_GET_PRIVATE (self);
	_tmp0_ = g_strdup ("");
	self->priv->_help = _tmp0_;
	_tmp1_ = g_strdup ("");
	self->priv->_translate = _tmp1_;
	_tmp2_ = g_strdup ("");
	self->priv->_bug = _tmp2_;
	self->priv->shadow_blur = 15;
	self->priv->shadow_x = 0;
	self->priv->shadow_y = 2;
	self->priv->shadow_alpha = 0.3;
}


static void granite_widgets_about_dialog_finalize (GObject * obj) {
	GraniteWidgetsAboutDialog * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRANITE_WIDGETS_TYPE_ABOUT_DIALOG, GraniteWidgetsAboutDialog);
	_g_free0 (self->priv->_help);
	_g_free0 (self->priv->_translate);
	_g_free0 (self->priv->_bug);
	_g_object_unref0 (self->priv->help_button);
	_g_object_unref0 (self->priv->translate_button);
	_g_object_unref0 (self->priv->bug_button);
	_g_object_unref0 (self->priv->buffer);
	G_OBJECT_CLASS (granite_widgets_about_dialog_parent_class)->finalize (obj);
}


/**
     * This class makes an about dialog which goes in the App Menu on most apps.
     * 
     * {{../../doc/images/AboutDialog.png}}
     */
GType granite_widgets_about_dialog_get_type (void) {
	static volatile gsize granite_widgets_about_dialog_type_id__volatile = 0;
	if (g_once_init_enter (&granite_widgets_about_dialog_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GraniteWidgetsAboutDialogClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) granite_widgets_about_dialog_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GraniteWidgetsAboutDialog), 0, (GInstanceInitFunc) granite_widgets_about_dialog_instance_init, NULL };
		GType granite_widgets_about_dialog_type_id;
		granite_widgets_about_dialog_type_id = g_type_register_static (GRANITE_GTK_PATCH_TYPE_ABOUT_DIALOG, "GraniteWidgetsAboutDialog", &g_define_type_info, 0);
		g_once_init_leave (&granite_widgets_about_dialog_type_id__volatile, granite_widgets_about_dialog_type_id);
	}
	return granite_widgets_about_dialog_type_id__volatile;
}


static void _vala_granite_widgets_about_dialog_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GraniteWidgetsAboutDialog * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GRANITE_WIDGETS_TYPE_ABOUT_DIALOG, GraniteWidgetsAboutDialog);
	switch (property_id) {
		case GRANITE_WIDGETS_ABOUT_DIALOG_HELP_PROPERTY:
		g_value_set_string (value, granite_widgets_about_dialog_get_help (self));
		break;
		case GRANITE_WIDGETS_ABOUT_DIALOG_TRANSLATE_PROPERTY:
		g_value_set_string (value, granite_widgets_about_dialog_get_translate (self));
		break;
		case GRANITE_WIDGETS_ABOUT_DIALOG_BUG_PROPERTY:
		g_value_set_string (value, granite_widgets_about_dialog_get_bug (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_granite_widgets_about_dialog_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GraniteWidgetsAboutDialog * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GRANITE_WIDGETS_TYPE_ABOUT_DIALOG, GraniteWidgetsAboutDialog);
	switch (property_id) {
		case GRANITE_WIDGETS_ABOUT_DIALOG_HELP_PROPERTY:
		granite_widgets_about_dialog_set_help (self, g_value_get_string (value));
		break;
		case GRANITE_WIDGETS_ABOUT_DIALOG_TRANSLATE_PROPERTY:
		granite_widgets_about_dialog_set_translate (self, g_value_get_string (value));
		break;
		case GRANITE_WIDGETS_ABOUT_DIALOG_BUG_PROPERTY:
		granite_widgets_about_dialog_set_bug (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



