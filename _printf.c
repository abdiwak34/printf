#include <stdio.h>
#include <stdarg.h>
#include "main.h"
int _printf(const char *format, ...)
{
	int count = 0;
	char c;
	va_list args;

	va_start(args, format);

	while (c = *format++)
	while ((c = *format++))
	{
		if (c != '%')
	if (c != '%')
	{
		putchar(c);
		count++;
	}
	else
	{
		c = *format++;
		if (c == 'c')
	{
		char ch = (char)va_arg(args, int);

		putchar(ch);
		count++;
	}
	else if (c == 's')
	{
	const char *str = va_arg(args, const char *);

		while (*str)
		{
			putchar(c);
			putchar(*str++);
			count++;
		}
		else
		{
			c = *format++;
			if (c == 'c' || c == 's' || c == '%')
			{
				char ch = (char)va_arg(args, int);
				switch(ch)
				{
					case 'c':
						printf_char(args);
					case 's':
						printf_string(args);
					case '%':
						putchar('%');
					default:
						putchar('%');
						putchar(c);
						count += 2;
				}

			}
		}
	}
	else if (c == '%')
	{
	putchar('%');
	count++;
	}
	else
	{
	putchar('%');
	putchar(c);
	count += 2;
	}
	}
	}

	va_end(args);
