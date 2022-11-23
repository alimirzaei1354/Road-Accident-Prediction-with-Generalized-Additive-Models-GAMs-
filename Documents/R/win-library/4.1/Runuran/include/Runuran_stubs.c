/*---------------------------------------------------------------------------*/
/*                                                                           */
/* Wrapper functions for calling routines exported from package 'Runuran'    */
/*                                                                           */
/*---------------------------------------------------------------------------*/

/* R header files */
#include <Rconfig.h>
#include <R_ext/Rdynload.h>

#include <Runuran_ext.h>

/*---------------------------------------------------------------------------*/

#ifdef HAVE_VISIBILITY_ATTRIBUTE
# define attribute_hidden __attribute__ ((visibility ("hidden")))
#else
# define attribute_hidden
#endif

/*---------------------------------------------------------------------------*/

SEXP attribute_hidden
Runuran_ext_cont_init
( SEXP sexp_obj, SEXP sexp_params, SEXP sexp_domain,
  UNUR_FUNCT_CONT *cdf, UNUR_FUNCT_CONT *pdf, UNUR_FUNCT_CONT *dpdf, int islog,
  double *mode, double *center, char *name )
{
  static RUNURAN_EXT_FUNCT_INIT *cont_init = NULL;

  if (cont_init == NULL)
    cont_init = (RUNURAN_EXT_FUNCT_INIT*)
      R_GetCCallable("Runuran", "cont_init");

  return cont_init( sexp_obj, sexp_params, sexp_domain,
		    cdf, pdf, dpdf, islog, mode, center, name );
}

/*---------------------------------------------------------------------------*/

int attribute_hidden
unur_distr_cont_get_pdfparams ( const UNUR_DISTR *distr, const double **params )
{
  static int(*funct)(const UNUR_DISTR *, const double **) = NULL;
  
  if (funct == NULL)
    funct = (int(*)(const UNUR_DISTR *, const double **))
      R_GetCCallable("Runuran", "cont_params");
      
  return funct(distr, params);
}

/*---------------------------------------------------------------------------*/
