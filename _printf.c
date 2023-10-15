#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int count = 0;
    const char *c;

    for (c = format; *c != '\0'; c++) {
        if (*c == '%') {
            c++; // Move past the '%'

            // Handle conversion specifiers
            switch (*c) {
                case 'c': {
                    // Print a character
                    int ch = va_arg(args, int);
                    putchar(ch);
                    count++;
                    break;
                }
                case 's': {
                    // Print a string
                    const char *str = va_arg(args, const char *);
                    while (*str != '\0') {
                        putchar(*str);
                        str++;
                        count++;
                    }
                    break;
                }
                case '%': {
                    // Print a '%'
                    putchar('%');
                    count++;
                    break;
                }
                default:
                    // Invalid conversion specifier, ignore
                    break;
            }
        } else {
            // Regular character, print it
            putchar(*c);
            count++;
        }
    }

    va_end(args);

    return count;
}
