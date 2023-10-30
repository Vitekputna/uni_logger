#!/bin/sh
rm *.o
g++ -Wall -g -c logger.cpp -o logger.o
g++ -Wall -g -c test.cpp -o test.o
g++ test.o logger.o -o a.out
./a.out