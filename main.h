#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int print_int(int n);
int print_char(char c);
int print_string(char *str);
int print_percent(char c);
int helper_printf(va_list format_list, const char format);
int _printf(const char *format, ...);


#endif
