
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 2 > 0
static unsigned char *bytecode_data[2];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_Lotus(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PySide6(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode__virtualenv(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_modules(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_modules$app_functions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_modules$app_settings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_modules$resources_rc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_modules$ui_functions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_modules$ui_main(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_shiboken6(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_widgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_widgets$custom_grips(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_widgets$custom_grips$custom_grips(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"Lotus", modulecode_Lotus, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\107\151\164\150\165\142\134\114\157\164\165\163\134\114\157\164\165\163\134\114\157\164\165\163\56\160\171"
#endif
},
    {"PySide6", modulecode_PySide6, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\107\151\164\150\165\142\134\114\157\164\165\163\134\166\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\171\123\151\144\145\66\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\107\151\164\150\165\142\134\114\157\164\165\163\134\114\157\164\165\163\134\114\157\164\165\163\56\160\171"
#endif
},
    {"_virtualenv", modulecode__virtualenv, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\107\151\164\150\165\142\134\114\157\164\165\163\134\166\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\137\166\151\162\164\165\141\154\145\156\166\56\160\171"
#endif
},
    {"argparse", NULL, 0, 63480, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\163\150\151\63\144\157\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\141\162\147\160\141\162\163\145\56\160\171"
#endif
},
    {"modules", modulecode_modules, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\107\151\164\150\165\142\134\114\157\164\165\163\134\114\157\164\165\163\134\155\157\144\165\154\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"modules.app_functions", modulecode_modules$app_functions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\107\151\164\150\165\142\134\114\157\164\165\163\134\114\157\164\165\163\134\155\157\144\165\154\145\163\134\141\160\160\137\146\165\156\143\164\151\157\156\163\56\160\171"
#endif
},
    {"modules.app_settings", modulecode_modules$app_settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\107\151\164\150\165\142\134\114\157\164\165\163\134\114\157\164\165\163\134\155\157\144\165\154\145\163\134\141\160\160\137\163\145\164\164\151\156\147\163\56\160\171"
#endif
},
    {"modules.resources_rc", modulecode_modules$resources_rc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\107\151\164\150\165\142\134\114\157\164\165\163\134\114\157\164\165\163\134\155\157\144\165\154\145\163\134\162\145\163\157\165\162\143\145\163\137\162\143\56\160\171"
#endif
},
    {"modules.ui_functions", modulecode_modules$ui_functions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\107\151\164\150\165\142\134\114\157\164\165\163\134\114\157\164\165\163\134\155\157\144\165\154\145\163\134\165\151\137\146\165\156\143\164\151\157\156\163\56\160\171"
#endif
},
    {"modules.ui_main", modulecode_modules$ui_main, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\107\151\164\150\165\142\134\114\157\164\165\163\134\114\157\164\165\163\134\155\157\144\165\154\145\163\134\165\151\137\155\141\151\156\56\160\171"
#endif
},
    {"shiboken6", modulecode_shiboken6, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\107\151\164\150\165\142\134\114\157\164\165\163\134\166\145\156\166\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\150\151\142\157\153\145\156\66\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"site", NULL, 1, 16811, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\163\150\151\63\144\157\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\56\160\171"
#endif
},
    {"widgets", modulecode_widgets, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\107\151\164\150\165\142\134\114\157\164\165\163\134\114\157\164\165\163\134\167\151\144\147\145\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"widgets.custom_grips", modulecode_widgets$custom_grips, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\107\151\164\150\165\142\134\114\157\164\165\163\134\114\157\164\165\163\134\167\151\144\147\145\164\163\134\143\165\163\164\157\155\137\147\162\151\160\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"widgets.custom_grips.custom_grips", modulecode_widgets$custom_grips$custom_grips, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\107\151\164\150\165\142\134\114\157\164\165\163\134\114\157\164\165\163\134\167\151\144\147\145\164\163\134\143\165\163\164\157\155\137\147\162\151\160\163\134\143\165\163\164\157\155\137\147\162\151\160\163\56\160\171"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(void) {
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

