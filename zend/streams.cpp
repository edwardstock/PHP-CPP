/**
 *  Streams.cpp
 *
 *  Implementation of the streams
 *
 *  @author Emiel Bruijntjes <emiel.bruijntjes@copernica.com>
 *  @copyright 2014 Copernica BV
 */
#include "includes.h"

/**
 *  Set up namespace
 */
namespace Php {

/**
 *  Some static buffers for writing data
 *  @var StreamBuf
 */
static ATTRIBUTE_TLS StreamBuf bufOut        (0);
static ATTRIBUTE_TLS StreamBuf bufError      (E_ERROR);
static ATTRIBUTE_TLS StreamBuf bufWarning    (E_WARNING);
static ATTRIBUTE_TLS StreamBuf bufNotice     (E_NOTICE);
static ATTRIBUTE_TLS StreamBuf bufDeprecated (E_DEPRECATED);

/**
 *  Create the actual steams
 *  @var std::ostream
 */
	std::ostream out               (&bufOut);
	std::ostream error             (&bufError);
	 std::ostream warning           (&bufWarning);
	 std::ostream notice            (&bufNotice);
	 std::ostream deprecated        (&bufDeprecated);

/**
 *  End namespace
 */
}

