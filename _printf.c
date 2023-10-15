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
	char ch;

	count = 0;
	va_start(args, format);
	while((ch = *format++) != '\0')
	{
	if(ch == '%')
	{
		ch = *++format;
		switch(ch)
		{
			char cha;
			const char* value;
		case 'c':
			cha = va_arg(args, int);
			_putchar(cha);
			count++;
			break;
		case 's':
			value = va_arg(args, const char*);
			while(*value != '\0')
			{
				_putchar(*value);
				count++;
				value++;
			}
			break;
		case '%':
			_putchar('%');
			count++;
			break;

		}
	}
	else
	{
	putchar(ch);
	count++;
	}
	}
	va_end(args);
	return count;
}
