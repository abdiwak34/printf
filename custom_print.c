#include "main.h"
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
				char* str;
				*str = va_arg(agrs, char*);
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
	return (count);
}
