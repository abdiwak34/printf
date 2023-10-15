#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	int count = 0;
	char c;
    va_list args;
    va_start(args, format);


    while ((c = *format++) != '\0')
    {
        if (c != '%')
        {
            putchar(c);
            count++;
        }
        else
        {
            c = *format++;
            switch (c)
            {
                case 'c':
                    {
                        char ch = (char)va_arg(args, int);
                        putchar(ch);
                        count++;
                        break;
                    }
                case 's':
                    {
                        const char *str = va_arg(args, const char *);
                        while (*str != '\0')
                        {
                            putchar(*str++);
                            count++;
                        }
                        break;
                    }
                case '%':
                    {
                        putchar('%');
                        count++;
                        break;
                    }
                default:
                    {
                        putchar('%');
                        putchar(c);
                        count += 2;
                        break;
                    }
            }
        }
    }

    va_end(args);
    return count;
}
