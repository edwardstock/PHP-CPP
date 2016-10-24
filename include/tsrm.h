/**
 * tsrm.h
 *
 * This file defines macro for using new Zend TSRM API
 *
 * @author Eduard Maximovich <edward.vstock@gmail.com>
 * @copyright 2016 Copernica B.V.
 */

#ifndef PHPCPP_TSRM_H // include guard
#define PHPCPP_TSRM_H

#ifdef ZTS
/**
 * Fetches the requested resource (eg zend_executor_globals, zend_compiler_globals et cetera) for the current thread
 * @see TSRM/TSRM.h
 */
#define PHPCPP_TSRMLS_FETCH() ts_resource(0)
#else
// non-zts
#define PHPCPP_TSRMLS_FETCH()
#endif // ZTS

#endif //PHPCPP_TSRM_H
