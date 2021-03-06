/* LightWindow.c generated by valac 0.36.7, the Vala compiler
 * generated from LightWindow.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <stdlib.h>
#include <string.h>


#define GRANITE_WIDGETS_TYPE_COMPOSITED_WINDOW (granite_widgets_composited_window_get_type ())
#define GRANITE_WIDGETS_COMPOSITED_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRANITE_WIDGETS_TYPE_COMPOSITED_WINDOW, GraniteWidgetsCompositedWindow))
#define GRANITE_WIDGETS_COMPOSITED_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRANITE_WIDGETS_TYPE_COMPOSITED_WINDOW, GraniteWidgetsCompositedWindowClass))
#define GRANITE_WIDGETS_IS_COMPOSITED_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRANITE_WIDGETS_TYPE_COMPOSITED_WINDOW))
#define GRANITE_WIDGETS_IS_COMPOSITED_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRANITE_WIDGETS_TYPE_COMPOSITED_WINDOW))
#define GRANITE_WIDGETS_COMPOSITED_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRANITE_WIDGETS_TYPE_COMPOSITED_WINDOW, GraniteWidgetsCompositedWindowClass))

typedef struct _GraniteWidgetsCompositedWindow GraniteWidgetsCompositedWindow;
typedef struct _GraniteWidgetsCompositedWindowClass GraniteWidgetsCompositedWindowClass;
typedef struct _GraniteWidgetsCompositedWindowPrivate GraniteWidgetsCompositedWindowPrivate;

#define GRANITE_WIDGETS_TYPE_DECORATED_WINDOW (granite_widgets_decorated_window_get_type ())
#define GRANITE_WIDGETS_DECORATED_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRANITE_WIDGETS_TYPE_DECORATED_WINDOW, GraniteWidgetsDecoratedWindow))
#define GRANITE_WIDGETS_DECORATED_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRANITE_WIDGETS_TYPE_DECORATED_WINDOW, GraniteWidgetsDecoratedWindowClass))
#define GRANITE_WIDGETS_IS_DECORATED_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRANITE_WIDGETS_TYPE_DECORATED_WINDOW))
#define GRANITE_WIDGETS_IS_DECORATED_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRANITE_WIDGETS_TYPE_DECORATED_WINDOW))
#define GRANITE_WIDGETS_DECORATED_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRANITE_WIDGETS_TYPE_DECORATED_WINDOW, GraniteWidgetsDecoratedWindowClass))

typedef struct _GraniteWidgetsDecoratedWindow GraniteWidgetsDecoratedWindow;
typedef struct _GraniteWidgetsDecoratedWindowClass GraniteWidgetsDecoratedWindowClass;
typedef struct _GraniteWidgetsDecoratedWindowPrivate GraniteWidgetsDecoratedWindowPrivate;

#define GRANITE_WIDGETS_TYPE_LIGHT_WINDOW (granite_widgets_light_window_get_type ())
#define GRANITE_WIDGETS_LIGHT_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRANITE_WIDGETS_TYPE_LIGHT_WINDOW, GraniteWidgetsLightWindow))
#define GRANITE_WIDGETS_LIGHT_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRANITE_WIDGETS_TYPE_LIGHT_WINDOW, GraniteWidgetsLightWindowClass))
#define GRANITE_WIDGETS_IS_LIGHT_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRANITE_WIDGETS_TYPE_LIGHT_WINDOW))
#define GRANITE_WIDGETS_IS_LIGHT_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRANITE_WIDGETS_TYPE_LIGHT_WINDOW))
#define GRANITE_WIDGETS_LIGHT_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRANITE_WIDGETS_TYPE_LIGHT_WINDOW, GraniteWidgetsLightWindowClass))

typedef struct _GraniteWidgetsLightWindow GraniteWidgetsLightWindow;
typedef struct _GraniteWidgetsLightWindowClass GraniteWidgetsLightWindowClass;
typedef struct _GraniteWidgetsLightWindowPrivate GraniteWidgetsLightWindowPrivate;

struct _GraniteWidgetsCompositedWindow {
	GtkWindow parent_instance;
	GraniteWidgetsCompositedWindowPrivate * priv;
};

struct _GraniteWidgetsCompositedWindowClass {
	GtkWindowClass parent_class;
};

struct _GraniteWidgetsDecoratedWindow {
	GraniteWidgetsCompositedWindow parent_instance;
	GraniteWidgetsDecoratedWindowPrivate * priv;
	GdkPixbuf* close_img;
};

struct _GraniteWidgetsDecoratedWindowClass {
	GraniteWidgetsCompositedWindowClass parent_class;
};

struct _GraniteWidgetsLightWindow {
	GraniteWidgetsDecoratedWindow parent_instance;
	GraniteWidgetsLightWindowPrivate * priv;
};

struct _GraniteWidgetsLightWindowClass {
	GraniteWidgetsDecoratedWindowClass parent_class;
};


static gpointer granite_widgets_light_window_parent_class = NULL;

GType granite_widgets_composited_window_get_type (void) G_GNUC_CONST;
GType granite_widgets_decorated_window_get_type (void) G_GNUC_CONST;
GType granite_widgets_light_window_get_type (void) G_GNUC_CONST;
enum  {
	GRANITE_WIDGETS_LIGHT_WINDOW_0_PROPERTY
};
GraniteWidgetsLightWindow* granite_widgets_light_window_new (const gchar* title);
GraniteWidgetsLightWindow* granite_widgets_light_window_construct (GType object_type, const gchar* title);
#define GRANITE_STYLE_CLASS_CONTENT_VIEW_WINDOW "content-view-window"
#define GRANITE_STYLE_CLASS_CONTENT_VIEW "content-view"
GraniteWidgetsDecoratedWindow* granite_widgets_decorated_window_new (const gchar* title, const gchar* window_style, const gchar* content_style);
GraniteWidgetsDecoratedWindow* granite_widgets_decorated_window_construct (GType object_type, const gchar* title, const gchar* window_style, const gchar* content_style);


/**
         * Makes a new Window with the Light Theme
         *
         * @param title title of new window
         */
GraniteWidgetsLightWindow* granite_widgets_light_window_construct (GType object_type, const gchar* title) {
	GraniteWidgetsLightWindow * self = NULL;
	const gchar* _tmp0_;
	g_return_val_if_fail (title != NULL, NULL);
	_tmp0_ = title;
	self = (GraniteWidgetsLightWindow*) granite_widgets_decorated_window_construct (object_type, _tmp0_, GRANITE_STYLE_CLASS_CONTENT_VIEW_WINDOW, GRANITE_STYLE_CLASS_CONTENT_VIEW);
	return self;
}


GraniteWidgetsLightWindow* granite_widgets_light_window_new (const gchar* title) {
	return granite_widgets_light_window_construct (GRANITE_WIDGETS_TYPE_LIGHT_WINDOW, title);
}


static void granite_widgets_light_window_class_init (GraniteWidgetsLightWindowClass * klass) {
	granite_widgets_light_window_parent_class = g_type_class_peek_parent (klass);
}


static void granite_widgets_light_window_instance_init (GraniteWidgetsLightWindow * self) {
}


/**
     * This is always-on-top, non-modal window with a large close button.
     *
     * {{../../doc/images/LightWindow.png}}
     */
GType granite_widgets_light_window_get_type (void) {
	static volatile gsize granite_widgets_light_window_type_id__volatile = 0;
	if (g_once_init_enter (&granite_widgets_light_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GraniteWidgetsLightWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) granite_widgets_light_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GraniteWidgetsLightWindow), 0, (GInstanceInitFunc) granite_widgets_light_window_instance_init, NULL };
		GType granite_widgets_light_window_type_id;
		granite_widgets_light_window_type_id = g_type_register_static (GRANITE_WIDGETS_TYPE_DECORATED_WINDOW, "GraniteWidgetsLightWindow", &g_define_type_info, 0);
		g_once_init_leave (&granite_widgets_light_window_type_id__volatile, granite_widgets_light_window_type_id);
	}
	return granite_widgets_light_window_type_id__volatile;
}



