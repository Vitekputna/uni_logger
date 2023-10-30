#include "logger.h"

#include <iostream>
#include <fstream>


std::string logger::info_label = "info:\t";
std::string logger::debug_label = "debug:\t";
std::string logger::error_label = "error:\t";
std::string logger::output_file_path = "output.log";

void logger::log(std::string message, int message_type, bool file_write)
{
    switch (message_type)
    {
    case INFO:
        //print info line
        message = info_label + message;
        std::cout << message + "\n";
        break;

    case DEBUG:
        //print debug line
        message = debug_label + message;
        std::cout << YELLOW(message) + "\n";
        break;
    
    case ERROR:
        //print error line
        message = error_label + message;
        std::cout << RED(message) + "\n";
        break;
    
    default:
        break;
    }

    if(file_write) {write_log(message);}
}

void logger::write_log(std::string message)
{
    auto stream = std::ofstream(output_file_path,std::ios_base::app);
    stream << message + "\n";
}

void logger::clear()
{
    auto stream = std::ofstream(output_file_path, std::ofstream::out | std::ofstream::trunc);
    stream.close();
}

void logger::change_log_file(std::string new_file_path)
{
    output_file_path = new_file_path;
}