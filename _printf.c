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
	int count;

	count = 0;
	va_start(args, format);
	while((ch = *format++) != '\n')
	{
	if(ch == '%')
	{
		switch(ch)
		{
		int cha;
		const char value;
		case 'c':
			cha = va_arg(args, int);
			_putchar(cha);
			break;
		case 's':
			value = va_arg(args, const char*);
			while(*value != '\0')
			{
				_putchar(value);
				count++;
			}
			break;
		case '%':
			_putchar('%');
			break;
			count++;

		}
	}
	else
	{
	putchar(ch);
	count++;
	}
	va_end(args);
	return count;
}
