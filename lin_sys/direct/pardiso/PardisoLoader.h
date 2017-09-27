#ifndef PARDISOLOADER_H
#define PARDISOLOADER_H

#ifdef __cplusplus
extern "C" {
#endif

#include "glob_opts.h"


/** Tries to load a dynamically linked library with Pardiso.
 * Return a failure if the library cannot be loaded or not all Pardiso symbols are found.
 * @param libname The name under which the Pardiso lib can be found, or OSQP_NULL to use a default name (mkl_rt.SHAREDLIBEXT).
 * @return Zero on success, nonzero on failure.
 */
c_int LSL_loadPardisoLib(const char* libname);

/** Unloads a loaded Pardiso library.
 * @return Zero on success, nonzero on failure.
 */
c_int LSL_unloadPardisoLib();


#ifdef __cplusplus
}
#endif

#endif /*PARADISOLOADER_H*/
