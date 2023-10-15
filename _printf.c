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
	char ch;

	count = 0;
	va_start(args, format);
	while((ch = *format++) != '\n')
	{
	if(ch == '%')
	{
	switch(ch)
	{
		case 'c':
			int cha;
			cha = va_arg(args, int);
			_putchar(cha);
			break;
		case 's':
			const char* value;
			value = va_arg(args, const char*);
			while(value != '\n')
			{
				_putchar(value);
				count++;
			}
			break;
		case '%':
			_putchar('%');
			break;

	}

       	va_end(args);
	return count;
}



