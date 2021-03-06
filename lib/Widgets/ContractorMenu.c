/* ContractorMenu.c generated by valac 0.36.7, the Vala compiler
 * generated from ContractorMenu.vala, do not modify */

/***
    Copyright (C) 2012-2013 Andrea Basso <andrea@elementaryos.org>

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
#include <stdlib.h>
#include <string.h>
#include <gee.h>


#define GRANITE_WIDGETS_TYPE_CONTRACTOR_MENU (granite_widgets_contractor_menu_get_type ())
#define GRANITE_WIDGETS_CONTRACTOR_MENU(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRANITE_WIDGETS_TYPE_CONTRACTOR_MENU, GraniteWidgetsContractorMenu))
#define GRANITE_WIDGETS_CONTRACTOR_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRANITE_WIDGETS_TYPE_CONTRACTOR_MENU, GraniteWidgetsContractorMenuClass))
#define GRANITE_WIDGETS_IS_CONTRACTOR_MENU(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRANITE_WIDGETS_TYPE_CONTRACTOR_MENU))
#define GRANITE_WIDGETS_IS_CONTRACTOR_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRANITE_WIDGETS_TYPE_CONTRACTOR_MENU))
#define GRANITE_WIDGETS_CONTRACTOR_MENU_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRANITE_WIDGETS_TYPE_CONTRACTOR_MENU, GraniteWidgetsContractorMenuClass))

typedef struct _GraniteWidgetsContractorMenu GraniteWidgetsContractorMenu;
typedef struct _GraniteWidgetsContractorMenuClass GraniteWidgetsContractorMenuClass;
typedef struct _GraniteWidgetsContractorMenuPrivate GraniteWidgetsContractorMenuPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _Block13Data Block13Data;
typedef struct _Block14Data Block14Data;
typedef struct _Block15Data Block15Data;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
enum  {
	GRANITE_WIDGETS_CONTRACTOR_MENU_CONTRACT_ACTIVATED_SIGNAL,
	GRANITE_WIDGETS_CONTRACTOR_MENU_NUM_SIGNALS
};
static guint granite_widgets_contractor_menu_signals[GRANITE_WIDGETS_CONTRACTOR_MENU_NUM_SIGNALS] = {0};

struct _GraniteWidgetsContractorMenu {
	GtkMenu parent_instance;
	GraniteWidgetsContractorMenuPrivate * priv;
};

struct _GraniteWidgetsContractorMenuClass {
	GtkMenuClass parent_class;
};

struct _GraniteWidgetsContractorMenuPrivate {
	GHashTable** contracts;
	gint contracts_length1;
	gint _contracts_size_;
	GeeHashMap* execs;
	gchar* filepath;
	gchar* filemime;
};

typedef void (*GraniteWidgetsContractorMenuContractCallback) (void* user_data);
struct _Block13Data {
	int _ref_count_;
	GraniteWidgetsContractorMenu* self;
	gchar* name;
	GraniteWidgetsContractorMenuContractCallback method;
	gpointer method_target;
};

struct _Block14Data {
	int _ref_count_;
	GraniteWidgetsContractorMenu* self;
	gchar** names;
	gint names_length1;
};

struct _Block15Data {
	int _ref_count_;
	GraniteWidgetsContractorMenu* self;
	GtkImageMenuItem* item;
};


static gpointer granite_widgets_contractor_menu_parent_class = NULL;

GType granite_widgets_contractor_menu_get_type (void) G_GNUC_CONST;
#define GRANITE_WIDGETS_CONTRACTOR_MENU_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GRANITE_WIDGETS_TYPE_CONTRACTOR_MENU, GraniteWidgetsContractorMenuPrivate))
enum  {
	GRANITE_WIDGETS_CONTRACTOR_MENU_0_PROPERTY
};
GraniteWidgetsContractorMenu* granite_widgets_contractor_menu_new (const gchar* filename, const gchar* mime);
GraniteWidgetsContractorMenu* granite_widgets_contractor_menu_construct (GType object_type, const gchar* filename, const gchar* mime);
static void granite_widgets_contractor_menu_load_items (GraniteWidgetsContractorMenu* self, const gchar* filename, const gchar* mime);
void granite_widgets_contractor_menu_add_item (GraniteWidgetsContractorMenu* self, const gchar* name, const gchar* icon_name, gint position, GraniteWidgetsContractorMenuContractCallback method, void* method_target, gboolean use_stock);
static Block13Data* block13_data_ref (Block13Data* _data13_);
static void block13_data_unref (void * _userdata_);
static void __lambda74_ (Block13Data* _data13_);
static void ___lambda74__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
void granite_widgets_contractor_menu_name_blacklist (GraniteWidgetsContractorMenu* self, gchar** names, int names_length1);
static Block14Data* block14_data_ref (Block14Data* _data14_);
static void block14_data_unref (void * _userdata_);
static void __lambda75_ (Block14Data* _data14_, GtkWidget* item);
static gboolean _vala_string_array_contains (gchar* * stack, int stack_length, gchar* needle);
static void ___lambda75__gtk_callback (GtkWidget* widget, gpointer self);
GHashTable** granite_services_contractor_get_contract (const gchar* uri, const gchar* mime, int* result_length1);
static Block15Data* block15_data_ref (Block15Data* _data15_);
static void block15_data_unref (void * _userdata_);
static void _____lambda73_ (Block15Data* _data15_);
static void ______lambda73__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
void granite_widgets_contractor_menu_update (GraniteWidgetsContractorMenu* self, const gchar* filename, const gchar* mime);
static void __lambda76_ (GraniteWidgetsContractorMenu* self, GtkWidget* w);
static void ___lambda76__gtk_callback (GtkWidget* widget, gpointer self);
static void granite_widgets_contractor_menu_finalize (GObject * obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


/**
     * Makes new Contractor Meu
     *
     * @param filename the filename of the file
     * @param mime the mime-type of the file
     */
GraniteWidgetsContractorMenu* granite_widgets_contractor_menu_construct (GType object_type, const gchar* filename, const gchar* mime) {
	GraniteWidgetsContractorMenu * self = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	const gchar* _tmp2_;
	gchar* _tmp3_;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	g_return_val_if_fail (filename != NULL, NULL);
	g_return_val_if_fail (mime != NULL, NULL);
	self = (GraniteWidgetsContractorMenu*) g_object_new (object_type, NULL);
	_tmp0_ = filename;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->filepath);
	self->priv->filepath = _tmp1_;
	_tmp2_ = mime;
	_tmp3_ = g_strdup (_tmp2_);
	_g_free0 (self->priv->filemime);
	self->priv->filemime = _tmp3_;
	_tmp4_ = filename;
	_tmp5_ = mime;
	granite_widgets_contractor_menu_load_items (self, _tmp4_, _tmp5_);
	return self;
}


GraniteWidgetsContractorMenu* granite_widgets_contractor_menu_new (const gchar* filename, const gchar* mime) {
	return granite_widgets_contractor_menu_construct (GRANITE_WIDGETS_TYPE_CONTRACTOR_MENU, filename, mime);
}


/**
     * Adds new item to Contractor Menu
     *
     * @param name name of menu item
     * @param icon_name the desired icon for menu item
     * @param position desired position of menu item
     * @param method method to be called when menu item is clicked
     * @param use_stock tells whether to use stock for menu item
     */
static Block13Data* block13_data_ref (Block13Data* _data13_) {
	g_atomic_int_inc (&_data13_->_ref_count_);
	return _data13_;
}


static void block13_data_unref (void * _userdata_) {
	Block13Data* _data13_;
	_data13_ = (Block13Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data13_->_ref_count_)) {
		GraniteWidgetsContractorMenu* self;
		self = _data13_->self;
		_g_free0 (_data13_->name);
		_g_object_unref0 (self);
		g_slice_free (Block13Data, _data13_);
	}
}


static void __lambda74_ (Block13Data* _data13_) {
	GraniteWidgetsContractorMenu* self;
	const gchar* _tmp0_;
	GraniteWidgetsContractorMenuContractCallback _tmp1_;
	void* _tmp1__target;
	self = _data13_->self;
	_tmp0_ = _data13_->name;
	g_signal_emit (self, granite_widgets_contractor_menu_signals[GRANITE_WIDGETS_CONTRACTOR_MENU_CONTRACT_ACTIVATED_SIGNAL], 0, _tmp0_);
	_tmp1_ = _data13_->method;
	_tmp1__target = _data13_->method_target;
	_tmp1_ (_tmp1__target);
}


static void ___lambda74__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda74_ (self);
}


void granite_widgets_contractor_menu_add_item (GraniteWidgetsContractorMenu* self, const gchar* name, const gchar* icon_name, gint position, GraniteWidgetsContractorMenuContractCallback method, void* method_target, gboolean use_stock) {
	Block13Data* _data13_;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	GraniteWidgetsContractorMenuContractCallback _tmp2_;
	void* _tmp2__target;
	GtkImageMenuItem* item = NULL;
	GtkImageMenuItem* _tmp3_;
	gboolean _tmp4_;
	GtkImage* image = NULL;
	const gchar* _tmp5_;
	GtkImage* _tmp6_;
	const gchar* _tmp7_;
	gint _tmp8_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (name != NULL);
	g_return_if_fail (icon_name != NULL);
	_data13_ = g_slice_new0 (Block13Data);
	_data13_->_ref_count_ = 1;
	_data13_->self = g_object_ref (self);
	_tmp0_ = name;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (_data13_->name);
	_data13_->name = _tmp1_;
	_tmp2_ = method;
	_tmp2__target = method_target;
	_data13_->method = _tmp2_;
	_data13_->method_target = _tmp2__target;
	_tmp3_ = (GtkImageMenuItem*) gtk_image_menu_item_new ();
	g_object_ref_sink (_tmp3_);
	item = _tmp3_;
	gtk_image_menu_item_set_always_show_image (item, TRUE);
	_tmp4_ = use_stock;
	gtk_image_menu_item_set_use_stock (item, _tmp4_);
	_tmp5_ = icon_name;
	_tmp6_ = (GtkImage*) gtk_image_new_from_icon_name (_tmp5_, GTK_ICON_SIZE_MENU);
	g_object_ref_sink (_tmp6_);
	image = _tmp6_;
	_tmp7_ = _data13_->name;
	gtk_menu_item_set_label ((GtkMenuItem*) item, _tmp7_);
	gtk_image_menu_item_set_image (item, (GtkWidget*) image);
	g_signal_connect_data ((GtkMenuItem*) item, "activate", (GCallback) ___lambda74__gtk_menu_item_activate, block13_data_ref (_data13_), (GClosureNotify) block13_data_unref, 0);
	_tmp8_ = position;
	gtk_menu_shell_insert ((GtkMenuShell*) self, (GtkWidget*) item, _tmp8_);
	gtk_widget_show ((GtkWidget*) item);
	_g_object_unref0 (image);
	_g_object_unref0 (item);
	block13_data_unref (_data13_);
	_data13_ = NULL;
}


/**
     * Deletes a group of menu items
     *
     * @param names of menu items to delete
     */
static Block14Data* block14_data_ref (Block14Data* _data14_) {
	g_atomic_int_inc (&_data14_->_ref_count_);
	return _data14_;
}


static void block14_data_unref (void * _userdata_) {
	Block14Data* _data14_;
	_data14_ = (Block14Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data14_->_ref_count_)) {
		GraniteWidgetsContractorMenu* self;
		self = _data14_->self;
		_g_object_unref0 (self);
		g_slice_free (Block14Data, _data14_);
	}
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


static void __lambda75_ (Block14Data* _data14_, GtkWidget* item) {
	GraniteWidgetsContractorMenu* self;
	GtkWidget* _tmp0_;
	const gchar* _tmp1_;
	gchar** _tmp2_;
	gint _tmp2__length1;
	self = _data14_->self;
	g_return_if_fail (item != NULL);
	_tmp0_ = item;
	_tmp1_ = gtk_menu_item_get_label (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, gtk_menu_item_get_type (), GtkMenuItem));
	_tmp2_ = _data14_->names;
	_tmp2__length1 = _data14_->names_length1;
	if (_vala_string_array_contains (_tmp2_, _tmp2__length1, _tmp1_)) {
		GtkWidget* _tmp3_;
		_tmp3_ = item;
		gtk_container_remove ((GtkContainer*) self, _tmp3_);
	}
}


static void ___lambda75__gtk_callback (GtkWidget* widget, gpointer self) {
	__lambda75_ (self, widget);
}


void granite_widgets_contractor_menu_name_blacklist (GraniteWidgetsContractorMenu* self, gchar** names, int names_length1) {
	Block14Data* _data14_;
	gchar** _tmp0_;
	gint _tmp0__length1;
	g_return_if_fail (self != NULL);
	_data14_ = g_slice_new0 (Block14Data);
	_data14_->_ref_count_ = 1;
	_data14_->self = g_object_ref (self);
	_tmp0_ = names;
	_tmp0__length1 = names_length1;
	_data14_->names = _tmp0_;
	_data14_->names_length1 = _tmp0__length1;
	gtk_container_foreach ((GtkContainer*) self, ___lambda75__gtk_callback, _data14_);
	block14_data_unref (_data14_);
	_data14_ = NULL;
}


static Block15Data* block15_data_ref (Block15Data* _data15_) {
	g_atomic_int_inc (&_data15_->_ref_count_);
	return _data15_;
}


static void block15_data_unref (void * _userdata_) {
	Block15Data* _data15_;
	_data15_ = (Block15Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data15_->_ref_count_)) {
		GraniteWidgetsContractorMenu* self;
		self = _data15_->self;
		_g_object_unref0 (_data15_->item);
		_g_object_unref0 (self);
		g_slice_free (Block15Data, _data15_);
	}
}


static void _____lambda73_ (Block15Data* _data15_) {
	GraniteWidgetsContractorMenu* self;
	GError * _inner_error_ = NULL;
	self = _data15_->self;
	{
		GeeHashMap* _tmp0_;
		GtkImageMenuItem* _tmp1_;
		const gchar* _tmp2_;
		gpointer _tmp3_;
		gchar* _tmp4_;
		_tmp0_ = self->priv->execs;
		_tmp1_ = _data15_->item;
		_tmp2_ = gtk_menu_item_get_label ((GtkMenuItem*) _tmp1_);
		_tmp3_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp0_, _tmp2_);
		_tmp4_ = (gchar*) _tmp3_;
		g_spawn_command_line_async (_tmp4_, &_inner_error_);
		_g_free0 (_tmp4_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch28_g_error;
		}
	}
	goto __finally28;
	__catch28_g_error:
	{
		GError* e = NULL;
		const gchar* _tmp5_;
		e = _inner_error_;
		_inner_error_ = NULL;
		_tmp5_ = e->message;
		g_error ("ContractorMenu.vala:108: %s", _tmp5_);
		_g_error_free0 (e);
	}
	__finally28:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


static void ______lambda73__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	_____lambda73_ (self);
}


static void granite_widgets_contractor_menu_load_items (GraniteWidgetsContractorMenu* self, const gchar* filename, const gchar* mime) {
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	gint _tmp2_;
	GHashTable** _tmp3_;
	GeeHashMap* _tmp4_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (filename != NULL);
	g_return_if_fail (mime != NULL);
	_tmp0_ = filename;
	_tmp1_ = mime;
	_tmp3_ = granite_services_contractor_get_contract (_tmp0_, _tmp1_, &_tmp2_);
	self->priv->contracts = (_vala_array_free (self->priv->contracts, self->priv->contracts_length1, (GDestroyNotify) g_hash_table_unref), NULL);
	self->priv->contracts = _tmp3_;
	self->priv->contracts_length1 = _tmp2_;
	self->priv->_contracts_size_ = self->priv->contracts_length1;
	_tmp4_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->execs);
	self->priv->execs = _tmp4_;
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp5_ = FALSE;
			_tmp5_ = TRUE;
			while (TRUE) {
				Block15Data* _data15_;
				gint _tmp7_;
				GHashTable** _tmp8_;
				gint _tmp8__length1;
				GeeHashMap* _tmp9_;
				GHashTable** _tmp10_;
				gint _tmp10__length1;
				gint _tmp11_;
				GHashTable* _tmp12_;
				gconstpointer _tmp13_;
				GHashTable** _tmp14_;
				gint _tmp14__length1;
				gint _tmp15_;
				GHashTable* _tmp16_;
				gconstpointer _tmp17_;
				GtkImageMenuItem* _tmp18_;
				GtkImageMenuItem* _tmp19_;
				GtkImage* image = NULL;
				GHashTable** _tmp20_;
				gint _tmp20__length1;
				gint _tmp21_;
				GHashTable* _tmp22_;
				gconstpointer _tmp23_;
				GtkImage* _tmp24_;
				GtkImageMenuItem* _tmp25_;
				GHashTable** _tmp26_;
				gint _tmp26__length1;
				gint _tmp27_;
				GHashTable* _tmp28_;
				gconstpointer _tmp29_;
				GtkImageMenuItem* _tmp30_;
				GtkImage* _tmp31_;
				GtkImageMenuItem* _tmp32_;
				GtkImageMenuItem* _tmp33_;
				GtkImageMenuItem* _tmp34_;
				_data15_ = g_slice_new0 (Block15Data);
				_data15_->_ref_count_ = 1;
				_data15_->self = g_object_ref (self);
				if (!_tmp5_) {
					gint _tmp6_;
					_tmp6_ = i;
					i = _tmp6_ + 1;
				}
				_tmp5_ = FALSE;
				_tmp7_ = i;
				_tmp8_ = self->priv->contracts;
				_tmp8__length1 = self->priv->contracts_length1;
				if (!(_tmp7_ < _tmp8__length1)) {
					block15_data_unref (_data15_);
					_data15_ = NULL;
					break;
				}
				_tmp9_ = self->priv->execs;
				_tmp10_ = self->priv->contracts;
				_tmp10__length1 = self->priv->contracts_length1;
				_tmp11_ = i;
				_tmp12_ = _tmp10_[_tmp11_];
				_tmp13_ = g_hash_table_lookup (_tmp12_, "Name");
				_tmp14_ = self->priv->contracts;
				_tmp14__length1 = self->priv->contracts_length1;
				_tmp15_ = i;
				_tmp16_ = _tmp14_[_tmp15_];
				_tmp17_ = g_hash_table_lookup (_tmp16_, "Exec");
				gee_abstract_map_set ((GeeAbstractMap*) _tmp9_, (const gchar*) _tmp13_, (const gchar*) _tmp17_);
				_tmp18_ = (GtkImageMenuItem*) gtk_image_menu_item_new ();
				g_object_ref_sink (_tmp18_);
				_data15_->item = _tmp18_;
				_tmp19_ = _data15_->item;
				gtk_image_menu_item_set_always_show_image (_tmp19_, TRUE);
				_tmp20_ = self->priv->contracts;
				_tmp20__length1 = self->priv->contracts_length1;
				_tmp21_ = i;
				_tmp22_ = _tmp20_[_tmp21_];
				_tmp23_ = g_hash_table_lookup (_tmp22_, "IconName");
				_tmp24_ = (GtkImage*) gtk_image_new_from_icon_name ((const gchar*) _tmp23_, GTK_ICON_SIZE_MENU);
				g_object_ref_sink (_tmp24_);
				image = _tmp24_;
				_tmp25_ = _data15_->item;
				_tmp26_ = self->priv->contracts;
				_tmp26__length1 = self->priv->contracts_length1;
				_tmp27_ = i;
				_tmp28_ = _tmp26_[_tmp27_];
				_tmp29_ = g_hash_table_lookup (_tmp28_, "Name");
				gtk_menu_item_set_label ((GtkMenuItem*) _tmp25_, (const gchar*) _tmp29_);
				_tmp30_ = _data15_->item;
				_tmp31_ = image;
				gtk_image_menu_item_set_image (_tmp30_, (GtkWidget*) _tmp31_);
				_tmp32_ = _data15_->item;
				g_signal_connect_data ((GtkMenuItem*) _tmp32_, "activate", (GCallback) ______lambda73__gtk_menu_item_activate, block15_data_ref (_data15_), (GClosureNotify) block15_data_unref, 0);
				_tmp33_ = _data15_->item;
				gtk_menu_shell_append ((GtkMenuShell*) self, (GtkWidget*) ((GtkMenuItem*) _tmp33_));
				_tmp34_ = _data15_->item;
				gtk_widget_show_all ((GtkWidget*) _tmp34_);
				_g_object_unref0 (image);
				block15_data_unref (_data15_);
				_data15_ = NULL;
			}
		}
	}
}


/**
     * Updates Contractor menu items
     *
     * @param filename the filename of the file
     * @param mime the mime-type of the file
     */
static void __lambda76_ (GraniteWidgetsContractorMenu* self, GtkWidget* w) {
	GtkWidget* _tmp0_;
	g_return_if_fail (w != NULL);
	_tmp0_ = w;
	gtk_container_remove ((GtkContainer*) self, _tmp0_);
}


static void ___lambda76__gtk_callback (GtkWidget* widget, gpointer self) {
	__lambda76_ ((GraniteWidgetsContractorMenu*) self, widget);
}


void granite_widgets_contractor_menu_update (GraniteWidgetsContractorMenu* self, const gchar* filename, const gchar* mime) {
	gchar* fn = NULL;
	gchar* _tmp0_;
	gchar* mm = NULL;
	gchar* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp9_;
	const gchar* _tmp16_;
	const gchar* _tmp17_;
	g_return_if_fail (self != NULL);
	gtk_container_foreach ((GtkContainer*) self, ___lambda76__gtk_callback, self);
	_tmp0_ = g_strdup ("");
	fn = _tmp0_;
	_tmp1_ = g_strdup ("");
	mm = _tmp1_;
	_tmp2_ = filename;
	if (_tmp2_ != NULL) {
		const gchar* _tmp3_;
		gchar* _tmp4_;
		const gchar* _tmp5_;
		gchar* _tmp6_;
		_tmp3_ = filename;
		_tmp4_ = g_strdup (_tmp3_);
		_g_free0 (fn);
		fn = _tmp4_;
		_tmp5_ = filename;
		_tmp6_ = g_strdup (_tmp5_);
		_g_free0 (self->priv->filepath);
		self->priv->filepath = _tmp6_;
	} else {
		const gchar* _tmp7_;
		gchar* _tmp8_;
		_tmp7_ = self->priv->filepath;
		_tmp8_ = g_strdup (_tmp7_);
		_g_free0 (fn);
		fn = _tmp8_;
	}
	_tmp9_ = mime;
	if (_tmp9_ != NULL) {
		const gchar* _tmp10_;
		gchar* _tmp11_;
		const gchar* _tmp12_;
		gchar* _tmp13_;
		_tmp10_ = mime;
		_tmp11_ = g_strdup (_tmp10_);
		_g_free0 (mm);
		mm = _tmp11_;
		_tmp12_ = mime;
		_tmp13_ = g_strdup (_tmp12_);
		_g_free0 (self->priv->filemime);
		self->priv->filemime = _tmp13_;
	} else {
		const gchar* _tmp14_;
		gchar* _tmp15_;
		_tmp14_ = self->priv->filemime;
		_tmp15_ = g_strdup (_tmp14_);
		_g_free0 (mm);
		mm = _tmp15_;
	}
	_tmp16_ = fn;
	_tmp17_ = mm;
	granite_widgets_contractor_menu_load_items (self, _tmp16_, _tmp17_);
	_g_free0 (mm);
	_g_free0 (fn);
}


static void granite_widgets_contractor_menu_class_init (GraniteWidgetsContractorMenuClass * klass) {
	granite_widgets_contractor_menu_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GraniteWidgetsContractorMenuPrivate));
	G_OBJECT_CLASS (klass)->finalize = granite_widgets_contractor_menu_finalize;
	/**
	     * Passes when contract is clicked
	     */
	granite_widgets_contractor_menu_signals[GRANITE_WIDGETS_CONTRACTOR_MENU_CONTRACT_ACTIVATED_SIGNAL] = g_signal_new ("contract-activated", GRANITE_WIDGETS_TYPE_CONTRACTOR_MENU, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__STRING, G_TYPE_NONE, 1, G_TYPE_STRING);
}


static void granite_widgets_contractor_menu_instance_init (GraniteWidgetsContractorMenu * self) {
	self->priv = GRANITE_WIDGETS_CONTRACTOR_MENU_GET_PRIVATE (self);
}


static void granite_widgets_contractor_menu_finalize (GObject * obj) {
	GraniteWidgetsContractorMenu * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRANITE_WIDGETS_TYPE_CONTRACTOR_MENU, GraniteWidgetsContractorMenu);
	self->priv->contracts = (_vala_array_free (self->priv->contracts, self->priv->contracts_length1, (GDestroyNotify) g_hash_table_unref), NULL);
	_g_object_unref0 (self->priv->execs);
	_g_free0 (self->priv->filepath);
	_g_free0 (self->priv->filemime);
	G_OBJECT_CLASS (granite_widgets_contractor_menu_parent_class)->finalize (obj);
}


/**
 * This class provides a simple menu for managing Contractor.
 * It uses a long-obsolete and unused revision of Contractor API and will not
 * work with stable releases of Contractor.
 */
GType granite_widgets_contractor_menu_get_type (void) {
	static volatile gsize granite_widgets_contractor_menu_type_id__volatile = 0;
	if (g_once_init_enter (&granite_widgets_contractor_menu_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GraniteWidgetsContractorMenuClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) granite_widgets_contractor_menu_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GraniteWidgetsContractorMenu), 0, (GInstanceInitFunc) granite_widgets_contractor_menu_instance_init, NULL };
		GType granite_widgets_contractor_menu_type_id;
		granite_widgets_contractor_menu_type_id = g_type_register_static (gtk_menu_get_type (), "GraniteWidgetsContractorMenu", &g_define_type_info, 0);
		g_once_init_leave (&granite_widgets_contractor_menu_type_id__volatile, granite_widgets_contractor_menu_type_id);
	}
	return granite_widgets_contractor_menu_type_id__volatile;
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



