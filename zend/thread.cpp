/**
 * thread.cpp
 *
 * This class helps to work with multithreaded environment in php
 *
 * @author Eduard Maximovich <edward.vstock@gmail.com>
 * @copyright 2016 Copernica B.V.
 */

#include "includes.h"

namespace Php
{

/**
 * single call protection
 */
thread_local bool Thread::prepared;

void Thread::prepare()
{
    if (prepared) {
        return;
    }
    PHPCPP_TSRMLS_FETCH();
    zend_activate();
    prepared = true;
}

void Thread::free()
{
    if (!prepared) {
        return;
    }

    PHPCPP_TSRMLS_FETCH();
    zend_deactivate();
    prepared = false;
}

bool Thread::isPrepared()
{
    return prepared;
}

}

