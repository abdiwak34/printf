#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    int count;
    const char *c;
    va_start(args, format);
    count = 0;

    for (c = format; *c != '\0'; c++) {
        if (*c == '%') {
            c++;
            switch (*c) {
                case 'c': {
                    int ch = va_arg(args, int);
                    putchar(ch);
                    count++;
                    break;
                }
                case 's': 
			  {
                    const char *str = va_arg(args, const char *);
                    while (*str != '\0') {
                        putchar(*str);
                        str++;
                        count++;
                    }
                    break;
                }
		case 'd':
		case 'i':
			  {
				  int num = va_arg(args, int);
				  _putchar(num);
				  count++;
				  break;
			  }
                case '%': {
                    putchar('%');
                    count++;
                    break;
                }
                default:
                    break;
            }
        } else {
            putchar(*c);
            count++;
        }
    }

    va_end(args);

    return count;
}
