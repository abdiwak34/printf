#include "main.h"
#include <stdio.h>
int custom_print(const char* format,va_list args)
{
	int count = 0;
	while(*format != '\0')
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
				char* str = va_arg(args, char*);
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
