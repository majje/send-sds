#ifndef MIDISDS_LOG_H
#define MIDISDS_LOG_H

#include <stdio.h>

typedef enum {
    midisds_log_level_error,
    midisds_log_level_warn,
    midisds_log_level_info,
    midisds_log_level_debug,
    midisds_log_level_trace
} midisds_log_level;

void midisds_set_log_level(midisds_log_level level);
void midisds_log_error(const char *str);
void midisds_log_warn(const char *str);
void midisds_log_info(const char *str);
void midisds_log_debug(const char *str);
void midisds_log_trace(const char *str);

#endif
