/**
 *  Includes.h
 * 
 *  All includes for compiling the common module files of PHP-CPP library
 * 
 *  @author Emiel Bruijntjes <emiel.bruijntjes@copernica.com>
 *  @copyright 2014 Copernica BV
 */
#if HAS_CXX11_THREAD_LOCAL
#define ATTRIBUTE_TLS thread_local
#elif defined (__GNUC__)
#define ATTRIBUTE_TLS __thread
#elif defined (_MSC_VER)
#define ATTRIBUTE_TLS __declspec(thread)
#else // !C++11 && !__GNUC__ && !_MSC_VER
#error "Define a thread local storage qualifier for your compiler/platform!"
#endif
/**
 *  Standard C and C++ libraries
 */
#include <sstream>

/**
 *  Public include files
 */
#include "../include/visibility.h"
#include "../include/modifiers.h"

/**
 *  Generic implementation header files
 */
#include "streambuf.h"
