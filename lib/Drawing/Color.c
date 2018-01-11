/* Color.c generated by valac 0.36.7, the Vala compiler
 * generated from Color.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <gdk/gdk.h>


#define GRANITE_SERVICES_TYPE_SETTINGS_SERIALIZABLE (granite_services_settings_serializable_get_type ())
#define GRANITE_SERVICES_SETTINGS_SERIALIZABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRANITE_SERVICES_TYPE_SETTINGS_SERIALIZABLE, GraniteServicesSettingsSerializable))
#define GRANITE_SERVICES_IS_SETTINGS_SERIALIZABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRANITE_SERVICES_TYPE_SETTINGS_SERIALIZABLE))
#define GRANITE_SERVICES_SETTINGS_SERIALIZABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GRANITE_SERVICES_TYPE_SETTINGS_SERIALIZABLE, GraniteServicesSettingsSerializableIface))

typedef struct _GraniteServicesSettingsSerializable GraniteServicesSettingsSerializable;
typedef struct _GraniteServicesSettingsSerializableIface GraniteServicesSettingsSerializableIface;

#define GRANITE_DRAWING_TYPE_COLOR (granite_drawing_color_get_type ())
#define GRANITE_DRAWING_COLOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRANITE_DRAWING_TYPE_COLOR, GraniteDrawingColor))
#define GRANITE_DRAWING_COLOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRANITE_DRAWING_TYPE_COLOR, GraniteDrawingColorClass))
#define GRANITE_DRAWING_IS_COLOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRANITE_DRAWING_TYPE_COLOR))
#define GRANITE_DRAWING_IS_COLOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRANITE_DRAWING_TYPE_COLOR))
#define GRANITE_DRAWING_COLOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRANITE_DRAWING_TYPE_COLOR, GraniteDrawingColorClass))

typedef struct _GraniteDrawingColor GraniteDrawingColor;
typedef struct _GraniteDrawingColorClass GraniteDrawingColorClass;
typedef struct _GraniteDrawingColorPrivate GraniteDrawingColorPrivate;
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _GraniteServicesSettingsSerializableIface {
	GTypeInterface parent_iface;
	gchar* (*settings_serialize) (GraniteServicesSettingsSerializable* self);
	void (*settings_deserialize) (GraniteServicesSettingsSerializable* self, const gchar* s);
};

struct _GraniteDrawingColor {
	GObject parent_instance;
	GraniteDrawingColorPrivate * priv;
	gdouble R;
	gdouble G;
	gdouble B;
	gdouble A;
};

struct _GraniteDrawingColorClass {
	GObjectClass parent_class;
};


static gpointer granite_drawing_color_parent_class = NULL;
static GraniteServicesSettingsSerializableIface * granite_drawing_color_granite_services_settings_serializable_parent_iface = NULL;

GType granite_services_settings_serializable_get_type (void) G_GNUC_CONST;
GType granite_drawing_color_get_type (void) G_GNUC_CONST;
enum  {
	GRANITE_DRAWING_COLOR_0_PROPERTY
};
GraniteDrawingColor* granite_drawing_color_new (gdouble R, gdouble G, gdouble B, gdouble A);
GraniteDrawingColor* granite_drawing_color_construct (GType object_type, gdouble R, gdouble G, gdouble B, gdouble A);
GraniteDrawingColor* granite_drawing_color_new_from_gdk (GdkColor* color);
GraniteDrawingColor* granite_drawing_color_construct_from_gdk (GType object_type, GdkColor* color);
GraniteDrawingColor* granite_drawing_color_set_hue (GraniteDrawingColor* self, gdouble hue);
static void granite_drawing_color_rgb_to_hsv (GraniteDrawingColor* self, gdouble r, gdouble g, gdouble b, gdouble* h, gdouble* s, gdouble* v);
static void granite_drawing_color_hsv_to_rgb (GraniteDrawingColor* self, gdouble h, gdouble s, gdouble v, gdouble* r, gdouble* g, gdouble* b);
GraniteDrawingColor* granite_drawing_color_set_sat (GraniteDrawingColor* self, gdouble sat);
GraniteDrawingColor* granite_drawing_color_set_val (GraniteDrawingColor* self, gdouble val);
GraniteDrawingColor* granite_drawing_color_set_alpha (GraniteDrawingColor* self, gdouble alpha);
gdouble granite_drawing_color_get_hue (GraniteDrawingColor* self);
gdouble granite_drawing_color_get_sat (GraniteDrawingColor* self);
gdouble granite_drawing_color_get_val (GraniteDrawingColor* self);
GraniteDrawingColor* granite_drawing_color_add_hue (GraniteDrawingColor* self, gdouble val);
GraniteDrawingColor* granite_drawing_color_set_min_sat (GraniteDrawingColor* self, gdouble sat);
GraniteDrawingColor* granite_drawing_color_set_min_value (GraniteDrawingColor* self, gdouble val);
GraniteDrawingColor* granite_drawing_color_set_max_sat (GraniteDrawingColor* self, gdouble sat);
GraniteDrawingColor* granite_drawing_color_set_max_val (GraniteDrawingColor* self, gdouble val);
GraniteDrawingColor* granite_drawing_color_multiply_sat (GraniteDrawingColor* self, gdouble amount);
GraniteDrawingColor* granite_drawing_color_brighten_val (GraniteDrawingColor* self, gdouble amount);
GraniteDrawingColor* granite_drawing_color_darken_val (GraniteDrawingColor* self, gdouble amount);
GraniteDrawingColor* granite_drawing_color_darken_by_sat (GraniteDrawingColor* self, gdouble amount);
static gchar* granite_drawing_color_real_settings_serialize (GraniteServicesSettingsSerializable* base);
static void granite_drawing_color_real_settings_deserialize (GraniteServicesSettingsSerializable* base, const gchar* s);
static void granite_drawing_color_finalize (GObject * obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


/**
         * Constructs a new {@link Granite.Drawing.Color} with the supplied values.
         *
         * @param R the value of the red channel as a double
         * @param G the value of the green channel as a double
         * @param B the value of the blue channel as a double
         * @param A the value of the alpha channel as a double
         */
GraniteDrawingColor* granite_drawing_color_construct (GType object_type, gdouble R, gdouble G, gdouble B, gdouble A) {
	GraniteDrawingColor * self = NULL;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble _tmp2_;
	gdouble _tmp3_;
	self = (GraniteDrawingColor*) g_object_new (object_type, NULL);
	_tmp0_ = R;
	self->R = _tmp0_;
	_tmp1_ = G;
	self->G = _tmp1_;
	_tmp2_ = B;
	self->B = _tmp2_;
	_tmp3_ = A;
	self->A = _tmp3_;
	return self;
}


GraniteDrawingColor* granite_drawing_color_new (gdouble R, gdouble G, gdouble B, gdouble A) {
	return granite_drawing_color_construct (GRANITE_DRAWING_TYPE_COLOR, R, G, B, A);
}


/**
         * Constructs a new {@link Granite.Drawing.Color} from a {@link Gdk.Color}.
         *
         * @param color the {@link Gdk.Color}
         */
GraniteDrawingColor* granite_drawing_color_construct_from_gdk (GType object_type, GdkColor* color) {
	GraniteDrawingColor * self = NULL;
	GdkColor _tmp0_;
	guint16 _tmp1_;
	GdkColor _tmp2_;
	guint16 _tmp3_;
	GdkColor _tmp4_;
	guint16 _tmp5_;
	g_return_val_if_fail (color != NULL, NULL);
	self = (GraniteDrawingColor*) g_object_new (object_type, NULL);
	_tmp0_ = *color;
	_tmp1_ = _tmp0_.red;
	self->R = _tmp1_ / ((gdouble) G_MAXUINT16);
	_tmp2_ = *color;
	_tmp3_ = _tmp2_.green;
	self->G = _tmp3_ / ((gdouble) G_MAXUINT16);
	_tmp4_ = *color;
	_tmp5_ = _tmp4_.blue;
	self->B = _tmp5_ / ((gdouble) G_MAXUINT16);
	self->A = 1.0;
	return self;
}


GraniteDrawingColor* granite_drawing_color_new_from_gdk (GdkColor* color) {
	return granite_drawing_color_construct_from_gdk (GRANITE_DRAWING_TYPE_COLOR, color);
}


/**
         * Changes the hue of this color to the supplied one.
         *
         * @param hue the hue to change this color to
         * 
         * @return the new {@link Granite.Drawing.Color}
         */
static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


GraniteDrawingColor* granite_drawing_color_set_hue (GraniteDrawingColor* self, gdouble hue) {
	GraniteDrawingColor* result = NULL;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble h = 0.0;
	gdouble s = 0.0;
	gdouble v = 0.0;
	gdouble _tmp2_;
	gdouble _tmp3_;
	gdouble _tmp4_;
	gdouble _tmp5_ = 0.0;
	gdouble _tmp6_ = 0.0;
	gdouble _tmp7_ = 0.0;
	gdouble _tmp8_;
	gdouble _tmp9_;
	gdouble _tmp10_ = 0.0;
	gdouble _tmp11_ = 0.0;
	gdouble _tmp12_ = 0.0;
	GraniteDrawingColor* _tmp13_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = hue;
	_tmp1_ = hue;
	_vala_return_val_if_fail ((_tmp0_ >= ((gdouble) 0)) && (_tmp1_ <= ((gdouble) 360)), "hue >= 0 && hue <= 360", NULL);
	_tmp2_ = self->R;
	_tmp3_ = self->G;
	_tmp4_ = self->B;
	granite_drawing_color_rgb_to_hsv (self, _tmp2_, _tmp3_, _tmp4_, &_tmp5_, &_tmp6_, &_tmp7_);
	h = _tmp5_;
	s = _tmp6_;
	v = _tmp7_;
	_tmp8_ = hue;
	h = _tmp8_;
	_tmp9_ = h;
	granite_drawing_color_hsv_to_rgb (self, _tmp9_, s, v, &_tmp10_, &_tmp11_, &_tmp12_);
	self->R = _tmp10_;
	self->G = _tmp11_;
	self->B = _tmp12_;
	_tmp13_ = _g_object_ref0 (self);
	result = _tmp13_;
	return result;
}


/**
         * Changes the saturation of this color to the supplied one.
         *
         * @param sat the saturation to change this color to
         * 
         * @return the new {@link Granite.Drawing.Color}
         */
GraniteDrawingColor* granite_drawing_color_set_sat (GraniteDrawingColor* self, gdouble sat) {
	GraniteDrawingColor* result = NULL;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble h = 0.0;
	gdouble s = 0.0;
	gdouble v = 0.0;
	gdouble _tmp2_;
	gdouble _tmp3_;
	gdouble _tmp4_;
	gdouble _tmp5_ = 0.0;
	gdouble _tmp6_ = 0.0;
	gdouble _tmp7_ = 0.0;
	gdouble _tmp8_;
	gdouble _tmp9_;
	gdouble _tmp10_ = 0.0;
	gdouble _tmp11_ = 0.0;
	gdouble _tmp12_ = 0.0;
	GraniteDrawingColor* _tmp13_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = sat;
	_tmp1_ = sat;
	_vala_return_val_if_fail ((_tmp0_ >= ((gdouble) 0)) && (_tmp1_ <= ((gdouble) 1)), "sat >= 0 && sat <= 1", NULL);
	_tmp2_ = self->R;
	_tmp3_ = self->G;
	_tmp4_ = self->B;
	granite_drawing_color_rgb_to_hsv (self, _tmp2_, _tmp3_, _tmp4_, &_tmp5_, &_tmp6_, &_tmp7_);
	h = _tmp5_;
	s = _tmp6_;
	v = _tmp7_;
	_tmp8_ = sat;
	s = _tmp8_;
	_tmp9_ = s;
	granite_drawing_color_hsv_to_rgb (self, h, _tmp9_, v, &_tmp10_, &_tmp11_, &_tmp12_);
	self->R = _tmp10_;
	self->G = _tmp11_;
	self->B = _tmp12_;
	_tmp13_ = _g_object_ref0 (self);
	result = _tmp13_;
	return result;
}


/**
         * Changes the value of this color to the supplied one.
         *
         * @param val the value to change this color to
         * 
         * @return the new {@link Granite.Drawing.Color}
         */
GraniteDrawingColor* granite_drawing_color_set_val (GraniteDrawingColor* self, gdouble val) {
	GraniteDrawingColor* result = NULL;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble h = 0.0;
	gdouble s = 0.0;
	gdouble v = 0.0;
	gdouble _tmp2_;
	gdouble _tmp3_;
	gdouble _tmp4_;
	gdouble _tmp5_ = 0.0;
	gdouble _tmp6_ = 0.0;
	gdouble _tmp7_ = 0.0;
	gdouble _tmp8_;
	gdouble _tmp9_;
	gdouble _tmp10_ = 0.0;
	gdouble _tmp11_ = 0.0;
	gdouble _tmp12_ = 0.0;
	GraniteDrawingColor* _tmp13_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = val;
	_tmp1_ = val;
	_vala_return_val_if_fail ((_tmp0_ >= ((gdouble) 0)) && (_tmp1_ <= ((gdouble) 1)), "val >= 0 && val <= 1", NULL);
	_tmp2_ = self->R;
	_tmp3_ = self->G;
	_tmp4_ = self->B;
	granite_drawing_color_rgb_to_hsv (self, _tmp2_, _tmp3_, _tmp4_, &_tmp5_, &_tmp6_, &_tmp7_);
	h = _tmp5_;
	s = _tmp6_;
	v = _tmp7_;
	_tmp8_ = val;
	v = _tmp8_;
	_tmp9_ = v;
	granite_drawing_color_hsv_to_rgb (self, h, s, _tmp9_, &_tmp10_, &_tmp11_, &_tmp12_);
	self->R = _tmp10_;
	self->G = _tmp11_;
	self->B = _tmp12_;
	_tmp13_ = _g_object_ref0 (self);
	result = _tmp13_;
	return result;
}


/**
         * Changes the value of the alpha channel.
         *
         * @param alpha the value of the alpha channel
         * 
         * @return the new {@link Granite.Drawing.Color}
         */
GraniteDrawingColor* granite_drawing_color_set_alpha (GraniteDrawingColor* self, gdouble alpha) {
	GraniteDrawingColor* result = NULL;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble _tmp2_;
	GraniteDrawingColor* _tmp3_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = alpha;
	_tmp1_ = alpha;
	_vala_return_val_if_fail ((_tmp0_ >= ((gdouble) 0)) && (_tmp1_ <= ((gdouble) 1)), "alpha >= 0 && alpha <= 1", NULL);
	_tmp2_ = alpha;
	self->A = _tmp2_;
	_tmp3_ = _g_object_ref0 (self);
	result = _tmp3_;
	return result;
}


/** 
         * Get the value.
         * @return the hue of this color, as a double value
         */
gdouble granite_drawing_color_get_hue (GraniteDrawingColor* self) {
	gdouble result = 0.0;
	gdouble h = 0.0;
	gdouble s = 0.0;
	gdouble v = 0.0;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble _tmp2_;
	gdouble _tmp3_ = 0.0;
	gdouble _tmp4_ = 0.0;
	gdouble _tmp5_ = 0.0;
	g_return_val_if_fail (self != NULL, 0.0);
	_tmp0_ = self->R;
	_tmp1_ = self->G;
	_tmp2_ = self->B;
	granite_drawing_color_rgb_to_hsv (self, _tmp0_, _tmp1_, _tmp2_, &_tmp3_, &_tmp4_, &_tmp5_);
	h = _tmp3_;
	s = _tmp4_;
	v = _tmp5_;
	result = h;
	return result;
}


/** 
         * Get the value.
         * @return the saturation of this color, as a double value
         */
gdouble granite_drawing_color_get_sat (GraniteDrawingColor* self) {
	gdouble result = 0.0;
	gdouble h = 0.0;
	gdouble s = 0.0;
	gdouble v = 0.0;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble _tmp2_;
	gdouble _tmp3_ = 0.0;
	gdouble _tmp4_ = 0.0;
	gdouble _tmp5_ = 0.0;
	g_return_val_if_fail (self != NULL, 0.0);
	_tmp0_ = self->R;
	_tmp1_ = self->G;
	_tmp2_ = self->B;
	granite_drawing_color_rgb_to_hsv (self, _tmp0_, _tmp1_, _tmp2_, &_tmp3_, &_tmp4_, &_tmp5_);
	h = _tmp3_;
	s = _tmp4_;
	v = _tmp5_;
	result = s;
	return result;
}


/** 
         * Get the value.
         * 
         * @return the value of this color, as a double value
         */
gdouble granite_drawing_color_get_val (GraniteDrawingColor* self) {
	gdouble result = 0.0;
	gdouble h = 0.0;
	gdouble s = 0.0;
	gdouble v = 0.0;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble _tmp2_;
	gdouble _tmp3_ = 0.0;
	gdouble _tmp4_ = 0.0;
	gdouble _tmp5_ = 0.0;
	g_return_val_if_fail (self != NULL, 0.0);
	_tmp0_ = self->R;
	_tmp1_ = self->G;
	_tmp2_ = self->B;
	granite_drawing_color_rgb_to_hsv (self, _tmp0_, _tmp1_, _tmp2_, &_tmp3_, &_tmp4_, &_tmp5_);
	h = _tmp3_;
	s = _tmp4_;
	v = _tmp5_;
	result = v;
	return result;
}


/**
         * Adds the supplied hue value to this color's hue value.
         *
         * @param val the hue to add to this color's hue
         * 
         * @return the new {@link Granite.Drawing.Color}
         */
GraniteDrawingColor* granite_drawing_color_add_hue (GraniteDrawingColor* self, gdouble val) {
	GraniteDrawingColor* result = NULL;
	gdouble h = 0.0;
	gdouble s = 0.0;
	gdouble v = 0.0;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble _tmp2_;
	gdouble _tmp3_ = 0.0;
	gdouble _tmp4_ = 0.0;
	gdouble _tmp5_ = 0.0;
	gdouble _tmp6_;
	gdouble _tmp7_;
	gdouble _tmp8_;
	gdouble _tmp9_ = 0.0;
	gdouble _tmp10_ = 0.0;
	gdouble _tmp11_ = 0.0;
	GraniteDrawingColor* _tmp12_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->R;
	_tmp1_ = self->G;
	_tmp2_ = self->B;
	granite_drawing_color_rgb_to_hsv (self, _tmp0_, _tmp1_, _tmp2_, &_tmp3_, &_tmp4_, &_tmp5_);
	h = _tmp3_;
	s = _tmp4_;
	v = _tmp5_;
	_tmp6_ = h;
	_tmp7_ = val;
	h = fmod (fmod (_tmp6_ + _tmp7_, 360) + 360, 360);
	_tmp8_ = h;
	granite_drawing_color_hsv_to_rgb (self, _tmp8_, s, v, &_tmp9_, &_tmp10_, &_tmp11_);
	self->R = _tmp9_;
	self->G = _tmp10_;
	self->B = _tmp11_;
	_tmp12_ = _g_object_ref0 (self);
	result = _tmp12_;
	return result;
}


/**
         * Changes this color's saturation to the supplied saturation, if it is greater than this color's saturation.
         *
         * @param sat the saturation to change this color to
         * 
         * @return the new {@link Granite.Drawing.Color}
         */
GraniteDrawingColor* granite_drawing_color_set_min_sat (GraniteDrawingColor* self, gdouble sat) {
	GraniteDrawingColor* result = NULL;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble h = 0.0;
	gdouble s = 0.0;
	gdouble v = 0.0;
	gdouble _tmp2_;
	gdouble _tmp3_;
	gdouble _tmp4_;
	gdouble _tmp5_ = 0.0;
	gdouble _tmp6_ = 0.0;
	gdouble _tmp7_ = 0.0;
	gdouble _tmp8_;
	gdouble _tmp9_;
	gdouble _tmp10_;
	gdouble _tmp11_;
	gdouble _tmp12_ = 0.0;
	gdouble _tmp13_ = 0.0;
	gdouble _tmp14_ = 0.0;
	GraniteDrawingColor* _tmp15_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = sat;
	_tmp1_ = sat;
	_vala_return_val_if_fail ((_tmp0_ >= ((gdouble) 0)) && (_tmp1_ <= ((gdouble) 1)), "sat >= 0 && sat <= 1", NULL);
	_tmp2_ = self->R;
	_tmp3_ = self->G;
	_tmp4_ = self->B;
	granite_drawing_color_rgb_to_hsv (self, _tmp2_, _tmp3_, _tmp4_, &_tmp5_, &_tmp6_, &_tmp7_);
	h = _tmp5_;
	s = _tmp6_;
	v = _tmp7_;
	_tmp8_ = s;
	_tmp9_ = sat;
	_tmp10_ = MAX (_tmp8_, _tmp9_);
	s = _tmp10_;
	_tmp11_ = s;
	granite_drawing_color_hsv_to_rgb (self, h, _tmp11_, v, &_tmp12_, &_tmp13_, &_tmp14_);
	self->R = _tmp12_;
	self->G = _tmp13_;
	self->B = _tmp14_;
	_tmp15_ = _g_object_ref0 (self);
	result = _tmp15_;
	return result;
}


/**
         * Changes this color's value to the supplied value, if it is greater than this color's value.
         *
         * @param val the value to change this color to
         * 
         * @return the new {@link Granite.Drawing.Color}
         */
GraniteDrawingColor* granite_drawing_color_set_min_value (GraniteDrawingColor* self, gdouble val) {
	GraniteDrawingColor* result = NULL;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble h = 0.0;
	gdouble s = 0.0;
	gdouble v = 0.0;
	gdouble _tmp2_;
	gdouble _tmp3_;
	gdouble _tmp4_;
	gdouble _tmp5_ = 0.0;
	gdouble _tmp6_ = 0.0;
	gdouble _tmp7_ = 0.0;
	gdouble _tmp8_;
	gdouble _tmp9_;
	gdouble _tmp10_;
	gdouble _tmp11_;
	gdouble _tmp12_ = 0.0;
	gdouble _tmp13_ = 0.0;
	gdouble _tmp14_ = 0.0;
	GraniteDrawingColor* _tmp15_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = val;
	_tmp1_ = val;
	_vala_return_val_if_fail ((_tmp0_ >= ((gdouble) 0)) && (_tmp1_ <= ((gdouble) 1)), "val >= 0 && val <= 1", NULL);
	_tmp2_ = self->R;
	_tmp3_ = self->G;
	_tmp4_ = self->B;
	granite_drawing_color_rgb_to_hsv (self, _tmp2_, _tmp3_, _tmp4_, &_tmp5_, &_tmp6_, &_tmp7_);
	h = _tmp5_;
	s = _tmp6_;
	v = _tmp7_;
	_tmp8_ = v;
	_tmp9_ = val;
	_tmp10_ = MAX (_tmp8_, _tmp9_);
	v = _tmp10_;
	_tmp11_ = v;
	granite_drawing_color_hsv_to_rgb (self, h, s, _tmp11_, &_tmp12_, &_tmp13_, &_tmp14_);
	self->R = _tmp12_;
	self->G = _tmp13_;
	self->B = _tmp14_;
	_tmp15_ = _g_object_ref0 (self);
	result = _tmp15_;
	return result;
}


/**
         * Changes this color's saturation to the supplied saturation, if it is smaller than this color's saturation.
         *
         * @param sat the hue to change this color to
         * 
         * @return the new {@link Granite.Drawing.Color}
         */
GraniteDrawingColor* granite_drawing_color_set_max_sat (GraniteDrawingColor* self, gdouble sat) {
	GraniteDrawingColor* result = NULL;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble h = 0.0;
	gdouble s = 0.0;
	gdouble v = 0.0;
	gdouble _tmp2_;
	gdouble _tmp3_;
	gdouble _tmp4_;
	gdouble _tmp5_ = 0.0;
	gdouble _tmp6_ = 0.0;
	gdouble _tmp7_ = 0.0;
	gdouble _tmp8_;
	gdouble _tmp9_;
	gdouble _tmp10_;
	gdouble _tmp11_;
	gdouble _tmp12_ = 0.0;
	gdouble _tmp13_ = 0.0;
	gdouble _tmp14_ = 0.0;
	GraniteDrawingColor* _tmp15_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = sat;
	_tmp1_ = sat;
	_vala_return_val_if_fail ((_tmp0_ >= ((gdouble) 0)) && (_tmp1_ <= ((gdouble) 1)), "sat >= 0 && sat <= 1", NULL);
	_tmp2_ = self->R;
	_tmp3_ = self->G;
	_tmp4_ = self->B;
	granite_drawing_color_rgb_to_hsv (self, _tmp2_, _tmp3_, _tmp4_, &_tmp5_, &_tmp6_, &_tmp7_);
	h = _tmp5_;
	s = _tmp6_;
	v = _tmp7_;
	_tmp8_ = s;
	_tmp9_ = sat;
	_tmp10_ = MIN (_tmp8_, _tmp9_);
	s = _tmp10_;
	_tmp11_ = s;
	granite_drawing_color_hsv_to_rgb (self, h, _tmp11_, v, &_tmp12_, &_tmp13_, &_tmp14_);
	self->R = _tmp12_;
	self->G = _tmp13_;
	self->B = _tmp14_;
	_tmp15_ = _g_object_ref0 (self);
	result = _tmp15_;
	return result;
}


/**
         * Changes this color's value to the supplied value, if it is smaller than this color's value.
         *
         * @param val the value to change this color to
         * 
         * @return the new {@link Granite.Drawing.Color}
         */
GraniteDrawingColor* granite_drawing_color_set_max_val (GraniteDrawingColor* self, gdouble val) {
	GraniteDrawingColor* result = NULL;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble h = 0.0;
	gdouble s = 0.0;
	gdouble v = 0.0;
	gdouble _tmp2_;
	gdouble _tmp3_;
	gdouble _tmp4_;
	gdouble _tmp5_ = 0.0;
	gdouble _tmp6_ = 0.0;
	gdouble _tmp7_ = 0.0;
	gdouble _tmp8_;
	gdouble _tmp9_;
	gdouble _tmp10_;
	gdouble _tmp11_;
	gdouble _tmp12_ = 0.0;
	gdouble _tmp13_ = 0.0;
	gdouble _tmp14_ = 0.0;
	GraniteDrawingColor* _tmp15_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = val;
	_tmp1_ = val;
	_vala_return_val_if_fail ((_tmp0_ >= ((gdouble) 0)) && (_tmp1_ <= ((gdouble) 1)), "val >= 0 && val <= 1", NULL);
	_tmp2_ = self->R;
	_tmp3_ = self->G;
	_tmp4_ = self->B;
	granite_drawing_color_rgb_to_hsv (self, _tmp2_, _tmp3_, _tmp4_, &_tmp5_, &_tmp6_, &_tmp7_);
	h = _tmp5_;
	s = _tmp6_;
	v = _tmp7_;
	_tmp8_ = v;
	_tmp9_ = val;
	_tmp10_ = MIN (_tmp8_, _tmp9_);
	v = _tmp10_;
	_tmp11_ = v;
	granite_drawing_color_hsv_to_rgb (self, h, s, _tmp11_, &_tmp12_, &_tmp13_, &_tmp14_);
	self->R = _tmp12_;
	self->G = _tmp13_;
	self->B = _tmp14_;
	_tmp15_ = _g_object_ref0 (self);
	result = _tmp15_;
	return result;
}


/**
         * Multiplies this color's saturation by the supplied amount.
         *
         * @param amount the amount to multiply the saturation by
         * 
         * @return the new {@link Granite.Drawing.Color}
         */
GraniteDrawingColor* granite_drawing_color_multiply_sat (GraniteDrawingColor* self, gdouble amount) {
	GraniteDrawingColor* result = NULL;
	gdouble _tmp0_;
	gdouble h = 0.0;
	gdouble s = 0.0;
	gdouble v = 0.0;
	gdouble _tmp1_;
	gdouble _tmp2_;
	gdouble _tmp3_;
	gdouble _tmp4_ = 0.0;
	gdouble _tmp5_ = 0.0;
	gdouble _tmp6_ = 0.0;
	gdouble _tmp7_;
	gdouble _tmp8_;
	gdouble _tmp9_;
	gdouble _tmp10_;
	gdouble _tmp11_ = 0.0;
	gdouble _tmp12_ = 0.0;
	gdouble _tmp13_ = 0.0;
	GraniteDrawingColor* _tmp14_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = amount;
	_vala_return_val_if_fail (_tmp0_ >= ((gdouble) 0), "amount >= 0", NULL);
	_tmp1_ = self->R;
	_tmp2_ = self->G;
	_tmp3_ = self->B;
	granite_drawing_color_rgb_to_hsv (self, _tmp1_, _tmp2_, _tmp3_, &_tmp4_, &_tmp5_, &_tmp6_);
	h = _tmp4_;
	s = _tmp5_;
	v = _tmp6_;
	_tmp7_ = s;
	_tmp8_ = amount;
	_tmp9_ = MIN ((gdouble) 1, _tmp7_ * _tmp8_);
	s = _tmp9_;
	_tmp10_ = s;
	granite_drawing_color_hsv_to_rgb (self, h, _tmp10_, v, &_tmp11_, &_tmp12_, &_tmp13_);
	self->R = _tmp11_;
	self->G = _tmp12_;
	self->B = _tmp13_;
	_tmp14_ = _g_object_ref0 (self);
	result = _tmp14_;
	return result;
}


/**
         * Brightens this color's value by the supplied amount.
         *
         * @param amount the amount to brighten the value by
         * 
         * @return the new {@link Granite.Drawing.Color}
         */
GraniteDrawingColor* granite_drawing_color_brighten_val (GraniteDrawingColor* self, gdouble amount) {
	GraniteDrawingColor* result = NULL;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble h = 0.0;
	gdouble s = 0.0;
	gdouble v = 0.0;
	gdouble _tmp2_;
	gdouble _tmp3_;
	gdouble _tmp4_;
	gdouble _tmp5_ = 0.0;
	gdouble _tmp6_ = 0.0;
	gdouble _tmp7_ = 0.0;
	gdouble _tmp8_;
	gdouble _tmp9_;
	gdouble _tmp10_;
	gdouble _tmp11_;
	gdouble _tmp12_;
	gdouble _tmp13_ = 0.0;
	gdouble _tmp14_ = 0.0;
	gdouble _tmp15_ = 0.0;
	GraniteDrawingColor* _tmp16_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = amount;
	_tmp1_ = amount;
	_vala_return_val_if_fail ((_tmp0_ >= ((gdouble) 0)) && (_tmp1_ <= ((gdouble) 1)), "amount >= 0 && amount <= 1", NULL);
	_tmp2_ = self->R;
	_tmp3_ = self->G;
	_tmp4_ = self->B;
	granite_drawing_color_rgb_to_hsv (self, _tmp2_, _tmp3_, _tmp4_, &_tmp5_, &_tmp6_, &_tmp7_);
	h = _tmp5_;
	s = _tmp6_;
	v = _tmp7_;
	_tmp8_ = v;
	_tmp9_ = v;
	_tmp10_ = amount;
	_tmp11_ = MIN ((gdouble) 1, _tmp8_ + ((1 - _tmp9_) * _tmp10_));
	v = _tmp11_;
	_tmp12_ = v;
	granite_drawing_color_hsv_to_rgb (self, h, s, _tmp12_, &_tmp13_, &_tmp14_, &_tmp15_);
	self->R = _tmp13_;
	self->G = _tmp14_;
	self->B = _tmp15_;
	_tmp16_ = _g_object_ref0 (self);
	result = _tmp16_;
	return result;
}


/**
         * Darkens this color's value by the supplied amount.
         *
         * @param amount the amount to darken the value by
         * 
         * @return the new {@link Granite.Drawing.Color}
         */
GraniteDrawingColor* granite_drawing_color_darken_val (GraniteDrawingColor* self, gdouble amount) {
	GraniteDrawingColor* result = NULL;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble h = 0.0;
	gdouble s = 0.0;
	gdouble v = 0.0;
	gdouble _tmp2_;
	gdouble _tmp3_;
	gdouble _tmp4_;
	gdouble _tmp5_ = 0.0;
	gdouble _tmp6_ = 0.0;
	gdouble _tmp7_ = 0.0;
	gdouble _tmp8_;
	gdouble _tmp9_;
	gdouble _tmp10_;
	gdouble _tmp11_;
	gdouble _tmp12_;
	gdouble _tmp13_ = 0.0;
	gdouble _tmp14_ = 0.0;
	gdouble _tmp15_ = 0.0;
	GraniteDrawingColor* _tmp16_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = amount;
	_tmp1_ = amount;
	_vala_return_val_if_fail ((_tmp0_ >= ((gdouble) 0)) && (_tmp1_ <= ((gdouble) 1)), "amount >= 0 && amount <= 1", NULL);
	_tmp2_ = self->R;
	_tmp3_ = self->G;
	_tmp4_ = self->B;
	granite_drawing_color_rgb_to_hsv (self, _tmp2_, _tmp3_, _tmp4_, &_tmp5_, &_tmp6_, &_tmp7_);
	h = _tmp5_;
	s = _tmp6_;
	v = _tmp7_;
	_tmp8_ = v;
	_tmp9_ = v;
	_tmp10_ = amount;
	_tmp11_ = MAX ((gdouble) 0, _tmp8_ - ((1 - _tmp9_) * _tmp10_));
	v = _tmp11_;
	_tmp12_ = v;
	granite_drawing_color_hsv_to_rgb (self, h, s, _tmp12_, &_tmp13_, &_tmp14_, &_tmp15_);
	self->R = _tmp13_;
	self->G = _tmp14_;
	self->B = _tmp15_;
	_tmp16_ = _g_object_ref0 (self);
	result = _tmp16_;
	return result;
}


/**
         * Darkens this color's value by the supplied amount * color's saturation.
         *
         * @param amount the amount to darken the value by
         * 
         * @return the new {@link Granite.Drawing.Color}
         */
GraniteDrawingColor* granite_drawing_color_darken_by_sat (GraniteDrawingColor* self, gdouble amount) {
	GraniteDrawingColor* result = NULL;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble h = 0.0;
	gdouble s = 0.0;
	gdouble v = 0.0;
	gdouble _tmp2_;
	gdouble _tmp3_;
	gdouble _tmp4_;
	gdouble _tmp5_ = 0.0;
	gdouble _tmp6_ = 0.0;
	gdouble _tmp7_ = 0.0;
	gdouble _tmp8_;
	gdouble _tmp9_;
	gdouble _tmp10_;
	gdouble _tmp11_;
	gdouble _tmp12_ = 0.0;
	gdouble _tmp13_ = 0.0;
	gdouble _tmp14_ = 0.0;
	GraniteDrawingColor* _tmp15_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = amount;
	_tmp1_ = amount;
	_vala_return_val_if_fail ((_tmp0_ >= ((gdouble) 0)) && (_tmp1_ <= ((gdouble) 1)), "amount >= 0 && amount <= 1", NULL);
	_tmp2_ = self->R;
	_tmp3_ = self->G;
	_tmp4_ = self->B;
	granite_drawing_color_rgb_to_hsv (self, _tmp2_, _tmp3_, _tmp4_, &_tmp5_, &_tmp6_, &_tmp7_);
	h = _tmp5_;
	s = _tmp6_;
	v = _tmp7_;
	_tmp8_ = v;
	_tmp9_ = amount;
	_tmp10_ = MAX ((gdouble) 0, _tmp8_ - (_tmp9_ * s));
	v = _tmp10_;
	_tmp11_ = v;
	granite_drawing_color_hsv_to_rgb (self, h, s, _tmp11_, &_tmp12_, &_tmp13_, &_tmp14_);
	self->R = _tmp12_;
	self->G = _tmp13_;
	self->B = _tmp14_;
	_tmp15_ = _g_object_ref0 (self);
	result = _tmp15_;
	return result;
}


static void granite_drawing_color_rgb_to_hsv (GraniteDrawingColor* self, gdouble r, gdouble g, gdouble b, gdouble* h, gdouble* s, gdouble* v) {
	gdouble _vala_h = 0.0;
	gdouble _vala_s = 0.0;
	gdouble _vala_v = 0.0;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble _tmp2_;
	gdouble _tmp3_;
	gdouble _tmp4_;
	gdouble _tmp5_;
	gdouble min = 0.0;
	gdouble _tmp6_;
	gdouble _tmp7_;
	gdouble _tmp8_;
	gdouble _tmp9_;
	gdouble _tmp10_;
	gdouble max = 0.0;
	gdouble _tmp11_;
	gdouble _tmp12_;
	gdouble _tmp13_;
	gdouble _tmp14_;
	gdouble _tmp15_;
	gdouble _tmp16_;
	gdouble _tmp17_;
	gdouble _tmp18_;
	gdouble _tmp19_;
	gdouble _tmp20_;
	gdouble _tmp21_;
	gdouble _tmp22_;
	gdouble _tmp23_;
	gdouble _tmp24_;
	gdouble _tmp25_;
	gdouble _tmp26_;
	gdouble _tmp27_;
	gdouble _tmp28_;
	gdouble _tmp29_;
	gdouble _tmp30_;
	gdouble _tmp31_;
	gdouble _tmp32_;
	gdouble _tmp33_;
	gdouble delta = 0.0;
	gdouble _tmp34_;
	gdouble _tmp35_;
	gdouble _tmp36_;
	gdouble _tmp37_;
	gdouble _tmp38_;
	gdouble _tmp39_;
	gdouble _tmp40_;
	gdouble _tmp41_;
	gdouble _tmp42_;
	gdouble _tmp43_;
	gdouble _tmp44_;
	gdouble _tmp45_;
	gdouble _tmp46_;
	gdouble _tmp47_;
	gdouble _tmp48_;
	g_return_if_fail (self != NULL);
	_tmp0_ = r;
	_tmp1_ = r;
	_vala_return_if_fail ((_tmp0_ >= ((gdouble) 0)) && (_tmp1_ <= ((gdouble) 1)), "r >= 0 && r <= 1");
	_tmp2_ = g;
	_tmp3_ = g;
	_vala_return_if_fail ((_tmp2_ >= ((gdouble) 0)) && (_tmp3_ <= ((gdouble) 1)), "g >= 0 && g <= 1");
	_tmp4_ = b;
	_tmp5_ = b;
	_vala_return_if_fail ((_tmp4_ >= ((gdouble) 0)) && (_tmp5_ <= ((gdouble) 1)), "b >= 0 && b <= 1");
	_tmp6_ = r;
	_tmp7_ = g;
	_tmp8_ = b;
	_tmp9_ = MIN (_tmp7_, _tmp8_);
	_tmp10_ = MIN (_tmp6_, _tmp9_);
	min = _tmp10_;
	_tmp11_ = r;
	_tmp12_ = g;
	_tmp13_ = b;
	_tmp14_ = MAX (_tmp12_, _tmp13_);
	_tmp15_ = MAX (_tmp11_, _tmp14_);
	max = _tmp15_;
	_tmp16_ = max;
	_vala_v = _tmp16_;
	_tmp17_ = _vala_v;
	if (_tmp17_ == ((gdouble) 0)) {
		_vala_h = (gdouble) 0;
		_vala_s = (gdouble) 0;
		if (h) {
			*h = _vala_h;
		}
		if (s) {
			*s = _vala_s;
		}
		if (v) {
			*v = _vala_v;
		}
		return;
	}
	_tmp18_ = r;
	_tmp19_ = _vala_v;
	r = _tmp18_ / _tmp19_;
	_tmp20_ = g;
	_tmp21_ = _vala_v;
	g = _tmp20_ / _tmp21_;
	_tmp22_ = b;
	_tmp23_ = _vala_v;
	b = _tmp22_ / _tmp23_;
	_tmp24_ = r;
	_tmp25_ = g;
	_tmp26_ = b;
	_tmp27_ = MIN (_tmp25_, _tmp26_);
	_tmp28_ = MIN (_tmp24_, _tmp27_);
	min = _tmp28_;
	_tmp29_ = r;
	_tmp30_ = g;
	_tmp31_ = b;
	_tmp32_ = MAX (_tmp30_, _tmp31_);
	_tmp33_ = MAX (_tmp29_, _tmp32_);
	max = _tmp33_;
	_tmp34_ = max;
	_tmp35_ = min;
	delta = _tmp34_ - _tmp35_;
	_tmp36_ = delta;
	_vala_s = _tmp36_;
	_tmp37_ = _vala_s;
	if (_tmp37_ == ((gdouble) 0)) {
		_vala_h = (gdouble) 0;
		if (h) {
			*h = _vala_h;
		}
		if (s) {
			*s = _vala_s;
		}
		if (v) {
			*v = _vala_v;
		}
		return;
	}
	_tmp38_ = r;
	_tmp39_ = min;
	_tmp40_ = delta;
	r = (_tmp38_ - _tmp39_) / _tmp40_;
	_tmp41_ = g;
	_tmp42_ = min;
	_tmp43_ = delta;
	g = (_tmp41_ - _tmp42_) / _tmp43_;
	_tmp44_ = b;
	_tmp45_ = min;
	_tmp46_ = delta;
	b = (_tmp44_ - _tmp45_) / _tmp46_;
	_tmp47_ = max;
	_tmp48_ = r;
	if (_tmp47_ == _tmp48_) {
		gdouble _tmp49_;
		gdouble _tmp50_;
		gdouble _tmp51_;
		_tmp49_ = g;
		_tmp50_ = b;
		_vala_h = 0 + (60 * (_tmp49_ - _tmp50_));
		_tmp51_ = _vala_h;
		if (_tmp51_ < ((gdouble) 0)) {
			gdouble _tmp52_;
			_tmp52_ = _vala_h;
			_vala_h = _tmp52_ + 360;
		}
	} else {
		gdouble _tmp53_;
		gdouble _tmp54_;
		_tmp53_ = max;
		_tmp54_ = g;
		if (_tmp53_ == _tmp54_) {
			gdouble _tmp55_;
			gdouble _tmp56_;
			_tmp55_ = b;
			_tmp56_ = r;
			_vala_h = 120 + (60 * (_tmp55_ - _tmp56_));
		} else {
			gdouble _tmp57_;
			gdouble _tmp58_;
			_tmp57_ = r;
			_tmp58_ = g;
			_vala_h = 240 + (60 * (_tmp57_ - _tmp58_));
		}
	}
	if (h) {
		*h = _vala_h;
	}
	if (s) {
		*s = _vala_s;
	}
	if (v) {
		*v = _vala_v;
	}
}


static void granite_drawing_color_hsv_to_rgb (GraniteDrawingColor* self, gdouble h, gdouble s, gdouble v, gdouble* r, gdouble* g, gdouble* b) {
	gdouble _vala_r = 0.0;
	gdouble _vala_g = 0.0;
	gdouble _vala_b = 0.0;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble _tmp2_;
	gdouble _tmp3_;
	gdouble _tmp4_;
	gdouble _tmp5_;
	gdouble _tmp6_;
	g_return_if_fail (self != NULL);
	_tmp0_ = h;
	_tmp1_ = h;
	_vala_return_if_fail ((_tmp0_ >= ((gdouble) 0)) && (_tmp1_ <= ((gdouble) 360)), "h >= 0 && h <= 360");
	_tmp2_ = s;
	_tmp3_ = s;
	_vala_return_if_fail ((_tmp2_ >= ((gdouble) 0)) && (_tmp3_ <= ((gdouble) 1)), "s >= 0 && s <= 1");
	_tmp4_ = v;
	_tmp5_ = v;
	_vala_return_if_fail ((_tmp4_ >= ((gdouble) 0)) && (_tmp5_ <= ((gdouble) 1)), "v >= 0 && v <= 1");
	_vala_r = (gdouble) 0;
	_vala_g = (gdouble) 0;
	_vala_b = (gdouble) 0;
	_tmp6_ = s;
	if (_tmp6_ == ((gdouble) 0)) {
		gdouble _tmp7_;
		gdouble _tmp8_;
		gdouble _tmp9_;
		_tmp7_ = v;
		_vala_r = _tmp7_;
		_tmp8_ = v;
		_vala_g = _tmp8_;
		_tmp9_ = v;
		_vala_b = _tmp9_;
	} else {
		gint secNum = 0;
		gdouble _tmp10_;
		gdouble _tmp11_;
		gdouble fracSec = 0.0;
		gdouble _tmp12_;
		gint _tmp13_;
		gdouble p = 0.0;
		gdouble _tmp14_;
		gdouble _tmp15_;
		gdouble q = 0.0;
		gdouble _tmp16_;
		gdouble _tmp17_;
		gdouble _tmp18_;
		gdouble t = 0.0;
		gdouble _tmp19_;
		gdouble _tmp20_;
		gdouble _tmp21_;
		gint _tmp22_;
		_tmp10_ = h;
		_tmp11_ = floor (_tmp10_ / 60);
		secNum = (gint) _tmp11_;
		_tmp12_ = h;
		_tmp13_ = secNum;
		fracSec = (_tmp12_ / 60.0) - _tmp13_;
		_tmp14_ = v;
		_tmp15_ = s;
		p = _tmp14_ * (1 - _tmp15_);
		_tmp16_ = v;
		_tmp17_ = s;
		_tmp18_ = fracSec;
		q = _tmp16_ * (1 - (_tmp17_ * _tmp18_));
		_tmp19_ = v;
		_tmp20_ = s;
		_tmp21_ = fracSec;
		t = _tmp19_ * (1 - (_tmp20_ * (1 - _tmp21_)));
		_tmp22_ = secNum;
		switch (_tmp22_) {
			case 0:
			{
				gdouble _tmp23_;
				gdouble _tmp24_;
				gdouble _tmp25_;
				_tmp23_ = v;
				_vala_r = _tmp23_;
				_tmp24_ = t;
				_vala_g = _tmp24_;
				_tmp25_ = p;
				_vala_b = _tmp25_;
				break;
			}
			case 1:
			{
				gdouble _tmp26_;
				gdouble _tmp27_;
				gdouble _tmp28_;
				_tmp26_ = q;
				_vala_r = _tmp26_;
				_tmp27_ = v;
				_vala_g = _tmp27_;
				_tmp28_ = p;
				_vala_b = _tmp28_;
				break;
			}
			case 2:
			{
				gdouble _tmp29_;
				gdouble _tmp30_;
				gdouble _tmp31_;
				_tmp29_ = p;
				_vala_r = _tmp29_;
				_tmp30_ = v;
				_vala_g = _tmp30_;
				_tmp31_ = t;
				_vala_b = _tmp31_;
				break;
			}
			case 3:
			{
				gdouble _tmp32_;
				gdouble _tmp33_;
				gdouble _tmp34_;
				_tmp32_ = p;
				_vala_r = _tmp32_;
				_tmp33_ = q;
				_vala_g = _tmp33_;
				_tmp34_ = v;
				_vala_b = _tmp34_;
				break;
			}
			case 4:
			{
				gdouble _tmp35_;
				gdouble _tmp36_;
				gdouble _tmp37_;
				_tmp35_ = t;
				_vala_r = _tmp35_;
				_tmp36_ = p;
				_vala_g = _tmp36_;
				_tmp37_ = v;
				_vala_b = _tmp37_;
				break;
			}
			case 5:
			{
				gdouble _tmp38_;
				gdouble _tmp39_;
				gdouble _tmp40_;
				_tmp38_ = v;
				_vala_r = _tmp38_;
				_tmp39_ = p;
				_vala_g = _tmp39_;
				_tmp40_ = q;
				_vala_b = _tmp40_;
				break;
			}
			default:
			break;
		}
	}
	if (r) {
		*r = _vala_r;
	}
	if (g) {
		*g = _vala_g;
	}
	if (b) {
		*b = _vala_b;
	}
}


/**
         * {@inheritDoc}
         */
static gchar* granite_drawing_color_real_settings_serialize (GraniteServicesSettingsSerializable* base) {
	GraniteDrawingColor * self;
	gchar* result = NULL;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble _tmp2_;
	gdouble _tmp3_;
	gchar* _tmp4_;
	self = (GraniteDrawingColor*) base;
	_tmp0_ = self->R;
	_tmp1_ = self->G;
	_tmp2_ = self->B;
	_tmp3_ = self->A;
	_tmp4_ = g_strdup_printf ("%d;;%d;;%d;;%d", (gint) (_tmp0_ * G_MAXUINT8), (gint) (_tmp1_ * G_MAXUINT8), (gint) (_tmp2_ * G_MAXUINT8), (gint) (_tmp3_ * G_MAXUINT8));
	result = _tmp4_;
	return result;
}


/**
         * {@inheritDoc}
         */
static void granite_drawing_color_real_settings_deserialize (GraniteServicesSettingsSerializable* base, const gchar* s) {
	GraniteDrawingColor * self;
	gchar** parts = NULL;
	const gchar* _tmp0_;
	gchar** _tmp1_;
	gchar** _tmp2_;
	gint parts_length1;
	gint _parts_size_;
	const gchar* _tmp3_;
	gint _tmp4_;
	gdouble _tmp5_;
	gdouble _tmp6_;
	const gchar* _tmp7_;
	gint _tmp8_;
	gdouble _tmp9_;
	gdouble _tmp10_;
	const gchar* _tmp11_;
	gint _tmp12_;
	gdouble _tmp13_;
	gdouble _tmp14_;
	const gchar* _tmp15_;
	gint _tmp16_;
	gdouble _tmp17_;
	gdouble _tmp18_;
	self = (GraniteDrawingColor*) base;
	g_return_if_fail (s != NULL);
	_tmp0_ = s;
	_tmp2_ = _tmp1_ = g_strsplit (_tmp0_, ";;", 0);
	parts = _tmp2_;
	parts_length1 = _vala_array_length (_tmp1_);
	_parts_size_ = parts_length1;
	_tmp3_ = parts[0];
	_tmp4_ = atoi (_tmp3_);
	_tmp5_ = MAX ((gdouble) 0, (gdouble) _tmp4_);
	_tmp6_ = MIN ((gdouble) G_MAXUINT8, _tmp5_);
	self->R = _tmp6_ / G_MAXUINT8;
	_tmp7_ = parts[1];
	_tmp8_ = atoi (_tmp7_);
	_tmp9_ = MAX ((gdouble) 0, (gdouble) _tmp8_);
	_tmp10_ = MIN ((gdouble) G_MAXUINT8, _tmp9_);
	self->G = _tmp10_ / G_MAXUINT8;
	_tmp11_ = parts[2];
	_tmp12_ = atoi (_tmp11_);
	_tmp13_ = MAX ((gdouble) 0, (gdouble) _tmp12_);
	_tmp14_ = MIN ((gdouble) G_MAXUINT8, _tmp13_);
	self->B = _tmp14_ / G_MAXUINT8;
	_tmp15_ = parts[3];
	_tmp16_ = atoi (_tmp15_);
	_tmp17_ = MAX ((gdouble) 0, (gdouble) _tmp16_);
	_tmp18_ = MIN ((gdouble) G_MAXUINT8, _tmp17_);
	self->A = _tmp18_ / G_MAXUINT8;
	parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
}


static void granite_drawing_color_class_init (GraniteDrawingColorClass * klass) {
	granite_drawing_color_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->finalize = granite_drawing_color_finalize;
}


static void granite_drawing_color_granite_services_settings_serializable_interface_init (GraniteServicesSettingsSerializableIface * iface) {
	granite_drawing_color_granite_services_settings_serializable_parent_iface = g_type_interface_peek_parent (iface);
	iface->settings_serialize = (gchar* (*) (GraniteServicesSettingsSerializable *)) granite_drawing_color_real_settings_serialize;
	iface->settings_deserialize = (void (*) (GraniteServicesSettingsSerializable *, const gchar*)) granite_drawing_color_real_settings_deserialize;
}


static void granite_drawing_color_instance_init (GraniteDrawingColor * self) {
}


static void granite_drawing_color_finalize (GObject * obj) {
	GraniteDrawingColor * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRANITE_DRAWING_TYPE_COLOR, GraniteDrawingColor);
	G_OBJECT_CLASS (granite_drawing_color_parent_class)->finalize (obj);
}


/**
     * A class containing an RGBA color and methods for more powerful color manipulation.
     */
GType granite_drawing_color_get_type (void) {
	static volatile gsize granite_drawing_color_type_id__volatile = 0;
	if (g_once_init_enter (&granite_drawing_color_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GraniteDrawingColorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) granite_drawing_color_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GraniteDrawingColor), 0, (GInstanceInitFunc) granite_drawing_color_instance_init, NULL };
		static const GInterfaceInfo granite_services_settings_serializable_info = { (GInterfaceInitFunc) granite_drawing_color_granite_services_settings_serializable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType granite_drawing_color_type_id;
		granite_drawing_color_type_id = g_type_register_static (G_TYPE_OBJECT, "GraniteDrawingColor", &g_define_type_info, 0);
		g_type_add_interface_static (granite_drawing_color_type_id, GRANITE_SERVICES_TYPE_SETTINGS_SERIALIZABLE, &granite_services_settings_serializable_info);
		g_once_init_leave (&granite_drawing_color_type_id__volatile, granite_drawing_color_type_id);
	}
	return granite_drawing_color_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}


static gint _vala_array_length (gpointer array) {
	int length;
	length = 0;
	if (array) {
		while (((gpointer*) array)[length]) {
			length++;
		}
	}
	return length;
}


