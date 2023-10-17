#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
<<<<<<< HEAD
	
=======
	va_list arr;
	int i = 0, count = 0;

	if (!format)
		return (-1);
	va_start(arr, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			else if (format[i + 1] == '%')
			{
				_putchar('%')
