#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...)
{
	int i, length;
	va_list args;

	i = 0;
	length=0;
	length=strlen(format);
	va_start(args, format);
	if(format[i] != '%')
	{
		_putchar(format[i]);
	}
	return (length);
}



