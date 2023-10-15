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
	va_start(args, format);

	int count = 0;
	const char *c;
	for( c = format; *c != '\n'; c++)
	{
		if(*c == '\n')
		{
			c++;
		switch(*c)
		{
			case 'c':
				int ch = va_arg(args, int);
				_putchar(ch);
				count++;
				break;
		}
			case 's':
		{
			const char *str = va_arg(args, const char *);
			while (*str != '\n')
			{
				_putchar(*str);
				str++;
			}
			break;
		}
			default:
		{
			break;
		}
		}
		else
		{
			_putchar(*c);
			count++;
		}
		}
	va_end(args);
	return count;
}
