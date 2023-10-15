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
<<<<<<< HEAD
	while(*format++ != '\n')
	{
	if((ch = *format) != '%')
	{
		ch++;
	}
	switch(*++format)
=======
	while ((ch = *format++) != '\0')
	{
	if (ch == '%') 
>>>>>>> d6d4670154d27da65ced530b544cd2d8b00620e5
	{
		char cha;
		const char* value;
		ch = *format++;
		switch (ch)
		{
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
		default:
			_putchar('%');
			_putchar(ch);
			count += 2;
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
<<<<<<< HEAD
}



=======
>>>>>>> d6d4670154d27da65ced530b544cd2d8b00620e5
