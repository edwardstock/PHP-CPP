/**
 *  Streams.h
 *
 *  Just like the standard std::cout and std::cerr objects to output data, you
 *  can use similar stream objects for outputting data to PHP. Php::out is the
 *  C++ equivalent of the PHP echo() function, and Php::err() is the C++ stream
 *  that behaves like calling trigger_error() from PHP.
 *
 *  Php::out << "this is example text" << std::endl;
 *  Php::err << "this is an error message" << std::endl;
 *
 *  @author Emiel Bruijntjes <emiel.bruijntjes@copernica.com>
 *  @copyright 2014 Copernica BV
 */

#if HAS_CXX11_THREAD_LOCAL
#define ATTRIBUTE_TLS thread_local
#elif defined (__GNUC__)
#define ATTRIBUTE_TLS
#elif defined (_MSC_VER)
#define ATTRIBUTE_TLS __declspec(thread)
#else // !C++11 && !__GNUC__ && !_MSC_VER
#error "Define a thread local storage qualifier for your compiler/platform!"
#endif

/**
 *  Set up namespace
 */
namespace Php {

/**
 *  Define the out and err objects
 */
extern PHPCPP_EXPORT std::ostream out;
extern PHPCPP_EXPORT std::ostream error;
extern PHPCPP_EXPORT std::ostream notice;
extern PHPCPP_EXPORT std::ostream warning;
extern PHPCPP_EXPORT std::ostream deprecated;

/**
 *  End namespace
 */
}

