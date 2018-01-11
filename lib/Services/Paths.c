/* Paths.c generated by valac 0.36.7, the Vala compiler
 * generated from Paths.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>


#define GRANITE_SERVICES_TYPE_PATHS (granite_services_paths_get_type ())
#define GRANITE_SERVICES_PATHS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRANITE_SERVICES_TYPE_PATHS, GraniteServicesPaths))
#define GRANITE_SERVICES_PATHS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRANITE_SERVICES_TYPE_PATHS, GraniteServicesPathsClass))
#define GRANITE_SERVICES_IS_PATHS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRANITE_SERVICES_TYPE_PATHS))
#define GRANITE_SERVICES_IS_PATHS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRANITE_SERVICES_TYPE_PATHS))
#define GRANITE_SERVICES_PATHS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRANITE_SERVICES_TYPE_PATHS, GraniteServicesPathsClass))

typedef struct _GraniteServicesPaths GraniteServicesPaths;
typedef struct _GraniteServicesPathsClass GraniteServicesPathsClass;
typedef struct _GraniteServicesPathsPrivate GraniteServicesPathsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define __g_list_free__g_object_unref0_0(var) ((var == NULL) ? NULL : (var = (_g_list_free__g_object_unref0_ (var), NULL)))

struct _GraniteServicesPaths {
	GObject parent_instance;
	GraniteServicesPathsPrivate * priv;
};

struct _GraniteServicesPathsClass {
	GObjectClass parent_class;
};


static gpointer granite_services_paths_parent_class = NULL;
static GFile* granite_services_paths__home_folder;
static GFile* granite_services_paths__home_folder = NULL;
static GFile* granite_services_paths__data_folder;
static GFile* granite_services_paths__data_folder = NULL;
static GFile* granite_services_paths__xdg_config_home_folder;
static GFile* granite_services_paths__xdg_config_home_folder = NULL;
static GFile* granite_services_paths__xdg_data_home_folder;
static GFile* granite_services_paths__xdg_data_home_folder = NULL;
static GFile* granite_services_paths__xdg_cache_home_folder;
static GFile* granite_services_paths__xdg_cache_home_folder = NULL;
static GList* granite_services_paths__xdg_data_dir_folders;
static GList* granite_services_paths__xdg_data_dir_folders = NULL;
static GFile* granite_services_paths__user_config_folder;
static GFile* granite_services_paths__user_config_folder = NULL;
static GFile* granite_services_paths__user_data_folder;
static GFile* granite_services_paths__user_data_folder = NULL;
static GFile* granite_services_paths__user_cache_folder;
static GFile* granite_services_paths__user_cache_folder = NULL;

GType granite_services_paths_get_type (void) G_GNUC_CONST;
enum  {
	GRANITE_SERVICES_PATHS_0_PROPERTY
};
void granite_services_paths_initialize (const gchar* app_name, const gchar* data_folder_path);
GFile* granite_services_paths_get_home_folder (void);
void granite_services_paths_set_home_folder (GFile* value);
GFile* granite_services_paths_get_data_folder (void);
void granite_services_paths_set_data_folder (GFile* value);
GFile* granite_services_paths_get_xdg_config_home_folder (void);
void granite_services_paths_set_xdg_config_home_folder (GFile* value);
GFile* granite_services_paths_get_xdg_data_home_folder (void);
void granite_services_paths_set_xdg_data_home_folder (GFile* value);
GFile* granite_services_paths_get_xdg_cache_home_folder (void);
void granite_services_paths_set_xdg_cache_home_folder (GFile* value);
GList* granite_services_paths_get_xdg_data_dir_folders (void);
void granite_services_paths_set_xdg_data_dir_folders (GList* value);
GFile* granite_services_paths_get_user_config_folder (void);
void granite_services_paths_set_user_config_folder (GFile* value);
GFile* granite_services_paths_get_user_data_folder (void);
void granite_services_paths_set_user_data_folder (GFile* value);
GFile* granite_services_paths_get_user_cache_folder (void);
void granite_services_paths_set_user_cache_folder (GFile* value);
gboolean granite_services_paths_ensure_directory_exists (GFile* dir);
static void _g_object_unref0_ (gpointer var);
static void _g_list_free__g_object_unref0_ (GList* self);
GraniteServicesPaths* granite_services_paths_new (void);
GraniteServicesPaths* granite_services_paths_construct (GType object_type);
static void granite_services_paths_finalize (GObject * obj);
static void _vala_granite_services_paths_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_granite_services_paths_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


/**
         * Initialize all the paths using the supplied app name and path to the app's data folder.
         *
         * @param app_name the name of the application
         * @param data_folder_path the path to the application's data folder
         */
static void _g_object_unref0_ (gpointer var) {
	(var == NULL) ? NULL : (var = (g_object_unref (var), NULL));
}


static void _g_list_free__g_object_unref0_ (GList* self) {
	g_list_foreach (self, (GFunc) _g_object_unref0_, NULL);
	g_list_free (self);
}


void granite_services_paths_initialize (const gchar* app_name, const gchar* data_folder_path) {
	GFile* _tmp0_;
	GFile* _tmp1_;
	const gchar* _tmp2_;
	GFile* _tmp3_;
	GFile* _tmp4_;
	GFile* _tmp5_;
	GFile* _tmp6_;
	const gchar* _tmp7_;
	GFile* _tmp8_;
	GFile* _tmp9_;
	gchar* xdg_config_home = NULL;
	const gchar* _tmp10_;
	gchar* _tmp11_;
	gchar* xdg_data_home = NULL;
	const gchar* _tmp12_;
	gchar* _tmp13_;
	gchar* xdg_cache_home = NULL;
	const gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* xdg_data_dirs = NULL;
	const gchar* _tmp16_;
	gchar* _tmp17_;
	gboolean _tmp18_ = FALSE;
	const gchar* _tmp19_;
	gboolean _tmp34_ = FALSE;
	const gchar* _tmp35_;
	gboolean _tmp52_ = FALSE;
	const gchar* _tmp53_;
	GList* dirs = NULL;
	gboolean _tmp68_ = FALSE;
	const gchar* _tmp69_;
	GList* _tmp81_;
	GList* _tmp82_;
	GList* _tmp83_;
	GList* _tmp84_;
	GFile* _tmp85_;
	GFile* _tmp86_;
	GFile* _tmp87_;
	GFile* _tmp88_;
	const gchar* _tmp89_;
	GFile* _tmp90_;
	GFile* _tmp91_;
	GFile* _tmp92_;
	GFile* _tmp93_;
	GFile* _tmp94_;
	GFile* _tmp95_;
	const gchar* _tmp96_;
	GFile* _tmp97_;
	GFile* _tmp98_;
	GFile* _tmp99_;
	GFile* _tmp100_;
	GFile* _tmp101_;
	GFile* _tmp102_;
	const gchar* _tmp103_;
	GFile* _tmp104_;
	GFile* _tmp105_;
	GFile* _tmp106_;
	GFile* _tmp107_;
	GFile* _tmp108_;
	GFile* _tmp109_;
	GFile* _tmp110_;
	GFile* _tmp111_;
	g_return_if_fail (app_name != NULL);
	g_return_if_fail (data_folder_path != NULL);
	_tmp0_ = granite_services_paths_get_home_folder ();
	_tmp1_ = _tmp0_;
	_tmp2_ = g_get_home_dir ();
	_tmp3_ = g_file_new_for_path (_tmp2_);
	_tmp4_ = _tmp3_;
	granite_services_paths_set_home_folder (_tmp4_);
	_g_object_unref0 (_tmp4_);
	_tmp5_ = granite_services_paths_get_data_folder ();
	_tmp6_ = _tmp5_;
	_tmp7_ = data_folder_path;
	_tmp8_ = g_file_new_for_path (_tmp7_);
	_tmp9_ = _tmp8_;
	granite_services_paths_set_data_folder (_tmp9_);
	_g_object_unref0 (_tmp9_);
	_tmp10_ = g_getenv ("XDG_CONFIG_HOME");
	_tmp11_ = g_strdup (_tmp10_);
	xdg_config_home = _tmp11_;
	_tmp12_ = g_getenv ("XDG_DATA_HOME");
	_tmp13_ = g_strdup (_tmp12_);
	xdg_data_home = _tmp13_;
	_tmp14_ = g_getenv ("XDG_CACHE_HOME");
	_tmp15_ = g_strdup (_tmp14_);
	xdg_cache_home = _tmp15_;
	_tmp16_ = g_getenv ("XDG_DATA_DIRS");
	_tmp17_ = g_strdup (_tmp16_);
	xdg_data_dirs = _tmp17_;
	_tmp19_ = xdg_config_home;
	if (_tmp19_ == NULL) {
		_tmp18_ = TRUE;
	} else {
		const gchar* _tmp20_;
		gint _tmp21_;
		gint _tmp22_;
		_tmp20_ = xdg_config_home;
		_tmp21_ = strlen (_tmp20_);
		_tmp22_ = _tmp21_;
		_tmp18_ = _tmp22_ == 0;
	}
	if (_tmp18_) {
		GFile* _tmp23_;
		GFile* _tmp24_;
		GFile* _tmp25_;
		GFile* _tmp26_;
		GFile* _tmp27_;
		GFile* _tmp28_;
		_tmp23_ = granite_services_paths_get_xdg_config_home_folder ();
		_tmp24_ = _tmp23_;
		_tmp25_ = granite_services_paths_get_home_folder ();
		_tmp26_ = _tmp25_;
		_tmp27_ = g_file_get_child (_tmp26_, ".config");
		_tmp28_ = _tmp27_;
		granite_services_paths_set_xdg_config_home_folder (_tmp28_);
		_g_object_unref0 (_tmp28_);
	} else {
		GFile* _tmp29_;
		GFile* _tmp30_;
		const gchar* _tmp31_;
		GFile* _tmp32_;
		GFile* _tmp33_;
		_tmp29_ = granite_services_paths_get_xdg_config_home_folder ();
		_tmp30_ = _tmp29_;
		_tmp31_ = xdg_config_home;
		_tmp32_ = g_file_new_for_path (_tmp31_);
		_tmp33_ = _tmp32_;
		granite_services_paths_set_xdg_config_home_folder (_tmp33_);
		_g_object_unref0 (_tmp33_);
	}
	_tmp35_ = xdg_data_home;
	if (_tmp35_ == NULL) {
		_tmp34_ = TRUE;
	} else {
		const gchar* _tmp36_;
		gint _tmp37_;
		gint _tmp38_;
		_tmp36_ = xdg_data_home;
		_tmp37_ = strlen (_tmp36_);
		_tmp38_ = _tmp37_;
		_tmp34_ = _tmp38_ == 0;
	}
	if (_tmp34_) {
		GFile* _tmp39_;
		GFile* _tmp40_;
		GFile* _tmp41_;
		GFile* _tmp42_;
		GFile* _tmp43_;
		GFile* _tmp44_;
		GFile* _tmp45_;
		GFile* _tmp46_;
		_tmp39_ = granite_services_paths_get_xdg_data_home_folder ();
		_tmp40_ = _tmp39_;
		_tmp41_ = granite_services_paths_get_home_folder ();
		_tmp42_ = _tmp41_;
		_tmp43_ = g_file_get_child (_tmp42_, ".local");
		_tmp44_ = _tmp43_;
		_tmp45_ = g_file_get_child (_tmp44_, "share");
		_tmp46_ = _tmp45_;
		granite_services_paths_set_xdg_data_home_folder (_tmp46_);
		_g_object_unref0 (_tmp46_);
		_g_object_unref0 (_tmp44_);
	} else {
		GFile* _tmp47_;
		GFile* _tmp48_;
		const gchar* _tmp49_;
		GFile* _tmp50_;
		GFile* _tmp51_;
		_tmp47_ = granite_services_paths_get_xdg_data_home_folder ();
		_tmp48_ = _tmp47_;
		_tmp49_ = xdg_data_home;
		_tmp50_ = g_file_new_for_path (_tmp49_);
		_tmp51_ = _tmp50_;
		granite_services_paths_set_xdg_data_home_folder (_tmp51_);
		_g_object_unref0 (_tmp51_);
	}
	_tmp53_ = xdg_cache_home;
	if (_tmp53_ == NULL) {
		_tmp52_ = TRUE;
	} else {
		const gchar* _tmp54_;
		gint _tmp55_;
		gint _tmp56_;
		_tmp54_ = xdg_cache_home;
		_tmp55_ = strlen (_tmp54_);
		_tmp56_ = _tmp55_;
		_tmp52_ = _tmp56_ == 0;
	}
	if (_tmp52_) {
		GFile* _tmp57_;
		GFile* _tmp58_;
		GFile* _tmp59_;
		GFile* _tmp60_;
		GFile* _tmp61_;
		GFile* _tmp62_;
		_tmp57_ = granite_services_paths_get_xdg_cache_home_folder ();
		_tmp58_ = _tmp57_;
		_tmp59_ = granite_services_paths_get_home_folder ();
		_tmp60_ = _tmp59_;
		_tmp61_ = g_file_get_child (_tmp60_, ".cache");
		_tmp62_ = _tmp61_;
		granite_services_paths_set_xdg_cache_home_folder (_tmp62_);
		_g_object_unref0 (_tmp62_);
	} else {
		GFile* _tmp63_;
		GFile* _tmp64_;
		const gchar* _tmp65_;
		GFile* _tmp66_;
		GFile* _tmp67_;
		_tmp63_ = granite_services_paths_get_xdg_cache_home_folder ();
		_tmp64_ = _tmp63_;
		_tmp65_ = xdg_cache_home;
		_tmp66_ = g_file_new_for_path (_tmp65_);
		_tmp67_ = _tmp66_;
		granite_services_paths_set_xdg_cache_home_folder (_tmp67_);
		_g_object_unref0 (_tmp67_);
	}
	dirs = NULL;
	_tmp69_ = xdg_data_dirs;
	if (_tmp69_ == NULL) {
		_tmp68_ = TRUE;
	} else {
		const gchar* _tmp70_;
		gint _tmp71_;
		gint _tmp72_;
		_tmp70_ = xdg_data_dirs;
		_tmp71_ = strlen (_tmp70_);
		_tmp72_ = _tmp71_;
		_tmp68_ = _tmp72_ == 0;
	}
	if (_tmp68_) {
		GFile* _tmp73_;
		GFile* _tmp74_;
		_tmp73_ = g_file_new_for_path ("/usr/local/share");
		dirs = g_list_append (dirs, _tmp73_);
		_tmp74_ = g_file_new_for_path ("/usr/share");
		dirs = g_list_append (dirs, _tmp74_);
	} else {
		const gchar* _tmp75_;
		gchar** _tmp76_;
		gchar** _tmp77_;
		_tmp75_ = xdg_data_dirs;
		_tmp77_ = _tmp76_ = g_strsplit (_tmp75_, ":", 0);
		{
			gchar** path_collection = NULL;
			gint path_collection_length1 = 0;
			gint _path_collection_size_ = 0;
			gint path_it = 0;
			path_collection = _tmp77_;
			path_collection_length1 = _vala_array_length (_tmp76_);
			for (path_it = 0; path_it < _vala_array_length (_tmp76_); path_it = path_it + 1) {
				gchar* _tmp78_;
				gchar* path = NULL;
				_tmp78_ = g_strdup (path_collection[path_it]);
				path = _tmp78_;
				{
					const gchar* _tmp79_;
					GFile* _tmp80_;
					_tmp79_ = path;
					_tmp80_ = g_file_new_for_path (_tmp79_);
					dirs = g_list_append (dirs, _tmp80_);
					_g_free0 (path);
				}
			}
			path_collection = (_vala_array_free (path_collection, path_collection_length1, (GDestroyNotify) g_free), NULL);
		}
	}
	_tmp81_ = granite_services_paths_get_xdg_data_dir_folders ();
	_tmp82_ = _tmp81_;
	_tmp83_ = dirs;
	_tmp84_ = g_list_copy (_tmp83_);
	granite_services_paths_set_xdg_data_dir_folders (_tmp84_);
	_tmp85_ = granite_services_paths_get_user_config_folder ();
	_tmp86_ = _tmp85_;
	_tmp87_ = granite_services_paths_get_xdg_config_home_folder ();
	_tmp88_ = _tmp87_;
	_tmp89_ = app_name;
	_tmp90_ = g_file_get_child (_tmp88_, _tmp89_);
	_tmp91_ = _tmp90_;
	granite_services_paths_set_user_config_folder (_tmp91_);
	_g_object_unref0 (_tmp91_);
	_tmp92_ = granite_services_paths_get_user_data_folder ();
	_tmp93_ = _tmp92_;
	_tmp94_ = granite_services_paths_get_xdg_data_home_folder ();
	_tmp95_ = _tmp94_;
	_tmp96_ = app_name;
	_tmp97_ = g_file_get_child (_tmp95_, _tmp96_);
	_tmp98_ = _tmp97_;
	granite_services_paths_set_user_data_folder (_tmp98_);
	_g_object_unref0 (_tmp98_);
	_tmp99_ = granite_services_paths_get_user_cache_folder ();
	_tmp100_ = _tmp99_;
	_tmp101_ = granite_services_paths_get_xdg_cache_home_folder ();
	_tmp102_ = _tmp101_;
	_tmp103_ = app_name;
	_tmp104_ = g_file_get_child (_tmp102_, _tmp103_);
	_tmp105_ = _tmp104_;
	granite_services_paths_set_user_cache_folder (_tmp105_);
	_g_object_unref0 (_tmp105_);
	_tmp106_ = granite_services_paths_get_user_config_folder ();
	_tmp107_ = _tmp106_;
	granite_services_paths_ensure_directory_exists (_tmp107_);
	_tmp108_ = granite_services_paths_get_user_data_folder ();
	_tmp109_ = _tmp108_;
	granite_services_paths_ensure_directory_exists (_tmp109_);
	_tmp110_ = granite_services_paths_get_user_cache_folder ();
	_tmp111_ = _tmp110_;
	granite_services_paths_ensure_directory_exists (_tmp111_);
	__g_list_free__g_object_unref0_0 (dirs);
	_g_free0 (xdg_data_dirs);
	_g_free0 (xdg_cache_home);
	_g_free0 (xdg_data_home);
	_g_free0 (xdg_config_home);
}


/**
         * Ensure the directory exists, by creating it if it does not.
         *
         * @param dir the directory in question
         *
         * @return `true` is the directory exists, `false` if it does not
         */
gboolean granite_services_paths_ensure_directory_exists (GFile* dir) {
	gboolean result = FALSE;
	GFile* _tmp0_;
	gboolean _tmp1_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (dir != NULL, FALSE);
	_tmp0_ = dir;
	_tmp1_ = g_file_query_exists (_tmp0_, NULL);
	if (!_tmp1_) {
		gboolean _tmp6_ = FALSE;
		{
			GFile* _tmp2_;
			_tmp2_ = dir;
			g_file_make_directory_with_parents (_tmp2_, NULL, &_inner_error_);
			if (G_UNLIKELY (_inner_error_ != NULL)) {
				goto __catch9_g_error;
			}
			result = TRUE;
			return result;
		}
		goto __finally9;
		__catch9_g_error:
		{
			GFile* _tmp3_;
			gchar* _tmp4_;
			gchar* _tmp5_;
			g_clear_error (&_inner_error_);
			_inner_error_ = NULL;
			_tmp3_ = dir;
			_tmp4_ = g_file_get_path (_tmp3_);
			_tmp5_ = _tmp4_;
			g_error ("Paths.vala:145: Could not access or create the directory '%s'.", _tmp5_);
			_g_free0 (_tmp5_);
		}
		__finally9:
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return _tmp6_;
	}
	result = FALSE;
	return result;
}


GraniteServicesPaths* granite_services_paths_construct (GType object_type) {
	GraniteServicesPaths * self = NULL;
	self = (GraniteServicesPaths*) g_object_new (object_type, NULL);
	return self;
}


GraniteServicesPaths* granite_services_paths_new (void) {
	return granite_services_paths_construct (GRANITE_SERVICES_TYPE_PATHS);
}


GFile* granite_services_paths_get_home_folder (void) {
	GFile* result;
	GFile* _tmp0_;
	_tmp0_ = granite_services_paths__home_folder;
	result = _tmp0_;
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


void granite_services_paths_set_home_folder (GFile* value) {
	GFile* _tmp0_;
	GFile* _tmp1_;
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (granite_services_paths__home_folder);
	granite_services_paths__home_folder = _tmp1_;
}


GFile* granite_services_paths_get_data_folder (void) {
	GFile* result;
	GFile* _tmp0_;
	_tmp0_ = granite_services_paths__data_folder;
	result = _tmp0_;
	return result;
}


void granite_services_paths_set_data_folder (GFile* value) {
	GFile* _tmp0_;
	GFile* _tmp1_;
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (granite_services_paths__data_folder);
	granite_services_paths__data_folder = _tmp1_;
}


GFile* granite_services_paths_get_xdg_config_home_folder (void) {
	GFile* result;
	GFile* _tmp0_;
	_tmp0_ = granite_services_paths__xdg_config_home_folder;
	result = _tmp0_;
	return result;
}


void granite_services_paths_set_xdg_config_home_folder (GFile* value) {
	GFile* _tmp0_;
	GFile* _tmp1_;
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (granite_services_paths__xdg_config_home_folder);
	granite_services_paths__xdg_config_home_folder = _tmp1_;
}


GFile* granite_services_paths_get_xdg_data_home_folder (void) {
	GFile* result;
	GFile* _tmp0_;
	_tmp0_ = granite_services_paths__xdg_data_home_folder;
	result = _tmp0_;
	return result;
}


void granite_services_paths_set_xdg_data_home_folder (GFile* value) {
	GFile* _tmp0_;
	GFile* _tmp1_;
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (granite_services_paths__xdg_data_home_folder);
	granite_services_paths__xdg_data_home_folder = _tmp1_;
}


GFile* granite_services_paths_get_xdg_cache_home_folder (void) {
	GFile* result;
	GFile* _tmp0_;
	_tmp0_ = granite_services_paths__xdg_cache_home_folder;
	result = _tmp0_;
	return result;
}


void granite_services_paths_set_xdg_cache_home_folder (GFile* value) {
	GFile* _tmp0_;
	GFile* _tmp1_;
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (granite_services_paths__xdg_cache_home_folder);
	granite_services_paths__xdg_cache_home_folder = _tmp1_;
}


GList* granite_services_paths_get_xdg_data_dir_folders (void) {
	GList* result;
	GList* _tmp0_;
	_tmp0_ = granite_services_paths__xdg_data_dir_folders;
	result = _tmp0_;
	return result;
}


void granite_services_paths_set_xdg_data_dir_folders (GList* value) {
	GList* _tmp0_;
	_tmp0_ = value;
	value = NULL;
	__g_list_free__g_object_unref0_0 (granite_services_paths__xdg_data_dir_folders);
	granite_services_paths__xdg_data_dir_folders = _tmp0_;
	__g_list_free__g_object_unref0_0 (value);
}


GFile* granite_services_paths_get_user_config_folder (void) {
	GFile* result;
	GFile* _tmp0_;
	_tmp0_ = granite_services_paths__user_config_folder;
	result = _tmp0_;
	return result;
}


void granite_services_paths_set_user_config_folder (GFile* value) {
	GFile* _tmp0_;
	GFile* _tmp1_;
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (granite_services_paths__user_config_folder);
	granite_services_paths__user_config_folder = _tmp1_;
}


GFile* granite_services_paths_get_user_data_folder (void) {
	GFile* result;
	GFile* _tmp0_;
	_tmp0_ = granite_services_paths__user_data_folder;
	result = _tmp0_;
	return result;
}


void granite_services_paths_set_user_data_folder (GFile* value) {
	GFile* _tmp0_;
	GFile* _tmp1_;
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (granite_services_paths__user_data_folder);
	granite_services_paths__user_data_folder = _tmp1_;
}


GFile* granite_services_paths_get_user_cache_folder (void) {
	GFile* result;
	GFile* _tmp0_;
	_tmp0_ = granite_services_paths__user_cache_folder;
	result = _tmp0_;
	return result;
}


void granite_services_paths_set_user_cache_folder (GFile* value) {
	GFile* _tmp0_;
	GFile* _tmp1_;
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (granite_services_paths__user_cache_folder);
	granite_services_paths__user_cache_folder = _tmp1_;
}


static void granite_services_paths_class_init (GraniteServicesPathsClass * klass) {
	granite_services_paths_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->get_property = _vala_granite_services_paths_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_granite_services_paths_set_property;
	G_OBJECT_CLASS (klass)->finalize = granite_services_paths_finalize;
}


static void granite_services_paths_instance_init (GraniteServicesPaths * self) {
}


static void granite_services_paths_finalize (GObject * obj) {
	GraniteServicesPaths * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRANITE_SERVICES_TYPE_PATHS, GraniteServicesPaths);
	G_OBJECT_CLASS (granite_services_paths_parent_class)->finalize (obj);
}


/**
     * A class for interacting with frequently-used directories, following the
     * XDG Base Directory specification: [[http://standards.freedesktop.org/basedir-spec/basedir-spec-latest.html]]
     */
GType granite_services_paths_get_type (void) {
	static volatile gsize granite_services_paths_type_id__volatile = 0;
	if (g_once_init_enter (&granite_services_paths_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GraniteServicesPathsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) granite_services_paths_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GraniteServicesPaths), 0, (GInstanceInitFunc) granite_services_paths_instance_init, NULL };
		GType granite_services_paths_type_id;
		granite_services_paths_type_id = g_type_register_static (G_TYPE_OBJECT, "GraniteServicesPaths", &g_define_type_info, 0);
		g_once_init_leave (&granite_services_paths_type_id__volatile, granite_services_paths_type_id);
	}
	return granite_services_paths_type_id__volatile;
}


static void _vala_granite_services_paths_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GraniteServicesPaths * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GRANITE_SERVICES_TYPE_PATHS, GraniteServicesPaths);
	switch (property_id) {
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_granite_services_paths_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GraniteServicesPaths * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GRANITE_SERVICES_TYPE_PATHS, GraniteServicesPaths);
	switch (property_id) {
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


