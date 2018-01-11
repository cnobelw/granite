/* Utils.c generated by valac 0.36.7, the Vala compiler
 * generated from Utils.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>
#include <gio/gio.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>


#define GRANITE_TYPE_TEXT_STYLE (granite_text_style_get_type ())
#define _g_free0(var) (var = (g_free (var), NULL))

#define GRANITE_TYPE_CLOSE_BUTTON_POSITION (granite_close_button_position_get_type ())
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

typedef enum  {
	GRANITE_TEXT_STYLE_TITLE,
	GRANITE_TEXT_STYLE_H1,
	GRANITE_TEXT_STYLE_H2,
	GRANITE_TEXT_STYLE_H3
} GraniteTextStyle;

typedef enum  {
	GRANITE_CLOSE_BUTTON_POSITION_LEFT,
	GRANITE_CLOSE_BUTTON_POSITION_RIGHT
} GraniteCloseButtonPosition;



GType granite_text_style_get_type (void) G_GNUC_CONST;
gchar* granite_text_style_get_stylesheet (GraniteTextStyle self, gchar* * style_class);
#define GRANITE_STYLE_CLASS_TITLE_TEXT "title"
#define GRANITE_STYLE_CLASS_H1_TEXT "h1"
#define GRANITE_STYLE_CLASS_H2_TEXT "h2"
#define GRANITE_STYLE_CLASS_H3_TEXT "h3"
GType granite_close_button_position_get_type (void) G_GNUC_CONST;
gchar* granite_date_time_get_default_time_format (gboolean is_12h, gboolean with_second);
gboolean granite_date_time_is_clock_format_12h (void);
gchar* granite_date_time_get_default_date_format (gboolean with_weekday, gboolean with_day, gboolean with_year);
GdkPixbuf* get_close_pixbuf (void);
GtkCssProvider* granite_widgets_utils_set_theming (GtkWidget* widget, const gchar* stylesheet, const gchar* class_name, gint priority);
GtkCssProvider* granite_widgets_utils_get_css_provider (const gchar* stylesheet);
GtkCssProvider* granite_widgets_utils_set_theming_for_screen (GdkScreen* screen, const gchar* stylesheet, gint priority);
gboolean granite_widgets_utils_is_left_to_right (GtkWidget* widget);
void granite_widgets_utils_apply_text_style_to_label (GraniteTextStyle text_style, GtkLabel* label);
#define GRANITE_WIDGETS_UTILS_WM_SETTINGS_PATH "org.gnome.desktop.wm.preferences"
#define GRANITE_WIDGETS_UTILS_PANTHEON_SETTINGS_PATH "org.pantheon.desktop.gala.appearance"
#define GRANITE_WIDGETS_UTILS_WM_BUTTON_LAYOUT_KEY "button-layout"
gboolean granite_widgets_utils_get_default_close_button_position (GraniteCloseButtonPosition* position);
gchar* granite_widgets_utils_get_button_layout_schema (void);
static gchar** _vala_array_dup4 (gchar** self, int length);
static gboolean _vala_string_array_contains (gchar* * stack, int stack_length, gchar* needle);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


/**
     * Gets style sheet of text style
     *
     * @return CSS of text style
     */
static const gchar* string_to_string (const gchar* self) {
	const gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = self;
	return result;
}


gchar* granite_text_style_get_stylesheet (GraniteTextStyle self, gchar* * style_class) {
	gchar* _vala_style_class = NULL;
	gchar* result = NULL;
	switch (self) {
		case GRANITE_TEXT_STYLE_TITLE:
		{
			gchar* _tmp0_;
			const gchar* _tmp1_;
			const gchar* _tmp2_;
			gchar* _tmp3_;
			_tmp0_ = g_strdup (GRANITE_STYLE_CLASS_TITLE_TEXT);
			_g_free0 (_vala_style_class);
			_vala_style_class = _tmp0_;
			_tmp1_ = _vala_style_class;
			_tmp2_ = string_to_string (_tmp1_);
			_tmp3_ = g_strconcat (".", _tmp2_, " { font: raleway 36; }", NULL);
			result = _tmp3_;
			if (style_class) {
				*style_class = _vala_style_class;
			} else {
				_g_free0 (_vala_style_class);
			}
			return result;
		}
		case GRANITE_TEXT_STYLE_H1:
		{
			gchar* _tmp4_;
			const gchar* _tmp5_;
			const gchar* _tmp6_;
			gchar* _tmp7_;
			_tmp4_ = g_strdup (GRANITE_STYLE_CLASS_H1_TEXT);
			_g_free0 (_vala_style_class);
			_vala_style_class = _tmp4_;
			_tmp5_ = _vala_style_class;
			_tmp6_ = string_to_string (_tmp5_);
			_tmp7_ = g_strconcat (".", _tmp6_, " { font: open sans bold 24; }", NULL);
			result = _tmp7_;
			if (style_class) {
				*style_class = _vala_style_class;
			} else {
				_g_free0 (_vala_style_class);
			}
			return result;
		}
		case GRANITE_TEXT_STYLE_H2:
		{
			gchar* _tmp8_;
			const gchar* _tmp9_;
			const gchar* _tmp10_;
			gchar* _tmp11_;
			_tmp8_ = g_strdup (GRANITE_STYLE_CLASS_H2_TEXT);
			_g_free0 (_vala_style_class);
			_vala_style_class = _tmp8_;
			_tmp9_ = _vala_style_class;
			_tmp10_ = string_to_string (_tmp9_);
			_tmp11_ = g_strconcat (".", _tmp10_, " { font: open sans light 18; }", NULL);
			result = _tmp11_;
			if (style_class) {
				*style_class = _vala_style_class;
			} else {
				_g_free0 (_vala_style_class);
			}
			return result;
		}
		case GRANITE_TEXT_STYLE_H3:
		{
			gchar* _tmp12_;
			const gchar* _tmp13_;
			const gchar* _tmp14_;
			gchar* _tmp15_;
			_tmp12_ = g_strdup (GRANITE_STYLE_CLASS_H3_TEXT);
			_g_free0 (_vala_style_class);
			_vala_style_class = _tmp12_;
			_tmp13_ = _vala_style_class;
			_tmp14_ = string_to_string (_tmp13_);
			_tmp15_ = g_strconcat (".", _tmp14_, " { font: open sans bold 12; }", NULL);
			result = _tmp15_;
			if (style_class) {
				*style_class = _vala_style_class;
			} else {
				_g_free0 (_vala_style_class);
			}
			return result;
		}
		default:
		{
			g_assert_not_reached ();
		}
	}
	if (style_class) {
		*style_class = _vala_style_class;
	} else {
		_g_free0 (_vala_style_class);
	}
}


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
GType granite_text_style_get_type (void) {
	static volatile gsize granite_text_style_type_id__volatile = 0;
	if (g_once_init_enter (&granite_text_style_type_id__volatile)) {
		static const GEnumValue values[] = {{GRANITE_TEXT_STYLE_TITLE, "GRANITE_TEXT_STYLE_TITLE", "title"}, {GRANITE_TEXT_STYLE_H1, "GRANITE_TEXT_STYLE_H1", "h1"}, {GRANITE_TEXT_STYLE_H2, "GRANITE_TEXT_STYLE_H2", "h2"}, {GRANITE_TEXT_STYLE_H3, "GRANITE_TEXT_STYLE_H3", "h3"}, {0, NULL, NULL}};
		GType granite_text_style_type_id;
		granite_text_style_type_id = g_enum_register_static ("GraniteTextStyle", values);
		g_once_init_leave (&granite_text_style_type_id__volatile, granite_text_style_type_id);
	}
	return granite_text_style_type_id__volatile;
}


GType granite_close_button_position_get_type (void) {
	static volatile gsize granite_close_button_position_type_id__volatile = 0;
	if (g_once_init_enter (&granite_close_button_position_type_id__volatile)) {
		static const GEnumValue values[] = {{GRANITE_CLOSE_BUTTON_POSITION_LEFT, "GRANITE_CLOSE_BUTTON_POSITION_LEFT", "left"}, {GRANITE_CLOSE_BUTTON_POSITION_RIGHT, "GRANITE_CLOSE_BUTTON_POSITION_RIGHT", "right"}, {0, NULL, NULL}};
		GType granite_close_button_position_type_id;
		granite_close_button_position_type_id = g_enum_register_static ("GraniteCloseButtonPosition", values);
		g_once_init_leave (&granite_close_button_position_type_id__volatile, granite_close_button_position_type_id);
	}
	return granite_close_button_position_type_id__volatile;
}


gchar* granite_date_time_get_default_time_format (gboolean is_12h, gboolean with_second) {
	gchar* result = NULL;
	gboolean _tmp0_;
	_tmp0_ = is_12h;
	if (_tmp0_ == TRUE) {
		gboolean _tmp1_;
		_tmp1_ = with_second;
		if (_tmp1_ == TRUE) {
			gchar* _tmp2_;
			_tmp2_ = g_strdup (_ ("%l:%M:%S %p"));
			result = _tmp2_;
			return result;
		} else {
			gchar* _tmp3_;
			_tmp3_ = g_strdup (_ ("%l:%M %p"));
			result = _tmp3_;
			return result;
		}
	} else {
		gboolean _tmp4_;
		_tmp4_ = with_second;
		if (_tmp4_ == TRUE) {
			gchar* _tmp5_;
			_tmp5_ = g_strdup (_ ("%H:%M:%S"));
			result = _tmp5_;
			return result;
		} else {
			gchar* _tmp6_;
			_tmp6_ = g_strdup (_ ("%H:%M"));
			result = _tmp6_;
			return result;
		}
	}
}


static gboolean string_contains (const gchar* self, const gchar* needle) {
	gboolean result = FALSE;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (needle != NULL, FALSE);
	_tmp0_ = needle;
	_tmp1_ = strstr ((gchar*) self, (gchar*) _tmp0_);
	result = _tmp1_ != NULL;
	return result;
}


gboolean granite_date_time_is_clock_format_12h (void) {
	gboolean result = FALSE;
	GSettings* h24_settings = NULL;
	GSettings* _tmp0_;
	gchar* format = NULL;
	gchar* _tmp1_;
	gboolean _tmp2_;
	_tmp0_ = g_settings_new ("org.gnome.desktop.interface");
	h24_settings = _tmp0_;
	_tmp1_ = g_settings_get_string (h24_settings, "clock-format");
	format = _tmp1_;
	_tmp2_ = string_contains (format, "12h");
	result = _tmp2_;
	_g_free0 (format);
	_g_object_unref0 (h24_settings);
	return result;
}


gchar* granite_date_time_get_default_date_format (gboolean with_weekday, gboolean with_day, gboolean with_year) {
	gchar* result = NULL;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_;
	gchar* _tmp48_;
	_tmp2_ = with_weekday;
	if (_tmp2_ == TRUE) {
		gboolean _tmp3_;
		_tmp3_ = with_day;
		_tmp1_ = _tmp3_ == TRUE;
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		gboolean _tmp4_;
		_tmp4_ = with_year;
		_tmp0_ = _tmp4_ == TRUE;
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		gchar* _tmp5_;
		_tmp5_ = g_strdup (_ ("%a %b %e %Y"));
		result = _tmp5_;
		return result;
	} else {
		gboolean _tmp6_ = FALSE;
		gboolean _tmp7_ = FALSE;
		gboolean _tmp8_;
		_tmp8_ = with_weekday;
		if (_tmp8_ == FALSE) {
			gboolean _tmp9_;
			_tmp9_ = with_day;
			_tmp7_ = _tmp9_ == TRUE;
		} else {
			_tmp7_ = FALSE;
		}
		if (_tmp7_) {
			gboolean _tmp10_;
			_tmp10_ = with_year;
			_tmp6_ = _tmp10_ == TRUE;
		} else {
			_tmp6_ = FALSE;
		}
		if (_tmp6_) {
			gchar* _tmp11_;
			_tmp11_ = g_strdup (_ ("%b %e %Y"));
			result = _tmp11_;
			return result;
		} else {
			gboolean _tmp12_ = FALSE;
			gboolean _tmp13_ = FALSE;
			gboolean _tmp14_;
			_tmp14_ = with_weekday;
			if (_tmp14_ == FALSE) {
				gboolean _tmp15_;
				_tmp15_ = with_day;
				_tmp13_ = _tmp15_ == FALSE;
			} else {
				_tmp13_ = FALSE;
			}
			if (_tmp13_) {
				gboolean _tmp16_;
				_tmp16_ = with_year;
				_tmp12_ = _tmp16_ == TRUE;
			} else {
				_tmp12_ = FALSE;
			}
			if (_tmp12_) {
				gchar* _tmp17_;
				_tmp17_ = g_strdup (_ ("%Y"));
				result = _tmp17_;
				return result;
			} else {
				gboolean _tmp18_ = FALSE;
				gboolean _tmp19_ = FALSE;
				gboolean _tmp20_;
				_tmp20_ = with_weekday;
				if (_tmp20_ == FALSE) {
					gboolean _tmp21_;
					_tmp21_ = with_day;
					_tmp19_ = _tmp21_ == TRUE;
				} else {
					_tmp19_ = FALSE;
				}
				if (_tmp19_) {
					gboolean _tmp22_;
					_tmp22_ = with_year;
					_tmp18_ = _tmp22_ == FALSE;
				} else {
					_tmp18_ = FALSE;
				}
				if (_tmp18_) {
					gchar* _tmp23_;
					_tmp23_ = g_strdup (_ ("%b %e"));
					result = _tmp23_;
					return result;
				} else {
					gboolean _tmp24_ = FALSE;
					gboolean _tmp25_ = FALSE;
					gboolean _tmp26_;
					_tmp26_ = with_weekday;
					if (_tmp26_ == TRUE) {
						gboolean _tmp27_;
						_tmp27_ = with_day;
						_tmp25_ = _tmp27_ == FALSE;
					} else {
						_tmp25_ = FALSE;
					}
					if (_tmp25_) {
						gboolean _tmp28_;
						_tmp28_ = with_year;
						_tmp24_ = _tmp28_ == TRUE;
					} else {
						_tmp24_ = FALSE;
					}
					if (_tmp24_) {
						gchar* _tmp29_;
						_tmp29_ = g_strdup (_ ("%a %Y"));
						result = _tmp29_;
						return result;
					} else {
						gboolean _tmp30_ = FALSE;
						gboolean _tmp31_ = FALSE;
						gboolean _tmp32_;
						_tmp32_ = with_weekday;
						if (_tmp32_ == TRUE) {
							gboolean _tmp33_;
							_tmp33_ = with_day;
							_tmp31_ = _tmp33_ == FALSE;
						} else {
							_tmp31_ = FALSE;
						}
						if (_tmp31_) {
							gboolean _tmp34_;
							_tmp34_ = with_year;
							_tmp30_ = _tmp34_ == FALSE;
						} else {
							_tmp30_ = FALSE;
						}
						if (_tmp30_) {
							gchar* _tmp35_;
							_tmp35_ = g_strdup (_ ("%a"));
							result = _tmp35_;
							return result;
						} else {
							gboolean _tmp36_ = FALSE;
							gboolean _tmp37_ = FALSE;
							gboolean _tmp38_;
							_tmp38_ = with_weekday;
							if (_tmp38_ == TRUE) {
								gboolean _tmp39_;
								_tmp39_ = with_day;
								_tmp37_ = _tmp39_ == TRUE;
							} else {
								_tmp37_ = FALSE;
							}
							if (_tmp37_) {
								gboolean _tmp40_;
								_tmp40_ = with_year;
								_tmp36_ = _tmp40_ == FALSE;
							} else {
								_tmp36_ = FALSE;
							}
							if (_tmp36_) {
								gchar* _tmp41_;
								_tmp41_ = g_strdup (_ ("%a %b %e"));
								result = _tmp41_;
								return result;
							} else {
								gboolean _tmp42_ = FALSE;
								gboolean _tmp43_ = FALSE;
								gboolean _tmp44_;
								_tmp44_ = with_weekday;
								if (_tmp44_ == FALSE) {
									gboolean _tmp45_;
									_tmp45_ = with_day;
									_tmp43_ = _tmp45_ == FALSE;
								} else {
									_tmp43_ = FALSE;
								}
								if (_tmp43_) {
									gboolean _tmp46_;
									_tmp46_ = with_year;
									_tmp42_ = _tmp46_ == FALSE;
								} else {
									_tmp42_ = FALSE;
								}
								if (_tmp42_) {
									gchar* _tmp47_;
									_tmp47_ = g_strdup (_ ("%b"));
									result = _tmp47_;
									return result;
								}
							}
						}
					}
				}
			}
		}
	}
	_tmp48_ = g_strdup ("");
	result = _tmp48_;
	return result;
}


/**
     * Applies the stylesheet to the widget
     * 
     * @param widget widget to apply style to
     * @param stylesheet style to apply to screen
     * @param class_name class name to add style to
     * @param priority priorty of change
     */
static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static gchar* string_strip (const gchar* self) {
	gchar* result = NULL;
	gchar* _result_ = NULL;
	gchar* _tmp0_;
	const gchar* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = g_strdup (self);
	_result_ = _tmp0_;
	_tmp1_ = _result_;
	g_strstrip (_tmp1_);
	result = _result_;
	return result;
}


GtkCssProvider* granite_widgets_utils_set_theming (GtkWidget* widget, const gchar* stylesheet, const gchar* class_name, gint priority) {
	GtkCssProvider* result = NULL;
	GtkCssProvider* css_provider = NULL;
	const gchar* _tmp0_;
	GtkCssProvider* _tmp1_;
	GtkStyleContext* context = NULL;
	GtkWidget* _tmp2_;
	GtkStyleContext* _tmp3_;
	GtkStyleContext* _tmp4_;
	GtkCssProvider* _tmp5_;
	gboolean _tmp9_ = FALSE;
	const gchar* _tmp10_;
	g_return_val_if_fail (widget != NULL, NULL);
	g_return_val_if_fail (stylesheet != NULL, NULL);
	_tmp0_ = stylesheet;
	_tmp1_ = granite_widgets_utils_get_css_provider (_tmp0_);
	css_provider = _tmp1_;
	_tmp2_ = widget;
	_tmp3_ = gtk_widget_get_style_context (_tmp2_);
	_tmp4_ = _g_object_ref0 (_tmp3_);
	context = _tmp4_;
	_tmp5_ = css_provider;
	if (_tmp5_ != NULL) {
		GtkStyleContext* _tmp6_;
		GtkCssProvider* _tmp7_;
		gint _tmp8_;
		_tmp6_ = context;
		_tmp7_ = css_provider;
		_tmp8_ = priority;
		gtk_style_context_add_provider (_tmp6_, (GtkStyleProvider*) _tmp7_, (guint) _tmp8_);
	}
	_tmp10_ = class_name;
	if (_tmp10_ != NULL) {
		const gchar* _tmp11_;
		gchar* _tmp12_;
		gchar* _tmp13_;
		_tmp11_ = class_name;
		_tmp12_ = string_strip (_tmp11_);
		_tmp13_ = _tmp12_;
		_tmp9_ = g_strcmp0 (_tmp13_, "") != 0;
		_g_free0 (_tmp13_);
	} else {
		_tmp9_ = FALSE;
	}
	if (_tmp9_) {
		GtkStyleContext* _tmp14_;
		const gchar* _tmp15_;
		_tmp14_ = context;
		_tmp15_ = class_name;
		gtk_style_context_add_class (_tmp14_, _tmp15_);
	}
	result = css_provider;
	_g_object_unref0 (context);
	return result;
}


/**
     * Applies a stylesheet to the given screen. This will affects all the
     * widgets which are part of that screen.
     * 
     * @param screen Screen to apply style to
     * @param stylesheet style to apply to screen
     * @param priority priorty of change
     */
GtkCssProvider* granite_widgets_utils_set_theming_for_screen (GdkScreen* screen, const gchar* stylesheet, gint priority) {
	GtkCssProvider* result = NULL;
	GtkCssProvider* css_provider = NULL;
	const gchar* _tmp0_;
	GtkCssProvider* _tmp1_;
	GtkCssProvider* _tmp2_;
	g_return_val_if_fail (screen != NULL, NULL);
	g_return_val_if_fail (stylesheet != NULL, NULL);
	_tmp0_ = stylesheet;
	_tmp1_ = granite_widgets_utils_get_css_provider (_tmp0_);
	css_provider = _tmp1_;
	_tmp2_ = css_provider;
	if (_tmp2_ != NULL) {
		GdkScreen* _tmp3_;
		GtkCssProvider* _tmp4_;
		gint _tmp5_;
		_tmp3_ = screen;
		_tmp4_ = css_provider;
		_tmp5_ = priority;
		gtk_style_context_add_provider_for_screen (_tmp3_, (GtkStyleProvider*) _tmp4_, (guint) _tmp5_);
	}
	result = css_provider;
	return result;
}


/**
     * @return a new {@link Gtk.CssProvider}, or null in case the parsing of
     *         //stylesheet// failed.
     */
GtkCssProvider* granite_widgets_utils_get_css_provider (const gchar* stylesheet) {
	GtkCssProvider* result = NULL;
	GtkCssProvider* provider = NULL;
	GtkCssProvider* _tmp0_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (stylesheet != NULL, NULL);
	_tmp0_ = gtk_css_provider_new ();
	provider = _tmp0_;
	{
		GtkCssProvider* _tmp1_;
		const gchar* _tmp2_;
		_tmp1_ = provider;
		_tmp2_ = stylesheet;
		gtk_css_provider_load_from_data (_tmp1_, _tmp2_, (gssize) -1, &_inner_error_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch20_g_error;
		}
	}
	goto __finally20;
	__catch20_g_error:
	{
		GError* e = NULL;
		GError* _tmp3_;
		const gchar* _tmp4_;
		const gchar* _tmp5_;
		e = _inner_error_;
		_inner_error_ = NULL;
		_tmp3_ = e;
		_tmp4_ = _tmp3_->message;
		_tmp5_ = stylesheet;
		g_warning ("Utils.vala:190: Could not create CSS Provider: %s\nStylesheet:\n%s", _tmp4_, _tmp5_);
		result = NULL;
		_g_error_free0 (e);
		_g_object_unref0 (provider);
		return result;
	}
	__finally20:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		_g_object_unref0 (provider);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	result = provider;
	return result;
}


gboolean granite_widgets_utils_is_left_to_right (GtkWidget* widget) {
	gboolean result = FALSE;
	GtkTextDirection dir = 0;
	GtkWidget* _tmp0_;
	GtkTextDirection _tmp1_;
	GtkTextDirection _tmp2_;
	GtkTextDirection _tmp4_;
	g_return_val_if_fail (widget != NULL, FALSE);
	_tmp0_ = widget;
	_tmp1_ = gtk_widget_get_direction (_tmp0_);
	dir = _tmp1_;
	_tmp2_ = dir;
	if (_tmp2_ == GTK_TEXT_DIR_NONE) {
		GtkTextDirection _tmp3_;
		_tmp3_ = gtk_widget_get_default_direction ();
		dir = _tmp3_;
	}
	_tmp4_ = dir;
	result = _tmp4_ == GTK_TEXT_DIR_LTR;
	return result;
}


/**
     * This method applies given text style to given label
     * 
     * @param text_style text style to apply
     * @param label label to apply style to
     */
void granite_widgets_utils_apply_text_style_to_label (GraniteTextStyle text_style, GtkLabel* label) {
	GtkCssProvider* style_provider = NULL;
	GtkCssProvider* _tmp0_;
	GtkStyleContext* style_context = NULL;
	GtkLabel* _tmp1_;
	GtkStyleContext* _tmp2_;
	GtkStyleContext* _tmp3_;
	gchar* style_class = NULL;
	gchar* stylesheet = NULL;
	GraniteTextStyle _tmp4_;
	gchar* _tmp5_ = NULL;
	gchar* _tmp6_;
	GtkStyleContext* _tmp7_;
	const gchar* _tmp8_;
	GtkStyleContext* _tmp13_;
	GtkCssProvider* _tmp14_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (label != NULL);
	_tmp0_ = gtk_css_provider_new ();
	style_provider = _tmp0_;
	_tmp1_ = label;
	_tmp2_ = gtk_widget_get_style_context ((GtkWidget*) _tmp1_);
	_tmp3_ = _g_object_ref0 (_tmp2_);
	style_context = _tmp3_;
	_tmp4_ = text_style;
	_tmp6_ = granite_text_style_get_stylesheet (_tmp4_, &_tmp5_);
	_g_free0 (style_class);
	style_class = _tmp5_;
	_g_free0 (stylesheet);
	stylesheet = _tmp6_;
	_tmp7_ = style_context;
	_tmp8_ = style_class;
	gtk_style_context_add_class (_tmp7_, _tmp8_);
	{
		GtkCssProvider* _tmp9_;
		const gchar* _tmp10_;
		_tmp9_ = style_provider;
		_tmp10_ = stylesheet;
		gtk_css_provider_load_from_data (_tmp9_, _tmp10_, (gssize) -1, &_inner_error_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch21_g_error;
		}
	}
	goto __finally21;
	__catch21_g_error:
	{
		GError* err = NULL;
		GError* _tmp11_;
		const gchar* _tmp12_;
		err = _inner_error_;
		_inner_error_ = NULL;
		_tmp11_ = err;
		_tmp12_ = _tmp11_->message;
		g_warning ("Utils.vala:222: Couldn't apply style to label: %s", _tmp12_);
		_g_error_free0 (err);
		_g_free0 (stylesheet);
		_g_free0 (style_class);
		_g_object_unref0 (style_context);
		_g_object_unref0 (style_provider);
		return;
	}
	__finally21:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		_g_free0 (stylesheet);
		_g_free0 (style_class);
		_g_object_unref0 (style_context);
		_g_object_unref0 (style_provider);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	_tmp13_ = style_context;
	_tmp14_ = style_provider;
	gtk_style_context_add_provider (_tmp13_, (GtkStyleProvider*) _tmp14_, (guint) GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
	_g_free0 (stylesheet);
	_g_free0 (style_class);
	_g_object_unref0 (style_context);
	_g_object_unref0 (style_provider);
}


/**
     * This method detects the close button position as configured for the window manager. If you
     * need to know when this key changed, it's best to listen on the schema returned by
     * {@link Granite.Widgets.Utils.get_button_layout_schema} for changes and then call this method again.
     *
     * @param position a {@link Granite.CloseButtonPosition} indicating where to best put the close button
     * @return if no schema was detected by {@link Granite.Widgets.Utils.get_button_layout_schema}
     *         or there was no close value in the button-layout string, false will be returned. The position
     *         will be LEFT in that case.
     */
gboolean granite_widgets_utils_get_default_close_button_position (GraniteCloseButtonPosition* position) {
	GraniteCloseButtonPosition _vala_position = 0;
	gboolean result = FALSE;
	gchar* schema = NULL;
	gchar* _tmp0_;
	const gchar* _tmp1_;
	gchar* layout = NULL;
	const gchar* _tmp2_;
	GSettings* _tmp3_;
	GSettings* _tmp4_;
	gchar* _tmp5_;
	gchar* _tmp6_;
	gchar** parts = NULL;
	const gchar* _tmp7_;
	gchar** _tmp8_;
	gchar** _tmp9_;
	gint parts_length1;
	gint _parts_size_;
	gchar** _tmp10_;
	gint _tmp10__length1;
	gchar** _tmp11_;
	gint _tmp11__length1;
	const gchar* _tmp12_;
	gboolean _tmp13_;
	_vala_position = GRANITE_CLOSE_BUTTON_POSITION_LEFT;
	_tmp0_ = granite_widgets_utils_get_button_layout_schema ();
	schema = _tmp0_;
	_tmp1_ = schema;
	if (_tmp1_ == NULL) {
		result = FALSE;
		_g_free0 (schema);
		if (position) {
			*position = _vala_position;
		}
		return result;
	}
	_tmp2_ = schema;
	_tmp3_ = g_settings_new (_tmp2_);
	_tmp4_ = _tmp3_;
	_tmp5_ = g_settings_get_string (_tmp4_, GRANITE_WIDGETS_UTILS_WM_BUTTON_LAYOUT_KEY);
	_tmp6_ = _tmp5_;
	_g_object_unref0 (_tmp4_);
	layout = _tmp6_;
	_tmp7_ = layout;
	_tmp9_ = _tmp8_ = g_strsplit (_tmp7_, ":", 0);
	parts = _tmp9_;
	parts_length1 = _vala_array_length (_tmp8_);
	_parts_size_ = parts_length1;
	_tmp10_ = parts;
	_tmp10__length1 = parts_length1;
	if (_tmp10__length1 < 2) {
		result = FALSE;
		parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
		_g_free0 (layout);
		_g_free0 (schema);
		if (position) {
			*position = _vala_position;
		}
		return result;
	}
	_tmp11_ = parts;
	_tmp11__length1 = parts_length1;
	_tmp12_ = _tmp11_[0];
	_tmp13_ = string_contains (_tmp12_, "close");
	if (_tmp13_) {
		_vala_position = GRANITE_CLOSE_BUTTON_POSITION_LEFT;
		result = TRUE;
		parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
		_g_free0 (layout);
		_g_free0 (schema);
		if (position) {
			*position = _vala_position;
		}
		return result;
	} else {
		gchar** _tmp14_;
		gint _tmp14__length1;
		const gchar* _tmp15_;
		gboolean _tmp16_;
		_tmp14_ = parts;
		_tmp14__length1 = parts_length1;
		_tmp15_ = _tmp14_[1];
		_tmp16_ = string_contains (_tmp15_, "close");
		if (_tmp16_) {
			_vala_position = GRANITE_CLOSE_BUTTON_POSITION_RIGHT;
			result = TRUE;
			parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
			_g_free0 (layout);
			_g_free0 (schema);
			if (position) {
				*position = _vala_position;
			}
			return result;
		}
	}
	result = FALSE;
	parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
	_g_free0 (layout);
	_g_free0 (schema);
	if (position) {
		*position = _vala_position;
	}
	return result;
}


/**
     * This methods returns the schema used by {@link Granite.Widgets.Utils.get_default_close_button_position}
     * to determine the close button placement. It will first check for the pantheon/gala schema and then fallback
     * to the default gnome one. If neither is available, NULL is returned. Make sure to check for this case, 
     * as otherwise your program may crash on startup.
     *
     * @return the schema name
     */
static gchar** _vala_array_dup4 (gchar** self, int length) {
	gchar** result;
	int i;
	result = g_new0 (gchar*, length + 1);
	for (i = 0; i < length; i++) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (self[i]);
		result[i] = _tmp0_;
	}
	return result;
}


static gboolean _vala_string_array_contains (gchar* * stack, int stack_length, gchar* needle) {
	int i;
	for (i = 0; i < stack_length; i++) {
		if (g_strcmp0 (stack[i], needle) == 0) {
			return TRUE;
		}
	}
	return FALSE;
}


gchar* granite_widgets_utils_get_button_layout_schema (void) {
	gchar* result = NULL;
	gchar** schemas = NULL;
	gchar** _tmp0_;
	gchar** _tmp1_;
	gchar** _tmp2_;
	gint _tmp2__length1;
	gint schemas_length1;
	gint _schemas_size_;
	gchar** _tmp3_;
	gint _tmp3__length1;
	_tmp1_ = _tmp0_ = g_settings_list_schemas ();
	_tmp2_ = (_tmp1_ != NULL) ? _vala_array_dup4 (_tmp1_, _vala_array_length (_tmp0_)) : ((gpointer) _tmp1_);
	_tmp2__length1 = _vala_array_length (_tmp0_);
	schemas = _tmp2_;
	schemas_length1 = _tmp2__length1;
	_schemas_size_ = schemas_length1;
	_tmp3_ = schemas;
	_tmp3__length1 = schemas_length1;
	if (_vala_string_array_contains (_tmp3_, _tmp3__length1, GRANITE_WIDGETS_UTILS_PANTHEON_SETTINGS_PATH)) {
		gchar* _tmp4_;
		_tmp4_ = g_strdup (GRANITE_WIDGETS_UTILS_PANTHEON_SETTINGS_PATH);
		result = _tmp4_;
		schemas = (_vala_array_free (schemas, schemas_length1, (GDestroyNotify) g_free), NULL);
		return result;
	} else {
		gchar** _tmp5_;
		gint _tmp5__length1;
		_tmp5_ = schemas;
		_tmp5__length1 = schemas_length1;
		if (_vala_string_array_contains (_tmp5_, _tmp5__length1, GRANITE_WIDGETS_UTILS_WM_SETTINGS_PATH)) {
			gchar* _tmp6_;
			_tmp6_ = g_strdup (GRANITE_WIDGETS_UTILS_WM_SETTINGS_PATH);
			result = _tmp6_;
			schemas = (_vala_array_free (schemas, schemas_length1, (GDestroyNotify) g_free), NULL);
			return result;
		}
	}
	g_warning ("Utils.vala:286: No schema indicating the button-layout is installed.");
	result = NULL;
	schemas = (_vala_array_free (schemas, schemas_length1, (GDestroyNotify) g_free), NULL);
	return result;
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



