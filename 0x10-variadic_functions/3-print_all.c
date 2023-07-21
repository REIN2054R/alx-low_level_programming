#include "variadic_functions.h"

/**
 *print_all - print all
 *@format: a string to follow
*/

void print_all(const char * const format, ...)
{
	int i;
	va_list list;

	i = 0;
	va_start(list, format);
	while (format[i])
	{
		if (strchr(format[i],"cifs"))
	}
}
