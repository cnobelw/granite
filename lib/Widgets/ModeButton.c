/* ModeButton.c generated by valac 0.36.7, the Vala compiler
 * generated from ModeButton.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gee.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <stdlib.h>
#include <string.h>
#include <gdk/gdk.h>


#define GRANITE_WIDGETS_TYPE_MODE_BUTTON (granite_widgets_mode_button_get_type ())
#define GRANITE_WIDGETS_MODE_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRANITE_WIDGETS_TYPE_MODE_BUTTON, GraniteWidgetsModeButton))
#define GRANITE_WIDGETS_MODE_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRANITE_WIDGETS_TYPE_MODE_BUTTON, GraniteWidgetsModeButtonClass))
#define GRANITE_WIDGETS_IS_MODE_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRANITE_WIDGETS_TYPE_MODE_BUTTON))
#define GRANITE_WIDGETS_IS_MODE_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRANITE_WIDGETS_TYPE_MODE_BUTTON))
#define GRANITE_WIDGETS_MODE_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRANITE_WIDGETS_TYPE_MODE_BUTTON, GraniteWidgetsModeButtonClass))

typedef struct _GraniteWidgetsModeButton GraniteWidgetsModeButton;
typedef struct _GraniteWidgetsModeButtonClass GraniteWidgetsModeButtonClass;
typedef struct _GraniteWidgetsModeButtonPrivate GraniteWidgetsModeButtonPrivate;

#define GRANITE_WIDGETS_MODE_BUTTON_TYPE_ITEM (granite_widgets_mode_button_item_get_type ())
#define GRANITE_WIDGETS_MODE_BUTTON_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRANITE_WIDGETS_MODE_BUTTON_TYPE_ITEM, GraniteWidgetsModeButtonItem))
#define GRANITE_WIDGETS_MODE_BUTTON_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRANITE_WIDGETS_MODE_BUTTON_TYPE_ITEM, GraniteWidgetsModeButtonItemClass))
#define GRANITE_WIDGETS_MODE_BUTTON_IS_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRANITE_WIDGETS_MODE_BUTTON_TYPE_ITEM))
#define GRANITE_WIDGETS_MODE_BUTTON_IS_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRANITE_WIDGETS_MODE_BUTTON_TYPE_ITEM))
#define GRANITE_WIDGETS_MODE_BUTTON_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRANITE_WIDGETS_MODE_BUTTON_TYPE_ITEM, GraniteWidgetsModeButtonItemClass))

typedef struct _GraniteWidgetsModeButtonItem GraniteWidgetsModeButtonItem;
typedef struct _GraniteWidgetsModeButtonItemClass GraniteWidgetsModeButtonItemClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block4Data Block4Data;
#define _g_list_free0(var) ((var == NULL) ? NULL : (var = (g_list_free (var), NULL)))
typedef struct _GraniteWidgetsModeButtonItemPrivate GraniteWidgetsModeButtonItemPrivate;
enum  {
	GRANITE_WIDGETS_MODE_BUTTON_MODE_ADDED_SIGNAL,
	GRANITE_WIDGETS_MODE_BUTTON_MODE_REMOVED_SIGNAL,
	GRANITE_WIDGETS_MODE_BUTTON_MODE_CHANGED_SIGNAL,
	GRANITE_WIDGETS_MODE_BUTTON_NUM_SIGNALS
};
static guint granite_widgets_mode_button_signals[GRANITE_WIDGETS_MODE_BUTTON_NUM_SIGNALS] = {0};
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _GraniteWidgetsModeButton {
	GtkBox parent_instance;
	GraniteWidgetsModeButtonPrivate * priv;
};

struct _GraniteWidgetsModeButtonClass {
	GtkBoxClass parent_class;
};

struct _GraniteWidgetsModeButtonPrivate {
	gint _selected;
	GeeHashMap* item_map;
};

struct _Block4Data {
	int _ref_count_;
	GraniteWidgetsModeButton* self;
	GraniteWidgetsModeButtonItem* item;
};

struct _GraniteWidgetsModeButtonItem {
	GtkToggleButton parent_instance;
	GraniteWidgetsModeButtonItemPrivate * priv;
};

struct _GraniteWidgetsModeButtonItemClass {
	GtkToggleButtonClass parent_class;
};

struct _GraniteWidgetsModeButtonItemPrivate {
	gint _index;
};


static gpointer granite_widgets_mode_button_parent_class = NULL;
static gpointer granite_widgets_mode_button_item_parent_class = NULL;

GType granite_widgets_mode_button_get_type (void) G_GNUC_CONST;
static GType granite_widgets_mode_button_item_get_type (void) G_GNUC_CONST G_GNUC_UNUSED;
#define GRANITE_WIDGETS_MODE_BUTTON_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GRANITE_WIDGETS_TYPE_MODE_BUTTON, GraniteWidgetsModeButtonPrivate))
enum  {
	GRANITE_WIDGETS_MODE_BUTTON_0_PROPERTY,
	GRANITE_WIDGETS_MODE_BUTTON_SELECTED_PROPERTY,
	GRANITE_WIDGETS_MODE_BUTTON_N_ITEMS_PROPERTY
};
GraniteWidgetsModeButton* granite_widgets_mode_button_new (void);
GraniteWidgetsModeButton* granite_widgets_mode_button_construct (GType object_type);
gint granite_widgets_mode_button_append_pixbuf (GraniteWidgetsModeButton* self, GdkPixbuf* pixbuf);
gint granite_widgets_mode_button_append (GraniteWidgetsModeButton* self, GtkWidget* w);
gint granite_widgets_mode_button_append_text (GraniteWidgetsModeButton* self, const gchar* text);
gint granite_widgets_mode_button_append_icon (GraniteWidgetsModeButton* self, const gchar* icon_name, GtkIconSize size);
static Block4Data* block4_data_ref (Block4Data* _data4_);
static void block4_data_unref (void * _userdata_);
static GraniteWidgetsModeButtonItem* granite_widgets_mode_button_item_new (gint index);
static GraniteWidgetsModeButtonItem* granite_widgets_mode_button_item_construct (GType object_type, gint index);
static gboolean granite_widgets_mode_button_on_scroll_event (GraniteWidgetsModeButton* self, GtkWidget* widget, GdkEventScroll* ev);
static gboolean _granite_widgets_mode_button_on_scroll_event_gtk_widget_scroll_event (GtkWidget* _sender, GdkEventScroll* event, gpointer self);
static gboolean __lambda26_ (Block4Data* _data4_);
void granite_widgets_mode_button_set_active (GraniteWidgetsModeButton* self, gint new_active_index);
static gint granite_widgets_mode_button_item_get_index (GraniteWidgetsModeButtonItem* self);
static gboolean ___lambda26__gtk_widget_button_press_event (GtkWidget* _sender, GdkEventButton* event, gpointer self);
void granite_widgets_mode_button_set_item_visible (GraniteWidgetsModeButton* self, gint index, gboolean val);
void granite_widgets_mode_button_remove (GraniteWidgetsModeButton* self, gint index);
void granite_widgets_mode_button_clear_children (GraniteWidgetsModeButton* self);
gint granite_widgets_mode_button_get_selected (GraniteWidgetsModeButton* self);
void granite_widgets_mode_button_set_selected (GraniteWidgetsModeButton* self, gint value);
guint granite_widgets_mode_button_get_n_items (GraniteWidgetsModeButton* self);
static void g_cclosure_user_marshal_VOID__INT_OBJECT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
#define GRANITE_WIDGETS_MODE_BUTTON_ITEM_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GRANITE_WIDGETS_MODE_BUTTON_TYPE_ITEM, GraniteWidgetsModeButtonItemPrivate))
enum  {
	GRANITE_WIDGETS_MODE_BUTTON_ITEM_0_PROPERTY,
	GRANITE_WIDGETS_MODE_BUTTON_ITEM_INDEX_PROPERTY
};
static void granite_widgets_mode_button_item_set_index (GraniteWidgetsModeButtonItem* self, gint value);
static void granite_widgets_mode_button_item_finalize (GObject * obj);
static void _vala_granite_widgets_mode_button_item_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_granite_widgets_mode_button_item_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
static void granite_widgets_mode_button_finalize (GObject * obj);
static void _vala_granite_widgets_mode_button_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_granite_widgets_mode_button_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


/**
         * Makes new ModeButton
         */
static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


GraniteWidgetsModeButton* granite_widgets_mode_button_construct (GType object_type) {
	GraniteWidgetsModeButton * self = NULL;
	GeeHashMap* _tmp0_;
	GtkStyleContext* style = NULL;
	GtkStyleContext* _tmp1_;
	GtkStyleContext* _tmp2_;
	self = (GraniteWidgetsModeButton*) g_object_new (object_type, NULL);
	gtk_box_set_homogeneous ((GtkBox*) self, TRUE);
	gtk_box_set_spacing ((GtkBox*) self, 0);
	g_object_set ((GtkWidget*) self, "can-focus", FALSE, NULL);
	_tmp0_ = gee_hash_map_new (G_TYPE_INT, NULL, NULL, GRANITE_WIDGETS_MODE_BUTTON_TYPE_ITEM, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->item_map);
	self->priv->item_map = _tmp0_;
	_tmp1_ = gtk_widget_get_style_context ((GtkWidget*) self);
	_tmp2_ = _g_object_ref0 (_tmp1_);
	style = _tmp2_;
	gtk_style_context_add_class (style, GTK_STYLE_CLASS_LINKED);
	gtk_style_context_add_class (style, "raised");
	_g_object_unref0 (style);
	return self;
}


GraniteWidgetsModeButton* granite_widgets_mode_button_new (void) {
	return granite_widgets_mode_button_construct (GRANITE_WIDGETS_TYPE_MODE_BUTTON);
}


/**
         * Appends Pixbuf to ModeButton
         *
         * @param pixbuf Gdk.Pixbuf to append to ModeButton
         */
gint granite_widgets_mode_button_append_pixbuf (GraniteWidgetsModeButton* self, GdkPixbuf* pixbuf) {
	gint result = 0;
	GdkPixbuf* _tmp0_;
	GtkImage* _tmp1_;
	GtkImage* _tmp2_;
	gint _tmp3_;
	gint _tmp4_;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (pixbuf != NULL, 0);
	_tmp0_ = pixbuf;
	_tmp1_ = (GtkImage*) gtk_image_new_from_pixbuf (_tmp0_);
	g_object_ref_sink (_tmp1_);
	_tmp2_ = _tmp1_;
	_tmp3_ = granite_widgets_mode_button_append (self, (GtkWidget*) _tmp2_);
	_tmp4_ = _tmp3_;
	_g_object_unref0 (_tmp2_);
	result = _tmp4_;
	return result;
}


/**
         * Appends text to ModeButton
         *
         * @param text text to append to ModeButton
         * @return index of new item
         */
gint granite_widgets_mode_button_append_text (GraniteWidgetsModeButton* self, const gchar* text) {
	gint result = 0;
	const gchar* _tmp0_;
	GtkLabel* _tmp1_;
	GtkLabel* _tmp2_;
	gint _tmp3_;
	gint _tmp4_;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (text != NULL, 0);
	_tmp0_ = text;
	_tmp1_ = (GtkLabel*) gtk_label_new (_tmp0_);
	g_object_ref_sink (_tmp1_);
	_tmp2_ = _tmp1_;
	_tmp3_ = granite_widgets_mode_button_append (self, (GtkWidget*) _tmp2_);
	_tmp4_ = _tmp3_;
	_g_object_unref0 (_tmp2_);
	result = _tmp4_;
	return result;
}


/**
         * Appends icon to ModeButton
         *
         * @param icon_name name of icon to append
         * @param size desired size of icon
         * @return index of appended item
         */
gint granite_widgets_mode_button_append_icon (GraniteWidgetsModeButton* self, const gchar* icon_name, GtkIconSize size) {
	gint result = 0;
	const gchar* _tmp0_;
	GtkIconSize _tmp1_;
	GtkImage* _tmp2_;
	GtkImage* _tmp3_;
	gint _tmp4_;
	gint _tmp5_;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (icon_name != NULL, 0);
	_tmp0_ = icon_name;
	_tmp1_ = size;
	_tmp2_ = (GtkImage*) gtk_image_new_from_icon_name (_tmp0_, _tmp1_);
	g_object_ref_sink (_tmp2_);
	_tmp3_ = _tmp2_;
	_tmp4_ = granite_widgets_mode_button_append (self, (GtkWidget*) _tmp3_);
	_tmp5_ = _tmp4_;
	_g_object_unref0 (_tmp3_);
	result = _tmp5_;
	return result;
}


/**
         * Appends given widget to ModeButton
         *
         * @param w widget to add to ModeButton
         * @return index of new item
         */
static Block4Data* block4_data_ref (Block4Data* _data4_) {
	g_atomic_int_inc (&_data4_->_ref_count_);
	return _data4_;
}


static void block4_data_unref (void * _userdata_) {
	Block4Data* _data4_;
	_data4_ = (Block4Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data4_->_ref_count_)) {
		GraniteWidgetsModeButton* self;
		self = _data4_->self;
		_g_object_unref0 (_data4_->item);
		_g_object_unref0 (self);
		g_slice_free (Block4Data, _data4_);
	}
}


static gboolean _granite_widgets_mode_button_on_scroll_event_gtk_widget_scroll_event (GtkWidget* _sender, GdkEventScroll* event, gpointer self) {
	gboolean result;
	result = granite_widgets_mode_button_on_scroll_event ((GraniteWidgetsModeButton*) self, _sender, event);
	return result;
}


static gboolean __lambda26_ (Block4Data* _data4_) {
	GraniteWidgetsModeButton* self;
	gboolean result = FALSE;
	gint _tmp0_;
	gint _tmp1_;
	self = _data4_->self;
	_tmp0_ = granite_widgets_mode_button_item_get_index (_data4_->item);
	_tmp1_ = _tmp0_;
	granite_widgets_mode_button_set_active (self, _tmp1_);
	result = TRUE;
	return result;
}


static gboolean ___lambda26__gtk_widget_button_press_event (GtkWidget* _sender, GdkEventButton* event, gpointer self) {
	gboolean result;
	result = __lambda26_ (self);
	return result;
}


gint granite_widgets_mode_button_append (GraniteWidgetsModeButton* self, GtkWidget* w) {
	gint result = 0;
	Block4Data* _data4_;
	gint index = 0;
	GeeHashMap* _tmp8_;
	gint _tmp9_;
	gpointer _tmp10_;
	GraniteWidgetsModeButtonItem* _tmp11_;
	gint _tmp12_;
	GraniteWidgetsModeButtonItem* _tmp13_;
	GtkWidget* _tmp14_;
	GeeHashMap* _tmp15_;
	gint _tmp16_;
	gint _tmp17_;
	GtkWidget* _tmp18_;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (w != NULL, 0);
	_data4_ = g_slice_new0 (Block4Data);
	_data4_->_ref_count_ = 1;
	_data4_->self = g_object_ref (self);
	{
		GeeHashMap* _tmp0_;
		gint _tmp1_;
		gint _tmp2_;
		gboolean _tmp3_ = FALSE;
		_tmp0_ = self->priv->item_map;
		_tmp1_ = gee_abstract_map_get_size ((GeeAbstractMap*) _tmp0_);
		_tmp2_ = _tmp1_;
		index = _tmp2_;
		_tmp3_ = TRUE;
		while (TRUE) {
			GeeHashMap* _tmp5_;
			gint _tmp6_;
			gboolean _tmp7_;
			if (!_tmp3_) {
				gint _tmp4_;
				_tmp4_ = index;
				index = _tmp4_ + 1;
			}
			_tmp3_ = FALSE;
			_tmp5_ = self->priv->item_map;
			_tmp6_ = index;
			_tmp7_ = gee_abstract_map_has_key ((GeeAbstractMap*) _tmp5_, (gpointer) ((gintptr) _tmp6_));
			if (!_tmp7_) {
				break;
			}
		}
	}
	_tmp8_ = self->priv->item_map;
	_tmp9_ = index;
	_tmp10_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp8_, (gpointer) ((gintptr) _tmp9_));
	_tmp11_ = (GraniteWidgetsModeButtonItem*) _tmp10_;
	_vala_assert (_tmp11_ == NULL, "item_map[index] == null");
	_g_object_unref0 (_tmp11_);
	_tmp12_ = index;
	_tmp13_ = granite_widgets_mode_button_item_new (_tmp12_);
	g_object_ref_sink (_tmp13_);
	_data4_->item = _tmp13_;
	g_signal_connect_object ((GtkWidget*) _data4_->item, "scroll-event", (GCallback) _granite_widgets_mode_button_on_scroll_event_gtk_widget_scroll_event, self, 0);
	_tmp14_ = w;
	gtk_container_add ((GtkContainer*) _data4_->item, _tmp14_);
	g_signal_connect_data ((GtkWidget*) _data4_->item, "button-press-event", (GCallback) ___lambda26__gtk_widget_button_press_event, block4_data_ref (_data4_), (GClosureNotify) block4_data_unref, 0);
	_tmp15_ = self->priv->item_map;
	_tmp16_ = index;
	gee_abstract_map_set ((GeeAbstractMap*) _tmp15_, (gpointer) ((gintptr) _tmp16_), _data4_->item);
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _data4_->item);
	gtk_widget_show_all ((GtkWidget*) _data4_->item);
	_tmp17_ = index;
	_tmp18_ = w;
	g_signal_emit (self, granite_widgets_mode_button_signals[GRANITE_WIDGETS_MODE_BUTTON_MODE_ADDED_SIGNAL], 0, _tmp17_, _tmp18_);
	result = index;
	block4_data_unref (_data4_);
	_data4_ = NULL;
	return result;
}


/**
         * Sets item of given index's activity
         *
         * @param new_active_index index of changed item
         */
void granite_widgets_mode_button_set_active (GraniteWidgetsModeButton* self, gint new_active_index) {
	GeeHashMap* _tmp0_;
	gint _tmp1_;
	gboolean _tmp2_;
	GraniteWidgetsModeButtonItem* new_item = NULL;
	GeeHashMap* _tmp3_;
	gint _tmp4_;
	gpointer _tmp5_;
	GraniteWidgetsModeButtonItem* _tmp6_;
	GraniteWidgetsModeButtonItem* _tmp7_;
	GraniteWidgetsModeButtonItem* _tmp8_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->item_map;
	_tmp1_ = new_active_index;
	_tmp2_ = gee_abstract_map_has_key ((GeeAbstractMap*) _tmp0_, (gpointer) ((gintptr) _tmp1_));
	g_return_if_fail (_tmp2_);
	_tmp3_ = self->priv->item_map;
	_tmp4_ = new_active_index;
	_tmp5_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp3_, (gpointer) ((gintptr) _tmp4_));
	_tmp6_ = (GraniteWidgetsModeButtonItem*) _tmp5_;
	_tmp7_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp6_, GRANITE_WIDGETS_MODE_BUTTON_TYPE_ITEM) ? ((GraniteWidgetsModeButtonItem*) _tmp6_) : NULL;
	if (_tmp7_ == NULL) {
		_g_object_unref0 (_tmp6_);
	}
	new_item = _tmp7_;
	_tmp8_ = new_item;
	if (_tmp8_ != NULL) {
		GraniteWidgetsModeButtonItem* _tmp9_;
		gint _tmp10_;
		gint _tmp11_;
		gint _tmp12_;
		GraniteWidgetsModeButtonItem* _tmp13_;
		gint _tmp14_;
		gint _tmp15_;
		GraniteWidgetsModeButtonItem* old_item = NULL;
		GeeHashMap* _tmp16_;
		gint _tmp17_;
		gpointer _tmp18_;
		GraniteWidgetsModeButtonItem* _tmp19_;
		GraniteWidgetsModeButtonItem* _tmp20_;
		GraniteWidgetsModeButtonItem* _tmp21_;
		gint _tmp23_;
		GraniteWidgetsModeButtonItem* _tmp24_;
		GtkWidget* _tmp25_;
		_tmp9_ = new_item;
		_tmp10_ = granite_widgets_mode_button_item_get_index (_tmp9_);
		_tmp11_ = _tmp10_;
		_tmp12_ = new_active_index;
		_vala_assert (_tmp11_ == _tmp12_, "new_item.index == new_active_index");
		_tmp13_ = new_item;
		gtk_toggle_button_set_active ((GtkToggleButton*) _tmp13_, TRUE);
		_tmp14_ = self->priv->_selected;
		_tmp15_ = new_active_index;
		if (_tmp14_ == _tmp15_) {
			_g_object_unref0 (new_item);
			return;
		}
		_tmp16_ = self->priv->item_map;
		_tmp17_ = self->priv->_selected;
		_tmp18_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp16_, (gpointer) ((gintptr) _tmp17_));
		_tmp19_ = (GraniteWidgetsModeButtonItem*) _tmp18_;
		_tmp20_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp19_, GRANITE_WIDGETS_MODE_BUTTON_TYPE_ITEM) ? ((GraniteWidgetsModeButtonItem*) _tmp19_) : NULL;
		if (_tmp20_ == NULL) {
			_g_object_unref0 (_tmp19_);
		}
		old_item = _tmp20_;
		_tmp21_ = old_item;
		if (_tmp21_ != NULL) {
			GraniteWidgetsModeButtonItem* _tmp22_;
			_tmp22_ = old_item;
			gtk_toggle_button_set_active ((GtkToggleButton*) _tmp22_, FALSE);
		}
		_tmp23_ = new_active_index;
		self->priv->_selected = _tmp23_;
		_tmp24_ = new_item;
		_tmp25_ = gtk_bin_get_child ((GtkBin*) _tmp24_);
		g_signal_emit (self, granite_widgets_mode_button_signals[GRANITE_WIDGETS_MODE_BUTTON_MODE_CHANGED_SIGNAL], 0, _tmp25_);
		_g_object_unref0 (old_item);
	}
	_g_object_unref0 (new_item);
}


/**
         * Changes visibility of item of given index
         *
         * @param index index of item to be modified
         * @param val value to change the visiblity to
         */
void granite_widgets_mode_button_set_item_visible (GraniteWidgetsModeButton* self, gint index, gboolean val) {
	GeeHashMap* _tmp0_;
	gint _tmp1_;
	gboolean _tmp2_;
	GraniteWidgetsModeButtonItem* item = NULL;
	GeeHashMap* _tmp3_;
	gint _tmp4_;
	gpointer _tmp5_;
	GraniteWidgetsModeButtonItem* _tmp6_;
	GraniteWidgetsModeButtonItem* _tmp7_;
	GraniteWidgetsModeButtonItem* _tmp8_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->item_map;
	_tmp1_ = index;
	_tmp2_ = gee_abstract_map_has_key ((GeeAbstractMap*) _tmp0_, (gpointer) ((gintptr) _tmp1_));
	g_return_if_fail (_tmp2_);
	_tmp3_ = self->priv->item_map;
	_tmp4_ = index;
	_tmp5_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp3_, (gpointer) ((gintptr) _tmp4_));
	_tmp6_ = (GraniteWidgetsModeButtonItem*) _tmp5_;
	_tmp7_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp6_, GRANITE_WIDGETS_MODE_BUTTON_TYPE_ITEM) ? ((GraniteWidgetsModeButtonItem*) _tmp6_) : NULL;
	if (_tmp7_ == NULL) {
		_g_object_unref0 (_tmp6_);
	}
	item = _tmp7_;
	_tmp8_ = item;
	if (_tmp8_ != NULL) {
		GraniteWidgetsModeButtonItem* _tmp9_;
		gint _tmp10_;
		gint _tmp11_;
		gint _tmp12_;
		GraniteWidgetsModeButtonItem* _tmp13_;
		gboolean _tmp14_;
		GraniteWidgetsModeButtonItem* _tmp15_;
		gboolean _tmp16_;
		_tmp9_ = item;
		_tmp10_ = granite_widgets_mode_button_item_get_index (_tmp9_);
		_tmp11_ = _tmp10_;
		_tmp12_ = index;
		_vala_assert (_tmp11_ == _tmp12_, "item.index == index");
		_tmp13_ = item;
		_tmp14_ = val;
		gtk_widget_set_no_show_all ((GtkWidget*) _tmp13_, !_tmp14_);
		_tmp15_ = item;
		_tmp16_ = val;
		gtk_widget_set_visible ((GtkWidget*) _tmp15_, _tmp16_);
	}
	_g_object_unref0 (item);
}


/**
         * Removes item at given index
         *
         * @param index index of item to remove
         */
void granite_widgets_mode_button_remove (GraniteWidgetsModeButton* self, gint index) {
	GeeHashMap* _tmp0_;
	gint _tmp1_;
	gboolean _tmp2_;
	GraniteWidgetsModeButtonItem* item = NULL;
	GeeHashMap* _tmp3_;
	gint _tmp4_;
	gpointer _tmp5_;
	GraniteWidgetsModeButtonItem* _tmp6_;
	GraniteWidgetsModeButtonItem* _tmp7_;
	GraniteWidgetsModeButtonItem* _tmp8_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->item_map;
	_tmp1_ = index;
	_tmp2_ = gee_abstract_map_has_key ((GeeAbstractMap*) _tmp0_, (gpointer) ((gintptr) _tmp1_));
	g_return_if_fail (_tmp2_);
	_tmp3_ = self->priv->item_map;
	_tmp4_ = index;
	_tmp5_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp3_, (gpointer) ((gintptr) _tmp4_));
	_tmp6_ = (GraniteWidgetsModeButtonItem*) _tmp5_;
	_tmp7_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp6_, GRANITE_WIDGETS_MODE_BUTTON_TYPE_ITEM) ? ((GraniteWidgetsModeButtonItem*) _tmp6_) : NULL;
	if (_tmp7_ == NULL) {
		_g_object_unref0 (_tmp6_);
	}
	item = _tmp7_;
	_tmp8_ = item;
	if (_tmp8_ != NULL) {
		GraniteWidgetsModeButtonItem* _tmp9_;
		gint _tmp10_;
		gint _tmp11_;
		gint _tmp12_;
		GeeHashMap* _tmp13_;
		gint _tmp14_;
		gint _tmp15_;
		GraniteWidgetsModeButtonItem* _tmp16_;
		GtkWidget* _tmp17_;
		GraniteWidgetsModeButtonItem* _tmp18_;
		_tmp9_ = item;
		_tmp10_ = granite_widgets_mode_button_item_get_index (_tmp9_);
		_tmp11_ = _tmp10_;
		_tmp12_ = index;
		_vala_assert (_tmp11_ == _tmp12_, "item.index == index");
		_tmp13_ = self->priv->item_map;
		_tmp14_ = index;
		gee_abstract_map_unset ((GeeAbstractMap*) _tmp13_, (gpointer) ((gintptr) _tmp14_), NULL);
		_tmp15_ = index;
		_tmp16_ = item;
		_tmp17_ = gtk_bin_get_child ((GtkBin*) _tmp16_);
		g_signal_emit (self, granite_widgets_mode_button_signals[GRANITE_WIDGETS_MODE_BUTTON_MODE_REMOVED_SIGNAL], 0, _tmp15_, _tmp17_);
		_tmp18_ = item;
		gtk_widget_destroy ((GtkWidget*) _tmp18_);
	}
	_g_object_unref0 (item);
}


/**
         * Clears all children
         */
void granite_widgets_mode_button_clear_children (GraniteWidgetsModeButton* self) {
	GList* _tmp0_;
	GeeHashMap* _tmp5_;
	g_return_if_fail (self != NULL);
	_tmp0_ = gtk_container_get_children ((GtkContainer*) self);
	{
		GList* button_collection = NULL;
		GList* button_it = NULL;
		button_collection = _tmp0_;
		for (button_it = button_collection; button_it != NULL; button_it = button_it->next) {
			GtkWidget* button = NULL;
			button = (GtkWidget*) button_it->data;
			{
				GtkWidget* _tmp1_;
				GtkWidget* _tmp2_;
				GtkContainer* _tmp3_;
				_tmp1_ = button;
				gtk_widget_hide (_tmp1_);
				_tmp2_ = button;
				_tmp3_ = (GtkContainer*) gtk_widget_get_parent (_tmp2_);
				if (_tmp3_ != NULL) {
					GtkWidget* _tmp4_;
					_tmp4_ = button;
					GTK_CONTAINER_CLASS (granite_widgets_mode_button_parent_class)->remove ((GtkContainer*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_box_get_type (), GtkBox), _tmp4_);
				}
			}
		}
		_g_list_free0 (button_collection);
	}
	_tmp5_ = self->priv->item_map;
	gee_abstract_map_clear ((GeeAbstractMap*) _tmp5_);
	self->priv->_selected = -1;
}


static gboolean granite_widgets_mode_button_on_scroll_event (GraniteWidgetsModeButton* self, GtkWidget* widget, GdkEventScroll* ev) {
	gboolean result = FALSE;
	gint offset = 0;
	GdkEventScroll* _tmp0_;
	GdkScrollDirection _tmp1_;
	GList* children = NULL;
	GList* _tmp2_;
	guint n_children = 0U;
	GList* _tmp3_;
	guint _tmp4_;
	GraniteWidgetsModeButtonItem* selected_item = NULL;
	GeeHashMap* _tmp5_;
	gint _tmp6_;
	gint _tmp7_;
	gpointer _tmp8_;
	GraniteWidgetsModeButtonItem* _tmp9_;
	gint new_item = 0;
	GList* _tmp10_;
	GraniteWidgetsModeButtonItem* _tmp11_;
	gint _tmp12_;
	gint _tmp13_;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (widget != NULL, FALSE);
	g_return_val_if_fail (ev != NULL, FALSE);
	_tmp0_ = ev;
	_tmp1_ = _tmp0_->direction;
	switch (_tmp1_) {
		case GDK_SCROLL_DOWN:
		case GDK_SCROLL_RIGHT:
		{
			offset = 1;
			break;
		}
		case GDK_SCROLL_UP:
		case GDK_SCROLL_LEFT:
		{
			offset = -1;
			break;
		}
		default:
		{
			result = FALSE;
			return result;
		}
	}
	_tmp2_ = gtk_container_get_children ((GtkContainer*) self);
	children = _tmp2_;
	_tmp3_ = children;
	_tmp4_ = g_list_length (_tmp3_);
	n_children = _tmp4_;
	_tmp5_ = self->priv->item_map;
	_tmp6_ = granite_widgets_mode_button_get_selected (self);
	_tmp7_ = _tmp6_;
	_tmp8_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp5_, (gpointer) ((gintptr) _tmp7_));
	selected_item = (GraniteWidgetsModeButtonItem*) _tmp8_;
	_tmp9_ = selected_item;
	if (_tmp9_ == NULL) {
		result = FALSE;
		_g_object_unref0 (selected_item);
		_g_list_free0 (children);
		return result;
	}
	_tmp10_ = children;
	_tmp11_ = selected_item;
	_tmp12_ = g_list_index (_tmp10_, (GtkWidget*) _tmp11_);
	new_item = _tmp12_;
	_tmp13_ = new_item;
	if (_tmp13_ < 0) {
		result = FALSE;
		_g_object_unref0 (selected_item);
		_g_list_free0 (children);
		return result;
	}
	{
		gboolean _tmp14_ = FALSE;
		_tmp14_ = TRUE;
		while (TRUE) {
			gint _tmp19_;
			gint _tmp20_;
			GraniteWidgetsModeButtonItem* item = NULL;
			GList* _tmp21_;
			gint _tmp22_;
			gconstpointer _tmp23_;
			GtkWidget* _tmp24_;
			GraniteWidgetsModeButtonItem* _tmp25_;
			gboolean _tmp26_ = FALSE;
			gboolean _tmp27_ = FALSE;
			GraniteWidgetsModeButtonItem* _tmp28_;
			if (!_tmp14_) {
				gboolean _tmp15_ = FALSE;
				gint _tmp16_;
				_tmp16_ = new_item;
				if (_tmp16_ >= 0) {
					gint _tmp17_;
					guint _tmp18_;
					_tmp17_ = new_item;
					_tmp18_ = n_children;
					_tmp15_ = ((guint) _tmp17_) < _tmp18_;
				} else {
					_tmp15_ = FALSE;
				}
				if (!_tmp15_) {
					break;
				}
			}
			_tmp14_ = FALSE;
			_tmp19_ = new_item;
			_tmp20_ = offset;
			new_item = _tmp19_ + _tmp20_;
			_tmp21_ = children;
			_tmp22_ = new_item;
			_tmp23_ = g_list_nth_data (_tmp21_, (guint) _tmp22_);
			_tmp24_ = (GtkWidget*) _tmp23_;
			_tmp25_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp24_, GRANITE_WIDGETS_MODE_BUTTON_TYPE_ITEM) ? ((GraniteWidgetsModeButtonItem*) _tmp24_) : NULL);
			item = _tmp25_;
			_tmp28_ = item;
			if (_tmp28_ != NULL) {
				GraniteWidgetsModeButtonItem* _tmp29_;
				gboolean _tmp30_;
				gboolean _tmp31_;
				_tmp29_ = item;
				_tmp30_ = gtk_widget_get_visible ((GtkWidget*) _tmp29_);
				_tmp31_ = _tmp30_;
				_tmp27_ = _tmp31_;
			} else {
				_tmp27_ = FALSE;
			}
			if (_tmp27_) {
				GraniteWidgetsModeButtonItem* _tmp32_;
				gboolean _tmp33_;
				gboolean _tmp34_;
				_tmp32_ = item;
				_tmp33_ = gtk_widget_get_sensitive ((GtkWidget*) _tmp32_);
				_tmp34_ = _tmp33_;
				_tmp26_ = _tmp34_;
			} else {
				_tmp26_ = FALSE;
			}
			if (_tmp26_) {
				GraniteWidgetsModeButtonItem* _tmp35_;
				gint _tmp36_;
				gint _tmp37_;
				_tmp35_ = item;
				_tmp36_ = granite_widgets_mode_button_item_get_index (_tmp35_);
				_tmp37_ = _tmp36_;
				granite_widgets_mode_button_set_selected (self, _tmp37_);
				_g_object_unref0 (item);
				break;
			}
			_g_object_unref0 (item);
		}
	}
	result = FALSE;
	_g_object_unref0 (selected_item);
	_g_list_free0 (children);
	return result;
}


gint granite_widgets_mode_button_get_selected (GraniteWidgetsModeButton* self) {
	gint result;
	gint _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_selected;
	result = _tmp0_;
	return result;
}


void granite_widgets_mode_button_set_selected (GraniteWidgetsModeButton* self, gint value) {
	gint _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	granite_widgets_mode_button_set_active (self, _tmp0_);
	g_object_notify ((GObject *) self, "selected");
}


guint granite_widgets_mode_button_get_n_items (GraniteWidgetsModeButton* self) {
	guint result;
	GeeHashMap* _tmp0_;
	gint _tmp1_;
	gint _tmp2_;
	g_return_val_if_fail (self != NULL, 0U);
	_tmp0_ = self->priv->item_map;
	_tmp1_ = gee_abstract_map_get_size ((GeeAbstractMap*) _tmp0_);
	_tmp2_ = _tmp1_;
	result = (guint) _tmp2_;
	return result;
}


static void g_cclosure_user_marshal_VOID__INT_OBJECT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__INT_OBJECT) (gpointer data1, gint arg_1, gpointer arg_2, gpointer data2);
	register GMarshalFunc_VOID__INT_OBJECT callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	cc = (GCClosure *) closure;
	g_return_if_fail (n_param_values == 3);
	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = param_values->data[0].v_pointer;
	} else {
		data1 = param_values->data[0].v_pointer;
		data2 = closure->data;
	}
	callback = (GMarshalFunc_VOID__INT_OBJECT) (marshal_data ? marshal_data : cc->callback);
	callback (data1, g_value_get_int (param_values + 1), g_value_get_object (param_values + 2), data2);
}


static GraniteWidgetsModeButtonItem* granite_widgets_mode_button_item_construct (GType object_type, gint index) {
	GraniteWidgetsModeButtonItem * self = NULL;
	gint _tmp0_;
	_tmp0_ = index;
	self = (GraniteWidgetsModeButtonItem*) g_object_new (object_type, "index", _tmp0_, NULL);
	g_object_set ((GtkWidget*) self, "can-focus", FALSE, NULL);
	gtk_widget_add_events ((GtkWidget*) self, (gint) GDK_SCROLL_MASK);
	return self;
}


static GraniteWidgetsModeButtonItem* granite_widgets_mode_button_item_new (gint index) {
	return granite_widgets_mode_button_item_construct (GRANITE_WIDGETS_MODE_BUTTON_TYPE_ITEM, index);
}


static gint granite_widgets_mode_button_item_get_index (GraniteWidgetsModeButtonItem* self) {
	gint result;
	gint _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_index;
	result = _tmp0_;
	return result;
}


static void granite_widgets_mode_button_item_set_index (GraniteWidgetsModeButtonItem* self, gint value) {
	g_return_if_fail (self != NULL);
	if (granite_widgets_mode_button_item_get_index (self) != value) {
		gint _tmp0_;
		_tmp0_ = value;
		self->priv->_index = _tmp0_;
		g_object_notify ((GObject *) self, "index");
	}
}


static void granite_widgets_mode_button_item_class_init (GraniteWidgetsModeButtonItemClass * klass) {
	granite_widgets_mode_button_item_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GraniteWidgetsModeButtonItemPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_granite_widgets_mode_button_item_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_granite_widgets_mode_button_item_set_property;
	G_OBJECT_CLASS (klass)->finalize = granite_widgets_mode_button_item_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GRANITE_WIDGETS_MODE_BUTTON_ITEM_INDEX_PROPERTY, g_param_spec_int ("index", "index", "index", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
}


static void granite_widgets_mode_button_item_instance_init (GraniteWidgetsModeButtonItem * self) {
	self->priv = GRANITE_WIDGETS_MODE_BUTTON_ITEM_GET_PRIVATE (self);
}


static void granite_widgets_mode_button_item_finalize (GObject * obj) {
	GraniteWidgetsModeButtonItem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRANITE_WIDGETS_MODE_BUTTON_TYPE_ITEM, GraniteWidgetsModeButtonItem);
	G_OBJECT_CLASS (granite_widgets_mode_button_item_parent_class)->finalize (obj);
}


static GType granite_widgets_mode_button_item_get_type (void) {
	static volatile gsize granite_widgets_mode_button_item_type_id__volatile = 0;
	if (g_once_init_enter (&granite_widgets_mode_button_item_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GraniteWidgetsModeButtonItemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) granite_widgets_mode_button_item_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GraniteWidgetsModeButtonItem), 0, (GInstanceInitFunc) granite_widgets_mode_button_item_instance_init, NULL };
		GType granite_widgets_mode_button_item_type_id;
		granite_widgets_mode_button_item_type_id = g_type_register_static (gtk_toggle_button_get_type (), "GraniteWidgetsModeButtonItem", &g_define_type_info, 0);
		g_once_init_leave (&granite_widgets_mode_button_item_type_id__volatile, granite_widgets_mode_button_item_type_id);
	}
	return granite_widgets_mode_button_item_type_id__volatile;
}


static void _vala_granite_widgets_mode_button_item_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GraniteWidgetsModeButtonItem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GRANITE_WIDGETS_MODE_BUTTON_TYPE_ITEM, GraniteWidgetsModeButtonItem);
	switch (property_id) {
		case GRANITE_WIDGETS_MODE_BUTTON_ITEM_INDEX_PROPERTY:
		g_value_set_int (value, granite_widgets_mode_button_item_get_index (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_granite_widgets_mode_button_item_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GraniteWidgetsModeButtonItem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GRANITE_WIDGETS_MODE_BUTTON_TYPE_ITEM, GraniteWidgetsModeButtonItem);
	switch (property_id) {
		case GRANITE_WIDGETS_MODE_BUTTON_ITEM_INDEX_PROPERTY:
		granite_widgets_mode_button_item_set_index (self, g_value_get_int (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void granite_widgets_mode_button_class_init (GraniteWidgetsModeButtonClass * klass) {
	granite_widgets_mode_button_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GraniteWidgetsModeButtonPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_granite_widgets_mode_button_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_granite_widgets_mode_button_set_property;
	G_OBJECT_CLASS (klass)->finalize = granite_widgets_mode_button_finalize;
	/**
	         * Index of currently selected item.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GRANITE_WIDGETS_MODE_BUTTON_SELECTED_PROPERTY, g_param_spec_int ("selected", "selected", "selected", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	         * Read-only length of current ModeButton
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GRANITE_WIDGETS_MODE_BUTTON_N_ITEMS_PROPERTY, g_param_spec_uint ("n-items", "n-items", "n-items", 0, G_MAXUINT, 0U, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	granite_widgets_mode_button_signals[GRANITE_WIDGETS_MODE_BUTTON_MODE_ADDED_SIGNAL] = g_signal_new ("mode-added", GRANITE_WIDGETS_TYPE_MODE_BUTTON, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__INT_OBJECT, G_TYPE_NONE, 2, G_TYPE_INT, gtk_widget_get_type ());
	granite_widgets_mode_button_signals[GRANITE_WIDGETS_MODE_BUTTON_MODE_REMOVED_SIGNAL] = g_signal_new ("mode-removed", GRANITE_WIDGETS_TYPE_MODE_BUTTON, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__INT_OBJECT, G_TYPE_NONE, 2, G_TYPE_INT, gtk_widget_get_type ());
	granite_widgets_mode_button_signals[GRANITE_WIDGETS_MODE_BUTTON_MODE_CHANGED_SIGNAL] = g_signal_new ("mode-changed", GRANITE_WIDGETS_TYPE_MODE_BUTTON, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, gtk_widget_get_type ());
}


static void granite_widgets_mode_button_instance_init (GraniteWidgetsModeButton * self) {
	self->priv = GRANITE_WIDGETS_MODE_BUTTON_GET_PRIVATE (self);
	self->priv->_selected = -1;
}


static void granite_widgets_mode_button_finalize (GObject * obj) {
	GraniteWidgetsModeButton * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRANITE_WIDGETS_TYPE_MODE_BUTTON, GraniteWidgetsModeButton);
	_g_object_unref0 (self->priv->item_map);
	G_OBJECT_CLASS (granite_widgets_mode_button_parent_class)->finalize (obj);
}


/**
     * This widget is a multiple option modal switch
     *
     * {{../../doc/images/ModeButton.png}}
     */
GType granite_widgets_mode_button_get_type (void) {
	static volatile gsize granite_widgets_mode_button_type_id__volatile = 0;
	if (g_once_init_enter (&granite_widgets_mode_button_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GraniteWidgetsModeButtonClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) granite_widgets_mode_button_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GraniteWidgetsModeButton), 0, (GInstanceInitFunc) granite_widgets_mode_button_instance_init, NULL };
		GType granite_widgets_mode_button_type_id;
		granite_widgets_mode_button_type_id = g_type_register_static (gtk_box_get_type (), "GraniteWidgetsModeButton", &g_define_type_info, 0);
		g_once_init_leave (&granite_widgets_mode_button_type_id__volatile, granite_widgets_mode_button_type_id);
	}
	return granite_widgets_mode_button_type_id__volatile;
}


static void _vala_granite_widgets_mode_button_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GraniteWidgetsModeButton * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GRANITE_WIDGETS_TYPE_MODE_BUTTON, GraniteWidgetsModeButton);
	switch (property_id) {
		case GRANITE_WIDGETS_MODE_BUTTON_SELECTED_PROPERTY:
		g_value_set_int (value, granite_widgets_mode_button_get_selected (self));
		break;
		case GRANITE_WIDGETS_MODE_BUTTON_N_ITEMS_PROPERTY:
		g_value_set_uint (value, granite_widgets_mode_button_get_n_items (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_granite_widgets_mode_button_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GraniteWidgetsModeButton * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GRANITE_WIDGETS_TYPE_MODE_BUTTON, GraniteWidgetsModeButton);
	switch (property_id) {
		case GRANITE_WIDGETS_MODE_BUTTON_SELECTED_PROPERTY:
		granite_widgets_mode_button_set_selected (self, g_value_get_int (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



