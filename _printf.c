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
	{
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

				printf_char(ch);
				count++;
			}
			else if (c == 's')
			{
				const char *str = va_arg(args, const char *);

				while (*str)
				{
					putchar(*str++);
					count++;
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
	return (count);
}
