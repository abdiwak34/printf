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
<<<<<<< HEAD
    va_list args;
    va_start(args, format);

    int count = 0;
    while (*format != '\0')
    {
        if (*format == '%') 
	{
            format++;
		while (*str)
		if (c != '%')
=======
	va_list args;
	int count;
	char ch;
	count = 0;
	va_start(args, format);
	while((ch = *format++) != '\0')
	{
	if(ch == '%')
	{
		ch = *format++;
		switch(ch)
>>>>>>> 4064542a6275c09164d26ab5e9be9e7b19cf231a
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
<<<<<<< HEAD
	else
	{
	putchar('%');
	putchar(c);
	count += 2;
	}
		else
		{
            if (*format == 'c') 
	    {
                int c = va_arg(args, int);
                putchar(c);
                count++;
            } else if (*format == 's') 
	    {
                char* str = va_arg(args, char*);
                while (*str != '\0') 
		{
                    _putchar(*str);
                    count++;
                    str++;
                }
            } else if (*format == '%') 
	    {
                _putchar('%');
                count++;
            }
        } else 
	{
            _putchar(*format);
            count++;
        }

        format++;
    }

    va_end(args);
=======
	}
	int result = vprintf(format, args);
	va_end(args);
	return count;
>>>>>>> 4064542a6275c09164d26ab5e9be9e7b19cf231a

	return result;
}
