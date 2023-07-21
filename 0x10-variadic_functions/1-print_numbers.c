#include "variadic_functions.h"

/**
 *print_numbers - print numbers
 *@separator: the string to be printed between numbers
 *@n: the last printable
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	i = 0;
	va_start(list, n);
	while (i < n)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
		i++;
	}
	va_end(list);
	printf("\n");
}
