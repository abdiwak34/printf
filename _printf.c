#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
/**
 *_printf - is function that produces output according to a format
 *@format: is argument that out function
 *Return: always lenght of string
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count;
	va_start(args, format);
	count = strlen(format);
       	va_end(args);
	return count;
}



