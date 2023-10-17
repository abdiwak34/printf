#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdarg.h>
/**
 *_printf - is function that return lenght
 *@format: is first parameter
 *Return: always count
 */
int _printf(const char *format, ...)
{
	va_list args;
	int num;

	va_start(args, format);
	num = custom_print(format, args);
	va_end(args);
	return (num);
}
/**
 *custom_print - is function that check input type
	@@ -25,48 +25,7 @@ int _printf(const char *format, ...)
 */
int custom_print(const char *format, va_list args)
{
	int count;
        count = vprintf(format, args);
	return (count);
}
