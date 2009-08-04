#ifndef _DFU_COMMON_H_
#define _DFU_COMMON_H_

#include "log.h"

extern Logger g_Logger;
extern QString h_sLastError;

//#define DEBUG(...)  dfu_debug( __FILE__, __FUNCTION__, __LINE__, DFU_DEBUG_THRESHOLD, __VA_ARGS__ )
//#define TRACE(...)  dfu_debug( __FILE__, __FUNCTION__, __LINE__, DFU_TRACE_THRESHOLD, __VA_ARGS__ )
//#define MSG_DEBUG(...)  dfu_debug( __FILE__, __FUNCTION__, __LINE__, DFU_MESSAGE_DEBUG_THRESHOLD, __VA_ARGS__ )
#define DEBUG_MSG(s)	    LOG_MSG( g_Logger, LogTypes::Debug, s )
#define ERROR_MSG(s)	    LOG_MSG( g_Logger, LogTypes::Error, s )

#endif