/* DatePicker.c generated by valac 0.36.7, the Vala compiler
 * generated from DatePicker.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>
#include <stdlib.h>
#include <string.h>
#include <cairo.h>
#include <float.h>
#include <math.h>
#include <gio/gio.h>


#define GRANITE_WIDGETS_TYPE_DATE_PICKER (granite_widgets_date_picker_get_type ())
#define GRANITE_WIDGETS_DATE_PICKER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRANITE_WIDGETS_TYPE_DATE_PICKER, GraniteWidgetsDatePicker))
#define GRANITE_WIDGETS_DATE_PICKER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRANITE_WIDGETS_TYPE_DATE_PICKER, GraniteWidgetsDatePickerClass))
#define GRANITE_WIDGETS_IS_DATE_PICKER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRANITE_WIDGETS_TYPE_DATE_PICKER))
#define GRANITE_WIDGETS_IS_DATE_PICKER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRANITE_WIDGETS_TYPE_DATE_PICKER))
#define GRANITE_WIDGETS_DATE_PICKER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRANITE_WIDGETS_TYPE_DATE_PICKER, GraniteWidgetsDatePickerClass))

typedef struct _GraniteWidgetsDatePicker GraniteWidgetsDatePicker;
typedef struct _GraniteWidgetsDatePickerClass GraniteWidgetsDatePickerClass;
typedef struct _GraniteWidgetsDatePickerPrivate GraniteWidgetsDatePickerPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_date_time_unref0(var) ((var == NULL) ? NULL : (var = (g_date_time_unref (var), NULL)))

struct _GraniteWidgetsDatePicker {
	GtkEntry parent_instance;
	GraniteWidgetsDatePickerPrivate * priv;
	GtkEventBox* dropdown;
	GtkCalendar* calendar;
};

struct _GraniteWidgetsDatePickerClass {
	GtkEntryClass parent_class;
	void (*position_dropdown) (GraniteWidgetsDatePicker* self, GdkRectangle* rect);
};

struct _GraniteWidgetsDatePickerPrivate {
	gchar* _format;
	GtkPopover* popover;
	GDateTime* _date;
	gboolean proc_next_day_selected;
};


static gpointer granite_widgets_date_picker_parent_class = NULL;
static GtkBuildableIface * granite_widgets_date_picker_gtk_buildable_parent_iface = NULL;

GType granite_widgets_date_picker_get_type (void) G_GNUC_CONST;
#define GRANITE_WIDGETS_DATE_PICKER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GRANITE_WIDGETS_TYPE_DATE_PICKER, GraniteWidgetsDatePickerPrivate))
enum  {
	GRANITE_WIDGETS_DATE_PICKER_0_PROPERTY,
	GRANITE_WIDGETS_DATE_PICKER_FORMAT_PROPERTY,
	GRANITE_WIDGETS_DATE_PICKER_DATE_PROPERTY
};
#define GRANITE_WIDGETS_DATE_PICKER_OFFSET 15
#define GRANITE_WIDGETS_DATE_PICKER_MARGIN 6
GraniteWidgetsDatePicker* granite_widgets_date_picker_new_with_format (const gchar* format);
GraniteWidgetsDatePicker* granite_widgets_date_picker_construct_with_format (GType object_type, const gchar* format);
static void granite_widgets_date_picker_on_icon_press (GraniteWidgetsDatePicker* self, GtkEntryIconPosition position);
void granite_widgets_date_picker_position_dropdown (GraniteWidgetsDatePicker* self, GdkRectangle* rect);
static void granite_widgets_date_picker_real_position_dropdown (GraniteWidgetsDatePicker* self, GdkRectangle* rect);
static void granite_widgets_date_picker_on_calendar_day_selected (GraniteWidgetsDatePicker* self);
void granite_widgets_date_picker_set_date (GraniteWidgetsDatePicker* self, GDateTime* value);
static void granite_widgets_date_picker_hide_dropdown (GraniteWidgetsDatePicker* self);
GraniteWidgetsDatePicker* granite_widgets_date_picker_new (void);
GraniteWidgetsDatePicker* granite_widgets_date_picker_construct (GType object_type);
const gchar* granite_widgets_date_picker_get_format (GraniteWidgetsDatePicker* self);
static void granite_widgets_date_picker_set_format (GraniteWidgetsDatePicker* self, const gchar* value);
GDateTime* granite_widgets_date_picker_get_date (GraniteWidgetsDatePicker* self);
static GObject * granite_widgets_date_picker_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
gchar* granite_date_time_get_default_date_format (gboolean with_weekday, gboolean with_day, gboolean with_year);
static void _granite_widgets_date_picker_on_icon_press_gtk_entry_icon_release (GtkEntry* _sender, GtkEntryIconPosition p0, GdkEvent* p1, gpointer self);
static void _granite_widgets_date_picker_on_calendar_day_selected_gtk_calendar_day_selected (GtkCalendar* _sender, gpointer self);
static void _granite_widgets_date_picker___lambda27_ (GraniteWidgetsDatePicker* self);
static void __granite_widgets_date_picker___lambda27__gtk_calendar_next_month (GtkCalendar* _sender, gpointer self);
static void _granite_widgets_date_picker___lambda28_ (GraniteWidgetsDatePicker* self);
static void __granite_widgets_date_picker___lambda28__gtk_calendar_next_year (GtkCalendar* _sender, gpointer self);
static void _granite_widgets_date_picker___lambda29_ (GraniteWidgetsDatePicker* self);
static void __granite_widgets_date_picker___lambda29__gtk_calendar_prev_month (GtkCalendar* _sender, gpointer self);
static void _granite_widgets_date_picker___lambda30_ (GraniteWidgetsDatePicker* self);
static void __granite_widgets_date_picker___lambda30__gtk_calendar_prev_year (GtkCalendar* _sender, gpointer self);
static void granite_widgets_date_picker_finalize (GObject * obj);
static void _vala_granite_widgets_date_picker_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_granite_widgets_date_picker_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


/**
         * Makes a new DatePicker
         *
         * @param format desired format of new DatePicker
         */
GraniteWidgetsDatePicker* granite_widgets_date_picker_construct_with_format (GType object_type, const gchar* format) {
	GraniteWidgetsDatePicker * self = NULL;
	const gchar* _tmp0_;
	g_return_val_if_fail (format != NULL, NULL);
	_tmp0_ = format;
	self = (GraniteWidgetsDatePicker*) g_object_new (object_type, "format", _tmp0_, NULL);
	return self;
}


GraniteWidgetsDatePicker* granite_widgets_date_picker_new_with_format (const gchar* format) {
	return granite_widgets_date_picker_construct_with_format (GRANITE_WIDGETS_TYPE_DATE_PICKER, format);
}


static void granite_widgets_date_picker_on_icon_press (GraniteWidgetsDatePicker* self, GtkEntryIconPosition position) {
	GdkRectangle rect = {0};
	GdkRectangle _tmp0_ = {0};
	GtkPopover* _tmp1_;
	GdkRectangle _tmp2_;
	GtkPopover* _tmp3_;
	GtkPopover* _tmp4_;
	GtkCalendar* _tmp5_;
	g_return_if_fail (self != NULL);
	memset (&rect, 0, sizeof (GdkRectangle));
	granite_widgets_date_picker_position_dropdown (self, &_tmp0_);
	rect = _tmp0_;
	_tmp1_ = self->priv->popover;
	_tmp2_ = rect;
	gtk_popover_set_pointing_to (_tmp1_, &_tmp2_);
	_tmp3_ = self->priv->popover;
	gtk_popover_set_position (_tmp3_, GTK_POS_BOTTOM);
	_tmp4_ = self->priv->popover;
	gtk_widget_show_all ((GtkWidget*) _tmp4_);
	_tmp5_ = self->calendar;
	gtk_widget_grab_focus ((GtkWidget*) _tmp5_);
}


static void granite_widgets_date_picker_real_position_dropdown (GraniteWidgetsDatePicker* self, GdkRectangle* rect) {
	GdkRectangle _vala_rect = {0};
	GtkAllocation size = {0};
	GtkAllocation _tmp0_ = {0};
	GtkAllocation _tmp1_;
	gint _tmp2_;
	GtkAllocation _tmp3_;
	gint _tmp4_;
	gtk_widget_get_allocation ((GtkWidget*) self, &_tmp0_);
	size = _tmp0_;
	_tmp1_ = size;
	_tmp2_ = _tmp1_.width;
	_vala_rect.x = _tmp2_ - GRANITE_WIDGETS_DATE_PICKER_OFFSET;
	_tmp3_ = size;
	_tmp4_ = _tmp3_.height;
	_vala_rect.y = _tmp4_;
	if (rect) {
		*rect = _vala_rect;
	}
}


void granite_widgets_date_picker_position_dropdown (GraniteWidgetsDatePicker* self, GdkRectangle* rect) {
	g_return_if_fail (self != NULL);
	GRANITE_WIDGETS_DATE_PICKER_GET_CLASS (self)->position_dropdown (self, rect);
}


static void granite_widgets_date_picker_on_calendar_day_selected (GraniteWidgetsDatePicker* self) {
	gboolean _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->proc_next_day_selected;
	if (_tmp0_) {
		GtkCalendar* _tmp1_;
		gint _tmp2_;
		gint _tmp3_;
		GtkCalendar* _tmp4_;
		gint _tmp5_;
		gint _tmp6_;
		GtkCalendar* _tmp7_;
		gint _tmp8_;
		gint _tmp9_;
		GDateTime* _tmp10_;
		GDateTime* _tmp11_;
		_tmp1_ = self->calendar;
		g_object_get (_tmp1_, "year", &_tmp2_, NULL);
		_tmp3_ = _tmp2_;
		_tmp4_ = self->calendar;
		g_object_get (_tmp4_, "month", &_tmp5_, NULL);
		_tmp6_ = _tmp5_;
		_tmp7_ = self->calendar;
		g_object_get (_tmp7_, "day", &_tmp8_, NULL);
		_tmp9_ = _tmp8_;
		_tmp10_ = g_date_time_new_local (_tmp3_, _tmp6_ + 1, _tmp9_, 0, 0, (gdouble) 0);
		_tmp11_ = _tmp10_;
		granite_widgets_date_picker_set_date (self, _tmp11_);
		_g_date_time_unref0 (_tmp11_);
		granite_widgets_date_picker_hide_dropdown (self);
	} else {
		self->priv->proc_next_day_selected = TRUE;
	}
}


static void granite_widgets_date_picker_hide_dropdown (GraniteWidgetsDatePicker* self) {
	GtkPopover* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->popover;
	gtk_widget_hide ((GtkWidget*) _tmp0_);
}


GraniteWidgetsDatePicker* granite_widgets_date_picker_construct (GType object_type) {
	GraniteWidgetsDatePicker * self = NULL;
	self = (GraniteWidgetsDatePicker*) g_object_new (object_type, NULL);
	return self;
}


GraniteWidgetsDatePicker* granite_widgets_date_picker_new (void) {
	return granite_widgets_date_picker_construct (GRANITE_WIDGETS_TYPE_DATE_PICKER);
}


const gchar* granite_widgets_date_picker_get_format (GraniteWidgetsDatePicker* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_format;
	result = _tmp0_;
	return result;
}


static void granite_widgets_date_picker_set_format (GraniteWidgetsDatePicker* self, const gchar* value) {
	g_return_if_fail (self != NULL);
	if (g_strcmp0 (value, granite_widgets_date_picker_get_format (self)) != 0) {
		const gchar* _tmp0_;
		gchar* _tmp1_;
		_tmp0_ = value;
		_tmp1_ = g_strdup (_tmp0_);
		_g_free0 (self->priv->_format);
		self->priv->_format = _tmp1_;
		g_object_notify ((GObject *) self, "format");
	}
}


GDateTime* granite_widgets_date_picker_get_date (GraniteWidgetsDatePicker* self) {
	GDateTime* result;
	GDateTime* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_date;
	result = _tmp0_;
	return result;
}


static gpointer _g_date_time_ref0 (gpointer self) {
	return self ? g_date_time_ref (self) : NULL;
}


void granite_widgets_date_picker_set_date (GraniteWidgetsDatePicker* self, GDateTime* value) {
	GDateTime* _tmp0_;
	GDateTime* _tmp1_;
	GDateTime* _tmp2_;
	const gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _g_date_time_ref0 (_tmp0_);
	_g_date_time_unref0 (self->priv->_date);
	self->priv->_date = _tmp1_;
	_tmp2_ = self->priv->_date;
	_tmp3_ = self->priv->_format;
	_tmp4_ = g_date_time_format (_tmp2_, _tmp3_);
	_tmp5_ = _tmp4_;
	gtk_entry_set_text ((GtkEntry*) self, _tmp5_);
	_g_free0 (_tmp5_);
	g_object_notify ((GObject *) self, "date");
}


static void _granite_widgets_date_picker_on_icon_press_gtk_entry_icon_release (GtkEntry* _sender, GtkEntryIconPosition p0, GdkEvent* p1, gpointer self) {
	granite_widgets_date_picker_on_icon_press ((GraniteWidgetsDatePicker*) self, p0);
}


static void _granite_widgets_date_picker_on_calendar_day_selected_gtk_calendar_day_selected (GtkCalendar* _sender, gpointer self) {
	granite_widgets_date_picker_on_calendar_day_selected ((GraniteWidgetsDatePicker*) self);
}


static void _granite_widgets_date_picker___lambda27_ (GraniteWidgetsDatePicker* self) {
	self->priv->proc_next_day_selected = FALSE;
}


static void __granite_widgets_date_picker___lambda27__gtk_calendar_next_month (GtkCalendar* _sender, gpointer self) {
	_granite_widgets_date_picker___lambda27_ ((GraniteWidgetsDatePicker*) self);
}


static void _granite_widgets_date_picker___lambda28_ (GraniteWidgetsDatePicker* self) {
	self->priv->proc_next_day_selected = FALSE;
}


static void __granite_widgets_date_picker___lambda28__gtk_calendar_next_year (GtkCalendar* _sender, gpointer self) {
	_granite_widgets_date_picker___lambda28_ ((GraniteWidgetsDatePicker*) self);
}


static void _granite_widgets_date_picker___lambda29_ (GraniteWidgetsDatePicker* self) {
	self->priv->proc_next_day_selected = FALSE;
}


static void __granite_widgets_date_picker___lambda29__gtk_calendar_prev_month (GtkCalendar* _sender, gpointer self) {
	_granite_widgets_date_picker___lambda29_ ((GraniteWidgetsDatePicker*) self);
}


static void _granite_widgets_date_picker___lambda30_ (GraniteWidgetsDatePicker* self) {
	self->priv->proc_next_day_selected = FALSE;
}


static void __granite_widgets_date_picker___lambda30__gtk_calendar_prev_year (GtkCalendar* _sender, gpointer self) {
	_granite_widgets_date_picker___lambda30_ ((GraniteWidgetsDatePicker*) self);
}


static GObject * granite_widgets_date_picker_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	GraniteWidgetsDatePicker * self;
	const gchar* _tmp0_;
	GtkEventBox* _tmp3_;
	GtkEventBox* _tmp4_;
	GtkPopover* _tmp5_;
	GtkPopover* _tmp6_;
	GtkEventBox* _tmp7_;
	GtkCalendar* _tmp8_;
	GDateTime* _tmp9_;
	GDateTime* _tmp10_;
	GThemedIcon* _tmp11_;
	GThemedIcon* _tmp12_;
	GtkEventBox* _tmp13_;
	GtkEventBox* _tmp14_;
	GtkCalendar* _tmp15_;
	GtkCalendar* _tmp16_;
	GtkCalendar* _tmp17_;
	GtkCalendar* _tmp18_;
	GtkCalendar* _tmp19_;
	GtkCalendar* _tmp20_;
	parent_class = G_OBJECT_CLASS (granite_widgets_date_picker_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRANITE_WIDGETS_TYPE_DATE_PICKER, GraniteWidgetsDatePicker);
	_tmp0_ = self->priv->_format;
	if (_tmp0_ == NULL) {
		gchar* _tmp1_;
		gchar* _tmp2_;
		_tmp1_ = granite_date_time_get_default_date_format (FALSE, TRUE, TRUE);
		_tmp2_ = _tmp1_;
		granite_widgets_date_picker_set_format (self, _tmp2_);
		_g_free0 (_tmp2_);
	}
	_tmp3_ = (GtkEventBox*) gtk_event_box_new ();
	g_object_ref_sink (_tmp3_);
	_g_object_unref0 (self->dropdown);
	self->dropdown = _tmp3_;
	_tmp4_ = self->dropdown;
	g_object_set ((GtkWidget*) _tmp4_, "margin", GRANITE_WIDGETS_DATE_PICKER_MARGIN, NULL);
	_tmp5_ = (GtkPopover*) gtk_popover_new ((GtkWidget*) self);
	g_object_ref_sink (_tmp5_);
	_g_object_unref0 (self->priv->popover);
	self->priv->popover = _tmp5_;
	_tmp6_ = self->priv->popover;
	_tmp7_ = self->dropdown;
	gtk_container_add ((GtkContainer*) _tmp6_, (GtkWidget*) _tmp7_);
	_tmp8_ = (GtkCalendar*) gtk_calendar_new ();
	g_object_ref_sink (_tmp8_);
	_g_object_unref0 (self->calendar);
	self->calendar = _tmp8_;
	_tmp9_ = g_date_time_new_now_local ();
	_tmp10_ = _tmp9_;
	granite_widgets_date_picker_set_date (self, _tmp10_);
	_g_date_time_unref0 (_tmp10_);
	g_object_set ((GtkWidget*) self, "can-focus", FALSE, NULL);
	g_object_set ((GtkEntry*) self, "editable", FALSE, NULL);
	_tmp11_ = (GThemedIcon*) g_themed_icon_new_with_default_fallbacks ("office-calendar-symbolic");
	_tmp12_ = _tmp11_;
	g_object_set ((GtkEntry*) self, "secondary-icon-gicon", (GIcon*) _tmp12_, NULL);
	_g_object_unref0 (_tmp12_);
	_tmp13_ = self->dropdown;
	gtk_widget_add_events ((GtkWidget*) _tmp13_, (gint) GDK_FOCUS_CHANGE_MASK);
	_tmp14_ = self->dropdown;
	_tmp15_ = self->calendar;
	gtk_container_add ((GtkContainer*) _tmp14_, (GtkWidget*) _tmp15_);
	g_signal_connect_object ((GtkEntry*) self, "icon-release", (GCallback) _granite_widgets_date_picker_on_icon_press_gtk_entry_icon_release, self, 0);
	_tmp16_ = self->calendar;
	g_signal_connect_object (_tmp16_, "day-selected", (GCallback) _granite_widgets_date_picker_on_calendar_day_selected_gtk_calendar_day_selected, self, 0);
	_tmp17_ = self->calendar;
	g_signal_connect_object (_tmp17_, "next-month", (GCallback) __granite_widgets_date_picker___lambda27__gtk_calendar_next_month, self, 0);
	_tmp18_ = self->calendar;
	g_signal_connect_object (_tmp18_, "next-year", (GCallback) __granite_widgets_date_picker___lambda28__gtk_calendar_next_year, self, 0);
	_tmp19_ = self->calendar;
	g_signal_connect_object (_tmp19_, "prev-month", (GCallback) __granite_widgets_date_picker___lambda29__gtk_calendar_prev_month, self, 0);
	_tmp20_ = self->calendar;
	g_signal_connect_object (_tmp20_, "prev-year", (GCallback) __granite_widgets_date_picker___lambda30__gtk_calendar_prev_year, self, 0);
	return obj;
}


static void granite_widgets_date_picker_class_init (GraniteWidgetsDatePickerClass * klass) {
	granite_widgets_date_picker_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GraniteWidgetsDatePickerPrivate));
	((GraniteWidgetsDatePickerClass *) klass)->position_dropdown = (void (*) (GraniteWidgetsDatePicker *, GdkRectangle*)) granite_widgets_date_picker_real_position_dropdown;
	G_OBJECT_CLASS (klass)->get_property = _vala_granite_widgets_date_picker_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_granite_widgets_date_picker_set_property;
	G_OBJECT_CLASS (klass)->constructor = granite_widgets_date_picker_constructor;
	G_OBJECT_CLASS (klass)->finalize = granite_widgets_date_picker_finalize;
	/**
	         * Desired format of DatePicker
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GRANITE_WIDGETS_DATE_PICKER_FORMAT_PROPERTY, g_param_spec_string ("format", "format", "format", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	/**
	         * Current Date
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GRANITE_WIDGETS_DATE_PICKER_DATE_PROPERTY, g_param_spec_boxed ("date", "date", "date", G_TYPE_DATE_TIME, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void granite_widgets_date_picker_gtk_buildable_interface_init (GtkBuildableIface * iface) {
	granite_widgets_date_picker_gtk_buildable_parent_iface = g_type_interface_peek_parent (iface);
}


static void granite_widgets_date_picker_instance_init (GraniteWidgetsDatePicker * self) {
	self->priv = GRANITE_WIDGETS_DATE_PICKER_GET_PRIVATE (self);
	self->priv->proc_next_day_selected = TRUE;
}


static void granite_widgets_date_picker_finalize (GObject * obj) {
	GraniteWidgetsDatePicker * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRANITE_WIDGETS_TYPE_DATE_PICKER, GraniteWidgetsDatePicker);
	_g_free0 (self->priv->_format);
	_g_object_unref0 (self->dropdown);
	_g_object_unref0 (self->calendar);
	_g_object_unref0 (self->priv->popover);
	_g_date_time_unref0 (self->priv->_date);
	G_OBJECT_CLASS (granite_widgets_date_picker_parent_class)->finalize (obj);
}


/**
     * This class allows users to pick dates from a calendar.
     */
GType granite_widgets_date_picker_get_type (void) {
	static volatile gsize granite_widgets_date_picker_type_id__volatile = 0;
	if (g_once_init_enter (&granite_widgets_date_picker_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GraniteWidgetsDatePickerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) granite_widgets_date_picker_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GraniteWidgetsDatePicker), 0, (GInstanceInitFunc) granite_widgets_date_picker_instance_init, NULL };
		static const GInterfaceInfo gtk_buildable_info = { (GInterfaceInitFunc) granite_widgets_date_picker_gtk_buildable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType granite_widgets_date_picker_type_id;
		granite_widgets_date_picker_type_id = g_type_register_static (gtk_entry_get_type (), "GraniteWidgetsDatePicker", &g_define_type_info, 0);
		g_type_add_interface_static (granite_widgets_date_picker_type_id, GTK_TYPE_BUILDABLE, &gtk_buildable_info);
		g_once_init_leave (&granite_widgets_date_picker_type_id__volatile, granite_widgets_date_picker_type_id);
	}
	return granite_widgets_date_picker_type_id__volatile;
}


static void _vala_granite_widgets_date_picker_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GraniteWidgetsDatePicker * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GRANITE_WIDGETS_TYPE_DATE_PICKER, GraniteWidgetsDatePicker);
	switch (property_id) {
		case GRANITE_WIDGETS_DATE_PICKER_FORMAT_PROPERTY:
		g_value_set_string (value, granite_widgets_date_picker_get_format (self));
		break;
		case GRANITE_WIDGETS_DATE_PICKER_DATE_PROPERTY:
		g_value_set_boxed (value, granite_widgets_date_picker_get_date (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_granite_widgets_date_picker_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GraniteWidgetsDatePicker * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GRANITE_WIDGETS_TYPE_DATE_PICKER, GraniteWidgetsDatePicker);
	switch (property_id) {
		case GRANITE_WIDGETS_DATE_PICKER_FORMAT_PROPERTY:
		granite_widgets_date_picker_set_format (self, g_value_get_string (value));
		break;
		case GRANITE_WIDGETS_DATE_PICKER_DATE_PROPERTY:
		granite_widgets_date_picker_set_date (self, g_value_get_boxed (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



