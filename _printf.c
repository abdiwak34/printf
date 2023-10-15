#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdarg.h>
/**
 *_printf - is function that produces output according to a format
 *@format: is argument that out function
 *Return: always lenght of string
 */
int _printf(const char *format, ...)
{
	va_list args;
	int result;

	va_start(args, format);
	result = vprintf(format, args);
	va_end(args);

	return result;
}
