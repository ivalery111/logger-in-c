#include "logger/logger.h"

int main(void) {
  logger(LOGGER_DEBUG, "HelloDebug!");
  logger(LOGGER_INFO, "HelloInfo!");
  logger(LOGGER_WARNING, "HelloWarning!");
  logger(LOGGER_ERROR, "HelloError!");

  return 0;
}