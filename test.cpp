#include "logger.h"

int main()
{
    logger::change_log_level(DEBUG);
    logger::change_log_file("kokos.log");
    logger::clear();

    logger::log("This is a debug line blablabla",DEBUG);
    logger::log("This is just an info",INFO);
    logger::log("Fuck something went wrong an error has ocured",ERROR);

    return 0;
}