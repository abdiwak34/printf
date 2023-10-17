#include "main.h"
int (*comp(const char a))(va_list)
{
	myprintf printf[] =
	{
		{'c', p_char},
		{'s', p_string},
		{'d', p_num},
		{'i', p_num},
		{'b', p_bin},
		{'\0', NULL}
	};
int i;
for(i = 0; printf[i].p != '0\'; k++)
{
	if(printf[i].p == a)
	{
		return (printf[k].func);
	}
}
return (0);
}
