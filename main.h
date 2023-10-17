#ifndef _MAIN_
#define _MAIN_

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char);
int (*comp_vargs(const char a))(va_List);
int  print_bin(va_list arr);
int print_num(va_list n);
int print_string(va_list s);
int _strlen(const char *s);
int _strcmp(const char *s, const char *t);
int print_char(va_list arr);

#endif
