#!/bin/bash

ls *.c
gcc -c *.c
ar rc liball.a *.o