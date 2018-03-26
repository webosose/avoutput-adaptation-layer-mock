// @@@LICENSE
//
//      Copyright (c) 2017 LG Electronics, Inc.
//
// Confidential computer software. Valid license from LG required for
// possession, use or copying. Consistent with FAR 12.211 and 12.212,
// Commercial Computer Software, Computer Software Documentation, and
// Technical Data for Commercial Items are licensed to the U.S. Government
// under vendor's standard commercial license.
//
// LICENSE@@@


#ifndef LOGGING_H
#define LOGGING_H

#include <string>
#include <exception>

#include <PmLogLib.h>

extern PmLogContext avalLogContext;
#define LOG_CRITICAL(msgid, kvcount, ...) \
	PmLogCritical(avalLogContext, msgid, kvcount, ##__VA_ARGS__)

#define LOG_ERROR(msgid, kvcount, ...) \
	PmLogError(avalLogContext, msgid, kvcount,##__VA_ARGS__)

#define LOG_WARNING(msgid, kvcount, ...) \
	PmLogWarning(avalLogContext, msgid, kvcount, ##__VA_ARGS__)

#define LOG_INFO(msgid, kvcount, ...) \
	PmLogInfo(avalLogContext, msgid, kvcount, ##__VA_ARGS__)

#define LOG_DEBUG(fmt, ...) \
	PmLogDebug(avalLogContext, "%s:%s() " fmt, __FILE__, __FUNCTION__, ##__VA_ARGS__)

#define LOG_ESCAPED_ERRMSG(msgid, errmsg) \
    do { \
    gchar *escaped_errtext = g_strescape(errmsg, NULL); \
     LOG_ERROR(msgid, 1, PMLOGKS("Error", escaped_errtext), ""); \
    g_free(escaped_errtext); \
    } while(0)


class FatalException : public std::exception
{
public:
	FatalException(const char *file, int line, const char* format, ...)
	{

	}
	const char* what() const noexcept override;

private:
	std::string mMessage;
};

#define THROW_FATAL_EXCEPTION(...)  throw FatalException(__FILE__, __LINE__, __VA_ARGS__)

#endif // LOGGING_H
