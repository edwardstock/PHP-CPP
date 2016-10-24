/**
 * thread.h
 *
 * This class helps to work with multithreaded environment in php
 *
 * @author Eduard Maximovich <edward.vstock@gmail.com>
 * @copyright 2016 Copernica B.V.
 */

#ifndef PHPCPP_THREAD_H
#define PHPCPP_THREAD_H

namespace Php
{

class PHPCPP_EXPORT Thread
{
private:
    /**
     * single call protection
     */
    static thread_local bool prepared;
public:
    /**
     * Activating for current thread all zend globals and store it to tls cache
     * If not do this, all globals will not be available like executor_globals, compiler_globals et cetera
     */
    static void prepare();

    /**
     * Deallocate local storage with zend globals
     */
    static void free();

    /**
     *
     * @return bool
     */
    static bool isPrepared();
};

}

#endif // PHPCPP_THREAD_H