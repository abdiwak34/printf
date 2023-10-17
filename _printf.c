#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdarg.h>
/**
 *_printf - is function that return lenght
 *@format: is first parameter
 *Return: always count
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count;

	va_start(args, format);
	count = vprintf(format, args);
	va_end(args);
	return (count);
}
