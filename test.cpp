#include "logger.h"

int main()
{
    logger::clear();

    logger::change_log_file("kokos.log");

    logger::log("This is just an info",INFO);
    logger::log("This is a debug line blablabla",DEBUG,LOGFILE);
    logger::log("Fuck something went wrong an error has ocured",ERROR,LOGFILE);

    return 0;
}