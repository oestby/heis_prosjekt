#ifndef LOGGER_HPP
#define LOGGER_HPP
#include <stdio.h>
#include <time.h>

void logger_init(char* logfile);
void logger_close(void);
void log_info(char* msg);
void log_error(char* msg);
void log_fatal(char* msg);


#endif //LOGGER_HPP
