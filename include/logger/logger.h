#ifndef LOGGER_TOP_H
#define LOGGER_TOP_H

#include <stdint.h>
#include <stdio.h>
#include <syslog.h>
#include <unistd.h>

#define LOGGER_DEBUG   0x01
#define LOGGER_INFO    0x02
#define LOGGER_WARNING 0x03
#define LOGGER_ERROR   0x04

/* TODO(valery): implement variadic print */

/**
 * @attention Internal functions, do not use them directly
 */

static inline void _log_debug(const char* msg) {
#ifndef NDEBUG
  fprintf(stdout, "[D]: %s\n", msg);
#else
  fprintf(stdout, " ");
#endif
}

static inline void _log_info(const char* msg) {
  fprintf(stdout, "[I]: %s\n", msg);
}

static inline void _log_warning(const char* msg) {
  fprintf(stdout, "[W]: %s\n", msg);
}

static inline void _log_error(const char* msg) {
  fprintf(stderr, "[E]: %s\n", msg);
}

/* END of internal functions */

static inline void logger(const unsigned char level, const char* msg) {
  switch (level) {
    case LOGGER_DEBUG:
      _log_debug(msg);
      break;
    case LOGGER_INFO:
      _log_info(msg);
      break;
    case LOGGER_WARNING:
      _log_warning(msg);
      break;
    case LOGGER_ERROR:
      _log_error(msg);
      break;

    default:
      _log_warning("Unknown logger level");
      break;
  }
}

#endif