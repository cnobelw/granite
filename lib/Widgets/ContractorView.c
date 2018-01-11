/* ContractorView.c generated by valac 0.36.7, the Vala compiler
 * generated from ContractorView.vala, do not modify */

/***
    Copyright (C) 2011-2013 Tom Beckmann <tom@elementaryos.org>

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
#include <gee.h>
#include <stdlib.h>
#include <string.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <glib/gi18n-lib.h>


#define GRANITE_WIDGETS_TYPE_CONTRACTOR_VIEW (granite_widgets_contractor_view_get_type ())
#define GRANITE_WIDGETS_CONTRACTOR_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRANITE_WIDGETS_TYPE_CONTRACTOR_VIEW, GraniteWidgetsContractorView))
#define GRANITE_WIDGETS_CONTRACTOR_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRANITE_WIDGETS_TYPE_CONTRACTOR_VIEW, GraniteWidgetsContractorViewClass))
#define GRANITE_WIDGETS_IS_CONTRACTOR_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRANITE_WIDGETS_TYPE_CONTRACTOR_VIEW))
#define GRANITE_WIDGETS_IS_CONTRACTOR_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRANITE_WIDGETS_TYPE_CONTRACTOR_VIEW))
#define GRANITE_WIDGETS_CONTRACTOR_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRANITE_WIDGETS_TYPE_CONTRACTOR_VIEW, GraniteWidgetsContractorViewClass))

typedef struct _GraniteWidgetsContractorView GraniteWidgetsContractorView;
typedef struct _GraniteWidgetsContractorViewClass GraniteWidgetsContractorViewClass;
typedef struct _GraniteWidgetsContractorViewPrivate GraniteWidgetsContractorViewPrivate;

#define GRANITE_WIDGETS_CONTRACTOR_VIEW_TYPE_DELEGATE_WRAPPER (granite_widgets_contractor_view_delegate_wrapper_get_type ())
typedef struct _GraniteWidgetsContractorViewDelegateWrapper GraniteWidgetsContractorViewDelegateWrapper;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _granite_widgets_contractor_view_delegate_wrapper_free0(var) ((var == NULL) ? NULL : (var = (granite_widgets_contractor_view_delegate_wrapper_free (var), NULL)))
#define _gtk_tree_path_free0(var) ((var == NULL) ? NULL : (var = (gtk_tree_path_free (var), NULL)))
enum  {
	GRANITE_WIDGETS_CONTRACTOR_VIEW_EXECUTED_SIGNAL,
	GRANITE_WIDGETS_CONTRACTOR_VIEW_NUM_SIGNALS
};
static guint granite_widgets_contractor_view_signals[GRANITE_WIDGETS_CONTRACTOR_VIEW_NUM_SIGNALS] = {0};

struct _GraniteWidgetsContractorView {
	GtkTreeView parent_instance;
	GraniteWidgetsContractorViewPrivate * priv;
	gboolean contractor_available;
};

struct _GraniteWidgetsContractorViewClass {
	GtkTreeViewClass parent_class;
};

typedef void (*GraniteWidgetsContractorViewContractCallback) (void* user_data);
struct _GraniteWidgetsContractorViewDelegateWrapper {
	GraniteWidgetsContractorViewContractCallback method;
	gpointer method_target;
};

struct _GraniteWidgetsContractorViewPrivate {
	GeeHashMap* outsiders;
	gint* blacklisted_pos;
	gint blacklisted_pos_length1;
	gint _blacklisted_pos_size_;
	GtkListStore* list;
	GHashTable** contracts;
	gint contracts_length1;
	gint _contracts_size_;
};


static gpointer granite_widgets_contractor_view_parent_class = NULL;

GType granite_widgets_contractor_view_get_type (void) G_GNUC_CONST;
static GType granite_widgets_contractor_view_delegate_wrapper_get_type (void) G_GNUC_CONST G_GNUC_UNUSED;
static GraniteWidgetsContractorViewDelegateWrapper* granite_widgets_contractor_view_delegate_wrapper_dup (const GraniteWidgetsContractorViewDelegateWrapper* self);
static void granite_widgets_contractor_view_delegate_wrapper_free (GraniteWidgetsContractorViewDelegateWrapper* self);
#define GRANITE_WIDGETS_CONTRACTOR_VIEW_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GRANITE_WIDGETS_TYPE_CONTRACTOR_VIEW, GraniteWidgetsContractorViewPrivate))
enum  {
	GRANITE_WIDGETS_CONTRACTOR_VIEW_0_PROPERTY,
	GRANITE_WIDGETS_CONTRACTOR_VIEW_SELECTED_PROPERTY
};
GraniteWidgetsContractorView* granite_widgets_contractor_view_new (const gchar* filename, const gchar* mime, gint icon_size, gboolean show_contract_name);
GraniteWidgetsContractorView* granite_widgets_contractor_view_construct (GType object_type, const gchar* filename, const gchar* mime, gint icon_size, gboolean show_contract_name);
static void __lambda72_ (GraniteWidgetsContractorView* self);
void granite_widgets_contractor_view_run_selected (GraniteWidgetsContractorView* self);
static void ___lambda72__gtk_tree_view_row_activated (GtkTreeView* _sender, GtkTreePath* path, GtkTreeViewColumn* column, gpointer self);
GHashTable** granite_services_contractor_get_contract (const gchar* uri, const gchar* mime, int* result_length1);
void granite_widgets_contractor_view_set_selected (GraniteWidgetsContractorView* self, gint value);
void granite_widgets_contractor_view_add_item (GraniteWidgetsContractorView* self, const gchar* name, const gchar* desc, const gchar* icon_name, gint icon_size, gint position, GraniteWidgetsContractorViewContractCallback method, void* method_target);
void granite_widgets_contractor_view_name_blacklist (GraniteWidgetsContractorView* self, gchar** names, int names_length1);
static gboolean _vala_string_array_contains (gchar* * stack, int stack_length, gchar* needle);
static void _vala_array_add2 (gint* * array, int* length, int* size, gint value);
gint granite_widgets_contractor_view_get_selected (GraniteWidgetsContractorView* self);
static void granite_widgets_contractor_view_finalize (GObject * obj);
static void _vala_granite_widgets_contractor_view_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_granite_widgets_contractor_view_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


/**
     * Create the default ContractorView
     *
     * @param filename the file
     * @param mime the mimetype of the file
     * @param icon_size the size of the icon in pixel
     * @param show_contract_name show the name of the contract in the list
     */
static void __lambda72_ (GraniteWidgetsContractorView* self) {
	granite_widgets_contractor_view_run_selected (self);
	g_signal_emit (self, granite_widgets_contractor_view_signals[GRANITE_WIDGETS_CONTRACTOR_VIEW_EXECUTED_SIGNAL], 0);
}


static void ___lambda72__gtk_tree_view_row_activated (GtkTreeView* _sender, GtkTreePath* path, GtkTreeViewColumn* column, gpointer self) {
	__lambda72_ ((GraniteWidgetsContractorView*) self);
}


GraniteWidgetsContractorView* granite_widgets_contractor_view_construct (GType object_type, const gchar* filename, const gchar* mime, gint icon_size, gboolean show_contract_name) {
	GraniteWidgetsContractorView * self = NULL;
	GtkListStore* _tmp0_;
	GeeHashMap* _tmp1_;
	GtkListStore* _tmp2_;
	GtkCellRendererPixbuf* cell1 = NULL;
	GtkCellRendererPixbuf* _tmp3_;
	GtkCellRendererPixbuf* _tmp4_;
	GtkCellRendererPixbuf* _tmp5_;
	GtkCellRendererText* cell2 = NULL;
	GtkCellRendererText* _tmp6_;
	GtkCellRendererText* _tmp7_;
	GtkCellRendererText* _tmp8_;
	const gchar* _tmp9_;
	const gchar* _tmp10_;
	gint _tmp11_;
	GHashTable** _tmp12_;
	gboolean _tmp13_ = FALSE;
	GHashTable** _tmp14_;
	gint _tmp14__length1;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (filename != NULL, NULL);
	g_return_val_if_fail (mime != NULL, NULL);
	self = (GraniteWidgetsContractorView*) g_object_new (object_type, NULL);
	_tmp0_ = gtk_list_store_new (2, gdk_pixbuf_get_type (), G_TYPE_STRING, -1);
	_g_object_unref0 (self->priv->list);
	self->priv->list = _tmp0_;
	_tmp1_ = gee_hash_map_new (G_TYPE_INT, NULL, NULL, GRANITE_WIDGETS_CONTRACTOR_VIEW_TYPE_DELEGATE_WRAPPER, (GBoxedCopyFunc) granite_widgets_contractor_view_delegate_wrapper_dup, (GDestroyNotify) granite_widgets_contractor_view_delegate_wrapper_free, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->outsiders);
	self->priv->outsiders = _tmp1_;
	_tmp2_ = self->priv->list;
	gtk_tree_view_set_model ((GtkTreeView*) self, (GtkTreeModel*) _tmp2_);
	gtk_tree_view_set_headers_visible ((GtkTreeView*) self, FALSE);
	gtk_widget_set_hexpand ((GtkWidget*) self, TRUE);
	g_signal_connect_object ((GtkTreeView*) self, "row-activated", (GCallback) ___lambda72__gtk_tree_view_row_activated, self, 0);
	_tmp3_ = (GtkCellRendererPixbuf*) gtk_cell_renderer_pixbuf_new ();
	g_object_ref_sink (_tmp3_);
	cell1 = _tmp3_;
	_tmp4_ = cell1;
	gtk_cell_renderer_set_padding ((GtkCellRenderer*) _tmp4_, 5, 8);
	_tmp5_ = cell1;
	gtk_tree_view_insert_column_with_attributes ((GtkTreeView*) self, -1, "", (GtkCellRenderer*) _tmp5_, "pixbuf", 0, NULL);
	_tmp6_ = (GtkCellRendererText*) gtk_cell_renderer_text_new ();
	g_object_ref_sink (_tmp6_);
	cell2 = _tmp6_;
	_tmp7_ = cell2;
	gtk_cell_renderer_set_padding ((GtkCellRenderer*) _tmp7_, 2, 8);
	_tmp8_ = cell2;
	gtk_tree_view_insert_column_with_attributes ((GtkTreeView*) self, -1, "", (GtkCellRenderer*) _tmp8_, "markup", 1, NULL);
	_tmp9_ = filename;
	_tmp10_ = mime;
	_tmp12_ = granite_services_contractor_get_contract (_tmp9_, _tmp10_, &_tmp11_);
	self->priv->contracts = (_vala_array_free (self->priv->contracts, self->priv->contracts_length1, (GDestroyNotify) g_hash_table_unref), NULL);
	self->priv->contracts = _tmp12_;
	self->priv->contracts_length1 = _tmp11_;
	self->priv->_contracts_size_ = self->priv->contracts_length1;
	_tmp14_ = self->priv->contracts;
	_tmp14__length1 = self->priv->contracts_length1;
	if (_tmp14_ == NULL) {
		_tmp13_ = TRUE;
	} else {
		GHashTable** _tmp15_;
		gint _tmp15__length1;
		_tmp15_ = self->priv->contracts;
		_tmp15__length1 = self->priv->contracts_length1;
		_tmp13_ = _tmp15__length1 == 0;
	}
	if (_tmp13_) {
		GtkTreeIter it = {0};
		GtkListStore* _tmp16_;
		GtkTreeIter _tmp17_ = {0};
		gboolean contractor_installed = FALSE;
		GHashTable** _tmp18_;
		gint _tmp18__length1;
		const gchar* _tmp19_ = NULL;
		gboolean _tmp20_;
		gchar* message = NULL;
		gchar* _tmp21_;
		g_warning ("ContractorView.vala:100: You should install contractor (or no contract" \
"s found for this mime).\n");
		self->contractor_available = FALSE;
		_tmp16_ = self->priv->list;
		gtk_list_store_append (_tmp16_, &_tmp17_);
		it = _tmp17_;
		_tmp18_ = self->priv->contracts;
		_tmp18__length1 = self->priv->contracts_length1;
		contractor_installed = _tmp18_ == NULL;
		_tmp20_ = contractor_installed;
		if (_tmp20_) {
			_tmp19_ = _ ("Could not contact Contractor. You may need to install it");
		} else {
			_tmp19_ = _ ("No action found for this file");
		}
		_tmp21_ = g_strdup (_tmp19_);
		message = _tmp21_;
		{
			const gchar* _tmp22_ = NULL;
			gboolean _tmp23_;
			GdkPixbuf* icon = NULL;
			GtkIconTheme* _tmp24_;
			gint _tmp25_;
			GdkPixbuf* _tmp26_;
			GtkListStore* _tmp27_;
			GtkTreeIter _tmp28_;
			GdkPixbuf* _tmp29_;
			const gchar* _tmp30_;
			_tmp23_ = contractor_installed;
			if (_tmp23_) {
				_tmp22_ = "dialog-error";
			} else {
				_tmp22_ = "dialog-information";
			}
			_tmp24_ = gtk_icon_theme_get_default ();
			_tmp25_ = icon_size;
			_tmp26_ = gtk_icon_theme_load_icon (_tmp24_, _tmp22_, _tmp25_, 0, &_inner_error_);
			icon = _tmp26_;
			if (G_UNLIKELY (_inner_error_ != NULL)) {
				goto __catch24_g_error;
			}
			_tmp27_ = self->priv->list;
			_tmp28_ = it;
			_tmp29_ = icon;
			_tmp30_ = message;
			gtk_list_store_set (_tmp27_, &_tmp28_, 0, _tmp29_, 1, _tmp30_, -1);
			_g_object_unref0 (icon);
		}
		goto __finally24;
		__catch24_g_error:
		{
			GError* e = NULL;
			GError* _tmp31_;
			const gchar* _tmp32_;
			e = _inner_error_;
			_inner_error_ = NULL;
			_tmp31_ = e;
			_tmp32_ = _tmp31_->message;
			g_warning ("ContractorView.vala:114: %s\n", _tmp32_);
			_g_error_free0 (e);
		}
		__finally24:
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			_g_free0 (message);
			_g_object_unref0 (cell2);
			_g_object_unref0 (cell1);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		gtk_widget_set_sensitive ((GtkWidget*) self, FALSE);
		_g_free0 (message);
	} else {
		self->contractor_available = TRUE;
		{
			gint i = 0;
			i = 0;
			{
				gboolean _tmp33_ = FALSE;
				_tmp33_ = TRUE;
				while (TRUE) {
					gint _tmp35_;
					GHashTable** _tmp36_;
					gint _tmp36__length1;
					GtkTreeIter it = {0};
					GtkListStore* _tmp37_;
					GtkTreeIter _tmp38_ = {0};
					gchar* text = NULL;
					GHashTable** _tmp39_;
					gint _tmp39__length1;
					gint _tmp40_;
					GHashTable* _tmp41_;
					gconstpointer _tmp42_;
					gchar* _tmp43_;
					gboolean _tmp44_;
					if (!_tmp33_) {
						gint _tmp34_;
						_tmp34_ = i;
						i = _tmp34_ + 1;
					}
					_tmp33_ = FALSE;
					_tmp35_ = i;
					_tmp36_ = self->priv->contracts;
					_tmp36__length1 = self->priv->contracts_length1;
					if (!(_tmp35_ < _tmp36__length1)) {
						break;
					}
					_tmp37_ = self->priv->list;
					gtk_list_store_append (_tmp37_, &_tmp38_);
					it = _tmp38_;
					_tmp39_ = self->priv->contracts;
					_tmp39__length1 = self->priv->contracts_length1;
					_tmp40_ = i;
					_tmp41_ = _tmp39_[_tmp40_];
					_tmp42_ = g_hash_table_lookup (_tmp41_, "Description");
					_tmp43_ = g_strdup ((const gchar*) _tmp42_);
					text = _tmp43_;
					_tmp44_ = show_contract_name;
					if (_tmp44_) {
						GHashTable** _tmp45_;
						gint _tmp45__length1;
						gint _tmp46_;
						GHashTable* _tmp47_;
						gconstpointer _tmp48_;
						gchar* _tmp49_;
						gchar* _tmp50_;
						gchar* _tmp51_;
						gchar* _tmp52_;
						const gchar* _tmp53_;
						gchar* _tmp54_;
						_tmp45_ = self->priv->contracts;
						_tmp45__length1 = self->priv->contracts_length1;
						_tmp46_ = i;
						_tmp47_ = _tmp45_[_tmp46_];
						_tmp48_ = g_hash_table_lookup (_tmp47_, "Name");
						_tmp49_ = g_strconcat ("<b>", (const gchar*) _tmp48_, NULL);
						_tmp50_ = _tmp49_;
						_tmp51_ = g_strconcat (_tmp50_, "</b>\n", NULL);
						_tmp52_ = _tmp51_;
						_tmp53_ = text;
						_tmp54_ = g_strconcat (_tmp52_, _tmp53_, NULL);
						_g_free0 (text);
						text = _tmp54_;
						_g_free0 (_tmp52_);
						_g_free0 (_tmp50_);
					}
					{
						GdkPixbuf* _tmp55_ = NULL;
						GtkIconTheme* _tmp56_;
						GHashTable** _tmp57_;
						gint _tmp57__length1;
						gint _tmp58_;
						GHashTable* _tmp59_;
						gconstpointer _tmp60_;
						gint _tmp61_;
						GdkPixbuf* _tmp62_;
						GtkListStore* _tmp63_;
						GtkTreeIter _tmp64_;
						const gchar* _tmp65_;
						_tmp56_ = gtk_icon_theme_get_default ();
						_tmp57_ = self->priv->contracts;
						_tmp57__length1 = self->priv->contracts_length1;
						_tmp58_ = i;
						_tmp59_ = _tmp57_[_tmp58_];
						_tmp60_ = g_hash_table_lookup (_tmp59_, "IconName");
						_tmp61_ = icon_size;
						_tmp62_ = gtk_icon_theme_load_icon (_tmp56_, (const gchar*) _tmp60_, _tmp61_, 0, &_inner_error_);
						_tmp55_ = _tmp62_;
						if (G_UNLIKELY (_inner_error_ != NULL)) {
							goto __catch25_g_error;
						}
						_tmp63_ = self->priv->list;
						_tmp64_ = it;
						_tmp65_ = text;
						gtk_list_store_set (_tmp63_, &_tmp64_, 0, _tmp55_, 1, _tmp65_, -1);
						_g_object_unref0 (_tmp55_);
					}
					goto __finally25;
					__catch25_g_error:
					{
						GError* e = NULL;
						GError* _tmp66_;
						const gchar* _tmp67_;
						e = _inner_error_;
						_inner_error_ = NULL;
						_tmp66_ = e;
						_tmp67_ = _tmp66_->message;
						g_warning ("ContractorView.vala:133: %s", _tmp67_);
						_g_error_free0 (e);
					}
					__finally25:
					if (G_UNLIKELY (_inner_error_ != NULL)) {
						_g_free0 (text);
						_g_object_unref0 (cell2);
						_g_object_unref0 (cell1);
						g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
						g_clear_error (&_inner_error_);
						return NULL;
					}
					_g_free0 (text);
				}
			}
		}
		granite_widgets_contractor_view_set_selected (self, 0);
	}
	_g_object_unref0 (cell2);
	_g_object_unref0 (cell1);
	return self;
}


GraniteWidgetsContractorView* granite_widgets_contractor_view_new (const gchar* filename, const gchar* mime, gint icon_size, gboolean show_contract_name) {
	return granite_widgets_contractor_view_construct (GRANITE_WIDGETS_TYPE_CONTRACTOR_VIEW, filename, mime, icon_size, show_contract_name);
}


/**
     * A method to add items to the tree
     *
     * @param name the name
     * @param desc the description
     * @param icon_name the name of the icon to show
     * @param icon_size the size of the icon in pixel
     * @param position the posion the item will be inserted at (first position  is 0)
     * @param method a general method containing all the methods that should be called when the item is activated
     *        (must return void and mustn't have any parameter)
     */
void granite_widgets_contractor_view_add_item (GraniteWidgetsContractorView* self, const gchar* name, const gchar* desc, const gchar* icon_name, gint icon_size, gint position, GraniteWidgetsContractorViewContractCallback method, void* method_target) {
	GtkTreeIter it = {0};
	GtkListStore* _tmp0_;
	gint _tmp1_;
	GtkTreeIter _tmp2_ = {0};
	gchar* text = NULL;
	const gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	gchar* _tmp6_;
	gchar* _tmp7_;
	const gchar* _tmp8_;
	gchar* _tmp9_;
	gchar* _tmp10_;
	GraniteWidgetsContractorViewDelegateWrapper wr = {0};
	GraniteWidgetsContractorViewContractCallback _tmp19_;
	void* _tmp19__target;
	GraniteWidgetsContractorViewDelegateWrapper _tmp20_ = {0};
	GeeHashMap* _tmp21_;
	gint _tmp22_;
	GraniteWidgetsContractorViewDelegateWrapper _tmp23_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (name != NULL);
	g_return_if_fail (desc != NULL);
	g_return_if_fail (icon_name != NULL);
	_tmp0_ = self->priv->list;
	_tmp1_ = position;
	gtk_list_store_insert (_tmp0_, &_tmp2_, _tmp1_);
	it = _tmp2_;
	_tmp3_ = name;
	_tmp4_ = g_strconcat ("<b>", _tmp3_, NULL);
	_tmp5_ = _tmp4_;
	_tmp6_ = g_strconcat (_tmp5_, "</b>\n", NULL);
	_tmp7_ = _tmp6_;
	_tmp8_ = desc;
	_tmp9_ = g_strconcat (_tmp7_, _tmp8_, NULL);
	_tmp10_ = _tmp9_;
	_g_free0 (_tmp7_);
	_g_free0 (_tmp5_);
	text = _tmp10_;
	{
		GdkPixbuf* _tmp11_ = NULL;
		GtkIconTheme* _tmp12_;
		const gchar* _tmp13_;
		gint _tmp14_;
		GdkPixbuf* _tmp15_;
		GtkListStore* _tmp16_;
		GtkTreeIter _tmp17_;
		_tmp12_ = gtk_icon_theme_get_default ();
		_tmp13_ = icon_name;
		_tmp14_ = icon_size;
		_tmp15_ = gtk_icon_theme_load_icon (_tmp12_, _tmp13_, _tmp14_, 0, &_inner_error_);
		_tmp11_ = _tmp15_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch26_g_error;
		}
		_tmp16_ = self->priv->list;
		_tmp17_ = it;
		gtk_list_store_set (_tmp16_, &_tmp17_, 0, _tmp11_, 1, text, -1);
		_g_object_unref0 (_tmp11_);
	}
	goto __finally26;
	__catch26_g_error:
	{
		GError* e = NULL;
		const gchar* _tmp18_;
		e = _inner_error_;
		_inner_error_ = NULL;
		_tmp18_ = e->message;
		g_error ("ContractorView.vala:160: %s", _tmp18_);
		_g_error_free0 (e);
	}
	__finally26:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		_g_free0 (text);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	_tmp19_ = method;
	_tmp19__target = method_target;
	_tmp20_.method = _tmp19_;
	_tmp20_.method_target = _tmp19__target;
	wr = _tmp20_;
	_tmp21_ = self->priv->outsiders;
	_tmp22_ = position;
	_tmp23_ = wr;
	gee_abstract_map_set ((GeeAbstractMap*) _tmp21_, (gpointer) ((gintptr) _tmp22_), &_tmp23_);
	granite_widgets_contractor_view_set_selected (self, 0);
	_g_free0 (text);
}


static gchar* string_slice (const gchar* self, glong start, glong end) {
	gchar* result = NULL;
	glong string_length = 0L;
	gint _tmp0_;
	gint _tmp1_;
	glong _tmp2_;
	glong _tmp5_;
	gboolean _tmp8_ = FALSE;
	glong _tmp9_;
	gboolean _tmp12_ = FALSE;
	glong _tmp13_;
	glong _tmp16_;
	glong _tmp17_;
	glong _tmp18_;
	glong _tmp19_;
	glong _tmp20_;
	gchar* _tmp21_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = strlen (self);
	_tmp1_ = _tmp0_;
	string_length = (glong) _tmp1_;
	_tmp2_ = start;
	if (_tmp2_ < ((glong) 0)) {
		glong _tmp3_;
		glong _tmp4_;
		_tmp3_ = string_length;
		_tmp4_ = start;
		start = _tmp3_ + _tmp4_;
	}
	_tmp5_ = end;
	if (_tmp5_ < ((glong) 0)) {
		glong _tmp6_;
		glong _tmp7_;
		_tmp6_ = string_length;
		_tmp7_ = end;
		end = _tmp6_ + _tmp7_;
	}
	_tmp9_ = start;
	if (_tmp9_ >= ((glong) 0)) {
		glong _tmp10_;
		glong _tmp11_;
		_tmp10_ = start;
		_tmp11_ = string_length;
		_tmp8_ = _tmp10_ <= _tmp11_;
	} else {
		_tmp8_ = FALSE;
	}
	g_return_val_if_fail (_tmp8_, NULL);
	_tmp13_ = end;
	if (_tmp13_ >= ((glong) 0)) {
		glong _tmp14_;
		glong _tmp15_;
		_tmp14_ = end;
		_tmp15_ = string_length;
		_tmp12_ = _tmp14_ <= _tmp15_;
	} else {
		_tmp12_ = FALSE;
	}
	g_return_val_if_fail (_tmp12_, NULL);
	_tmp16_ = start;
	_tmp17_ = end;
	g_return_val_if_fail (_tmp16_ <= _tmp17_, NULL);
	_tmp18_ = start;
	_tmp19_ = end;
	_tmp20_ = start;
	_tmp21_ = g_strndup (((gchar*) self) + _tmp18_, (gsize) (_tmp19_ - _tmp20_));
	result = _tmp21_;
	return result;
}


static gint string_index_of (const gchar* self, const gchar* needle, gint start_index) {
	gint result = 0;
	gchar* _result_ = NULL;
	gint _tmp0_;
	const gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (needle != NULL, 0);
	_tmp0_ = start_index;
	_tmp1_ = needle;
	_tmp2_ = strstr (((gchar*) self) + _tmp0_, (gchar*) _tmp1_);
	_result_ = _tmp2_;
	_tmp3_ = _result_;
	if (_tmp3_ != NULL) {
		gchar* _tmp4_;
		_tmp4_ = _result_;
		result = (gint) (_tmp4_ - ((gchar*) self));
		return result;
	} else {
		result = -1;
		return result;
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


static void _vala_array_add2 (gint* * array, int* length, int* size, gint value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (gint, *array, *size);
	}
	(*array)[(*length)++] = value;
}


void granite_widgets_contractor_view_name_blacklist (GraniteWidgetsContractorView* self, gchar** names, int names_length1) {
	GtkTreeIter it = {0};
	GtkTreeIter it2 = {0};
	GValue value = {0};
	gboolean check = FALSE;
	gint cur_pos = 0;
	GtkListStore* _tmp0_;
	GtkTreeIter _tmp1_ = {0};
	GtkListStore* _tmp2_;
	GtkTreeIter _tmp3_ = {0};
	g_return_if_fail (self != NULL);
	cur_pos = 0;
	_tmp0_ = self->priv->list;
	gtk_tree_model_get_iter_first ((GtkTreeModel*) _tmp0_, &_tmp1_);
	it = _tmp1_;
	_tmp2_ = self->priv->list;
	gtk_tree_model_get_iter_first ((GtkTreeModel*) _tmp2_, &_tmp3_);
	it2 = _tmp3_;
	while (TRUE) {
		GtkListStore* _tmp4_;
		GtkTreeIter _tmp5_;
		GValue _tmp6_ = {0};
		GtkListStore* _tmp7_;
		gboolean _tmp8_;
		gchar* text = NULL;
		const gchar* _tmp9_;
		gchar* _tmp10_;
		const gchar* _tmp11_;
		const gchar* _tmp12_;
		gint _tmp13_;
		gchar* _tmp14_;
		gchar* _tmp15_;
		gchar** _tmp16_;
		gint _tmp16__length1;
		gboolean _tmp17_;
		gboolean _tmp20_;
		GtkTreeIter _tmp21_;
		gint _tmp22_;
		_tmp4_ = self->priv->list;
		_tmp5_ = it;
		gtk_tree_model_get_value ((GtkTreeModel*) _tmp4_, &_tmp5_, 1, &_tmp6_);
		G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
		value = _tmp6_;
		_tmp7_ = self->priv->list;
		_tmp8_ = gtk_tree_model_iter_next ((GtkTreeModel*) _tmp7_, &it2);
		check = _tmp8_;
		_tmp9_ = g_value_get_string (&value);
		_tmp10_ = g_strdup (_tmp9_);
		text = _tmp10_;
		_tmp11_ = text;
		_tmp12_ = text;
		_tmp13_ = string_index_of (_tmp12_, "</b>", 0);
		_tmp14_ = string_slice (_tmp11_, (glong) 3, (glong) _tmp13_);
		_tmp15_ = _tmp14_;
		_tmp16_ = names;
		_tmp16__length1 = names_length1;
		_tmp17_ = _vala_string_array_contains (_tmp16_, _tmp16__length1, _tmp15_);
		_g_free0 (_tmp15_);
		if (_tmp17_) {
			gint* _tmp18_;
			gint _tmp18__length1;
			gint _tmp19_;
			_tmp18_ = self->priv->blacklisted_pos;
			_tmp18__length1 = self->priv->blacklisted_pos_length1;
			_tmp19_ = cur_pos;
			_vala_array_add2 (&self->priv->blacklisted_pos, &self->priv->blacklisted_pos_length1, &self->priv->_blacklisted_pos_size_, _tmp19_);
		}
		_tmp20_ = check;
		if (!_tmp20_) {
			_g_free0 (text);
			break;
		}
		_tmp21_ = it2;
		it = _tmp21_;
		_tmp22_ = cur_pos;
		cur_pos = _tmp22_ + 1;
		_g_free0 (text);
	}
	G_IS_VALUE (&value) ? (g_value_unset (&value), NULL) : NULL;
}


void granite_widgets_contractor_view_run_selected (GraniteWidgetsContractorView* self) {
	GeeHashMap* _tmp0_;
	GeeSet* _tmp1_;
	GeeSet* _tmp2_;
	GeeSet* _tmp3_;
	gint _tmp4_;
	gint _tmp5_;
	gboolean _tmp6_;
	gboolean _tmp7_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->outsiders;
	_tmp1_ = gee_abstract_map_get_keys ((GeeAbstractMap*) _tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = _tmp2_;
	_tmp4_ = granite_widgets_contractor_view_get_selected (self);
	_tmp5_ = _tmp4_;
	_tmp6_ = gee_collection_contains ((GeeCollection*) _tmp3_, (gpointer) ((gintptr) _tmp5_));
	_tmp7_ = _tmp6_;
	_g_object_unref0 (_tmp3_);
	if (_tmp7_) {
		GeeHashMap* _tmp8_;
		gint _tmp9_;
		gint _tmp10_;
		gpointer _tmp11_;
		GraniteWidgetsContractorViewDelegateWrapper* _tmp12_;
		GraniteWidgetsContractorViewContractCallback _tmp13_;
		void* _tmp13__target;
		_tmp8_ = self->priv->outsiders;
		_tmp9_ = granite_widgets_contractor_view_get_selected (self);
		_tmp10_ = _tmp9_;
		_tmp11_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp8_, (gpointer) ((gintptr) _tmp10_));
		_tmp12_ = (GraniteWidgetsContractorViewDelegateWrapper*) _tmp11_;
		_tmp13_ = (*_tmp12_).method;
		_tmp13__target = (*_tmp12_).method_target;
		_tmp13_ (_tmp13__target);
		_granite_widgets_contractor_view_delegate_wrapper_free0 (_tmp12_);
	} else {
		{
			gint corr = 0;
			gint* _tmp28_;
			gint _tmp28__length1;
			GHashTable** _tmp33_;
			gint _tmp33__length1;
			gint _tmp34_;
			gint _tmp35_;
			gint _tmp36_;
			GHashTable* _tmp37_;
			gconstpointer _tmp38_;
			corr = 0;
			{
				GeeIterator* _i_it = NULL;
				GeeHashMap* _tmp14_;
				GeeSet* _tmp15_;
				GeeSet* _tmp16_;
				GeeSet* _tmp17_;
				GeeIterator* _tmp18_;
				GeeIterator* _tmp19_;
				_tmp14_ = self->priv->outsiders;
				_tmp15_ = gee_abstract_map_get_keys ((GeeAbstractMap*) _tmp14_);
				_tmp16_ = _tmp15_;
				_tmp17_ = _tmp16_;
				_tmp18_ = gee_iterable_iterator ((GeeIterable*) _tmp17_);
				_tmp19_ = _tmp18_;
				_g_object_unref0 (_tmp17_);
				_i_it = _tmp19_;
				while (TRUE) {
					GeeIterator* _tmp20_;
					gboolean _tmp21_;
					gint i = 0;
					GeeIterator* _tmp22_;
					gpointer _tmp23_;
					gint _tmp24_;
					gint _tmp25_;
					gint _tmp26_;
					gint _tmp27_;
					_tmp20_ = _i_it;
					_tmp21_ = gee_iterator_next (_tmp20_);
					if (!_tmp21_) {
						break;
					}
					_tmp22_ = _i_it;
					_tmp23_ = gee_iterator_get (_tmp22_);
					i = (gint) ((gintptr) _tmp23_);
					_tmp24_ = i;
					_tmp25_ = granite_widgets_contractor_view_get_selected (self);
					_tmp26_ = _tmp25_;
					if (_tmp24_ > _tmp26_) {
						break;
					}
					_tmp27_ = corr;
					corr = _tmp27_ + 1;
				}
				_g_object_unref0 (_i_it);
			}
			_tmp28_ = self->priv->blacklisted_pos;
			_tmp28__length1 = self->priv->blacklisted_pos_length1;
			{
				gint* i_collection = NULL;
				gint i_collection_length1 = 0;
				gint _i_collection_size_ = 0;
				gint i_it = 0;
				i_collection = _tmp28_;
				i_collection_length1 = _tmp28__length1;
				for (i_it = 0; i_it < _tmp28__length1; i_it = i_it + 1) {
					gint i = 0;
					i = i_collection[i_it];
					{
						gint _tmp29_;
						gint _tmp30_;
						gint _tmp31_;
						gint _tmp32_;
						_tmp29_ = i;
						_tmp30_ = granite_widgets_contractor_view_get_selected (self);
						_tmp31_ = _tmp30_;
						if (_tmp29_ > _tmp31_) {
							break;
						}
						_tmp32_ = corr;
						corr = _tmp32_ - 1;
					}
				}
			}
			_tmp33_ = self->priv->contracts;
			_tmp33__length1 = self->priv->contracts_length1;
			_tmp34_ = granite_widgets_contractor_view_get_selected (self);
			_tmp35_ = _tmp34_;
			_tmp36_ = corr;
			_tmp37_ = _tmp33_[_tmp35_ - _tmp36_];
			_tmp38_ = g_hash_table_lookup (_tmp37_, "Exec");
			g_spawn_command_line_async ((const gchar*) _tmp38_, &_inner_error_);
			if (G_UNLIKELY (_inner_error_ != NULL)) {
				goto __catch27_g_error;
			}
		}
		goto __finally27;
		__catch27_g_error:
		{
			GError* e = NULL;
			const gchar* _tmp39_;
			e = _inner_error_;
			_inner_error_ = NULL;
			_tmp39_ = e->message;
			g_error ("ContractorView.vala:215: %s", _tmp39_);
			_g_error_free0 (e);
		}
		__finally27:
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
	}
}


gint granite_widgets_contractor_view_get_selected (GraniteWidgetsContractorView* self) {
	gint result;
	GtkTreePath* path = NULL;
	GtkTreePath* _tmp0_ = NULL;
	gchar* _tmp1_;
	gchar* _tmp2_;
	gint _tmp3_;
	gint _tmp4_;
	g_return_val_if_fail (self != NULL, 0);
	gtk_tree_view_get_cursor ((GtkTreeView*) self, &_tmp0_, NULL);
	_gtk_tree_path_free0 (path);
	path = _tmp0_;
	_tmp1_ = gtk_tree_path_to_string (path);
	_tmp2_ = _tmp1_;
	_tmp3_ = atoi (_tmp2_);
	_tmp4_ = _tmp3_;
	_g_free0 (_tmp2_);
	result = _tmp4_;
	_gtk_tree_path_free0 (path);
	return result;
}


void granite_widgets_contractor_view_set_selected (GraniteWidgetsContractorView* self, gint value) {
	gint _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	GtkTreePath* _tmp3_;
	GtkTreePath* _tmp4_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup_printf ("%i", _tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = gtk_tree_path_new_from_string (_tmp2_);
	_tmp4_ = _tmp3_;
	gtk_tree_view_set_cursor ((GtkTreeView*) self, _tmp4_, NULL, FALSE);
	_gtk_tree_path_free0 (_tmp4_);
	_g_free0 (_tmp2_);
	g_object_notify ((GObject *) self, "selected");
}


static GraniteWidgetsContractorViewDelegateWrapper* granite_widgets_contractor_view_delegate_wrapper_dup (const GraniteWidgetsContractorViewDelegateWrapper* self) {
	GraniteWidgetsContractorViewDelegateWrapper* dup;
	dup = g_new0 (GraniteWidgetsContractorViewDelegateWrapper, 1);
	memcpy (dup, self, sizeof (GraniteWidgetsContractorViewDelegateWrapper));
	return dup;
}


static void granite_widgets_contractor_view_delegate_wrapper_free (GraniteWidgetsContractorViewDelegateWrapper* self) {
	g_free (self);
}


static GType granite_widgets_contractor_view_delegate_wrapper_get_type (void) {
	static volatile gsize granite_widgets_contractor_view_delegate_wrapper_type_id__volatile = 0;
	if (g_once_init_enter (&granite_widgets_contractor_view_delegate_wrapper_type_id__volatile)) {
		GType granite_widgets_contractor_view_delegate_wrapper_type_id;
		granite_widgets_contractor_view_delegate_wrapper_type_id = g_boxed_type_register_static ("GraniteWidgetsContractorViewDelegateWrapper", (GBoxedCopyFunc) granite_widgets_contractor_view_delegate_wrapper_dup, (GBoxedFreeFunc) granite_widgets_contractor_view_delegate_wrapper_free);
		g_once_init_leave (&granite_widgets_contractor_view_delegate_wrapper_type_id__volatile, granite_widgets_contractor_view_delegate_wrapper_type_id);
	}
	return granite_widgets_contractor_view_delegate_wrapper_type_id__volatile;
}


static void granite_widgets_contractor_view_class_init (GraniteWidgetsContractorViewClass * klass) {
	granite_widgets_contractor_view_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GraniteWidgetsContractorViewPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_granite_widgets_contractor_view_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_granite_widgets_contractor_view_set_property;
	G_OBJECT_CLASS (klass)->finalize = granite_widgets_contractor_view_finalize;
	/**
	     * the index of the currently selected contract
	     */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GRANITE_WIDGETS_CONTRACTOR_VIEW_SELECTED_PROPERTY, g_param_spec_int ("selected", "selected", "selected", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	     * A contract was launched using double clicking
	     */
	granite_widgets_contractor_view_signals[GRANITE_WIDGETS_CONTRACTOR_VIEW_EXECUTED_SIGNAL] = g_signal_new ("executed", GRANITE_WIDGETS_TYPE_CONTRACTOR_VIEW, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
}


static void granite_widgets_contractor_view_instance_init (GraniteWidgetsContractorView * self) {
	self->priv = GRANITE_WIDGETS_CONTRACTOR_VIEW_GET_PRIVATE (self);
}


static void granite_widgets_contractor_view_finalize (GObject * obj) {
	GraniteWidgetsContractorView * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRANITE_WIDGETS_TYPE_CONTRACTOR_VIEW, GraniteWidgetsContractorView);
	_g_object_unref0 (self->priv->outsiders);
	self->priv->blacklisted_pos = (g_free (self->priv->blacklisted_pos), NULL);
	_g_object_unref0 (self->priv->list);
	self->priv->contracts = (_vala_array_free (self->priv->contracts, self->priv->contracts_length1, (GDestroyNotify) g_hash_table_unref), NULL);
	G_OBJECT_CLASS (granite_widgets_contractor_view_parent_class)->finalize (obj);
}


/**
 * This class provides a simple way to look at contracts from Contractor.
 * It uses a long-obsolete and unused revision of Contractor API and will not
 * work with stable releases of Contractor.
 */
GType granite_widgets_contractor_view_get_type (void) {
	static volatile gsize granite_widgets_contractor_view_type_id__volatile = 0;
	if (g_once_init_enter (&granite_widgets_contractor_view_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GraniteWidgetsContractorViewClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) granite_widgets_contractor_view_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GraniteWidgetsContractorView), 0, (GInstanceInitFunc) granite_widgets_contractor_view_instance_init, NULL };
		GType granite_widgets_contractor_view_type_id;
		granite_widgets_contractor_view_type_id = g_type_register_static (gtk_tree_view_get_type (), "GraniteWidgetsContractorView", &g_define_type_info, 0);
		g_once_init_leave (&granite_widgets_contractor_view_type_id__volatile, granite_widgets_contractor_view_type_id);
	}
	return granite_widgets_contractor_view_type_id__volatile;
}


static void _vala_granite_widgets_contractor_view_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GraniteWidgetsContractorView * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GRANITE_WIDGETS_TYPE_CONTRACTOR_VIEW, GraniteWidgetsContractorView);
	switch (property_id) {
		case GRANITE_WIDGETS_CONTRACTOR_VIEW_SELECTED_PROPERTY:
		g_value_set_int (value, granite_widgets_contractor_view_get_selected (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_granite_widgets_contractor_view_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GraniteWidgetsContractorView * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GRANITE_WIDGETS_TYPE_CONTRACTOR_VIEW, GraniteWidgetsContractorView);
	switch (property_id) {
		case GRANITE_WIDGETS_CONTRACTOR_VIEW_SELECTED_PROPERTY:
		granite_widgets_contractor_view_set_selected (self, g_value_get_int (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
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



