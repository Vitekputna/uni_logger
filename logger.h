#pragma once

#include <string>
#include <fstream>

#define INFO 1
#define DEBUG 2
#define ERROR 0

#define CONSOLE false
#define LOGFILE true

#define RED(X) "\033[1;31m" + X + "\033[0m"
#define YELLOW(X) "\033[1;33m" + X + "\033[0m"
#define BLUE(X) "\033[1;34m" + X + "\033[0m"

class logger
{
    private:
    //default cases for log output
    static std::string info_label;
    static std::string debug_label;
    static std::string error_label;

    //default output file path
    static std::string output_file_path;

    static char log_level;

    //write log to logfile
    static void write_log(std::string message);

    public:
    static void log(std::string message, char message_type = INFO, bool write_file = CONSOLE);
    static void clear();
    static void change_log_file(std::string new_file_path);
    static void change_log_level(char new_log_level);
};