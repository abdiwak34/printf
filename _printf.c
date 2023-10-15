#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <string.h>
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
	count = vprintf(format, args);
       	va_end(args);
	return count;
}



