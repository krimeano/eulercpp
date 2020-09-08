#!/bin/bash

DST_FOLDER=./bin

rm -rf $DST_FOLDER
mkdir $DST_FOLDER
g++ -c -o $DST_FOLDER/solution1.o solution1.cpp
g++ -c -o $DST_FOLDER/euler1.o euler1.cpp
g++ -o $DST_FOLDER/euler1 $DST_FOLDER/euler1.o $DST_FOLDER/solution1.o -lm
rm $DST_FOLDER/solution1.o $DST_FOLDER/euler1.o
