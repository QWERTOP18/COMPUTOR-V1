#pragma once

#define LOG_LEVEL_NONE 0
#define LOG_LEVEL_ERROR 1
#define LOG_LEVEL_WARN 2
#define LOG_LEVEL_INFO 3
#define LOG_LEVEL_DEBUG 4

void custom_log(int level, const char *file, int line, const char *func, const char *fmt, ...);

#define LOG_ERROR(fmt, ...) custom_log(LOG_LEVEL_ERROR, __FILE__, __LINE__, __func__, fmt, ##VA_ARGS);
