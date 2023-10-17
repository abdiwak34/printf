#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int count = 0;
    while (*format != '\0') {
        if (*format == '%') {
            format++; 

<<<<<<< HEAD
		while (*str)
		if (c != '%')
		{
			putchar(*str++);
			putchar(c);
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
	
=======
	}
		else
		{
			c = *format++;
			if (c == 'c')
			{
				char ch = (char)va_arg(args, int);
=======
            if (*format == 'c') {
                int c = va_arg(args, int);
                putchar(c);
                count++;
            } else if (*format == 's') {
                char* str = va_arg(args, char*);
                while (*str != '\0') {
                    _putchar(*str);
                    count++;
                    str++;
                }
            } else if (*format == '%') {
                _putchar('%');
                count++;
            }
        } else {
            _putchar(*format);
            count++;
        }
>>>>>>> c380c2e1314497499344fa2944f60433b0343709

        format++;
    }

    va_end(args);

    return count;
}
