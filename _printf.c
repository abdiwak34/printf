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
	count = custom_print(format, args);
	va_end(args);
	return (count);
}
/**
 *custom_print - is function that check input type
 *@format: our first parameter
 *@args: our second parameter
 *Return: count to _printf function
 */
int custom_print(const char *format, va_list args)
{
	int count = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				int c;

				c = va_arg(args, int);
				_putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);

				while (*str != '\0')
				{
					_putchar(*str);
					count++;
					str++;
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
			_putchar(*format);
		}
	}
	return (count);
}
