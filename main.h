#ifndef _MAIN_
#define _MAIN_
int _printf(const char *format, ...);
int _putchar(char);
int printf_char(va_list arr);
int printf_string(va_list s);
typedef struct formt
{
	char ch;
	int (*func)(va_list);
} frmt
#endif
