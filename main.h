#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>


int _printf(const char *format, ...);
int char_handle(int data);
int str_handle(char *str);

int digit_handle(int data, void *buffer);
int int_handle(int data, void *buffer);
int int_to_binary(unsigned int data);
int unsigned_int(unsigned int data, void *buffer);
int int_to_octal(int data);
#endif
