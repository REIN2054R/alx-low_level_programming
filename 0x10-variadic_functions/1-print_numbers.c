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
	whil e(i < n)
	{
		printf("%d", va_arg(list, int));
		if ((*separator != 0) && (i != n - 1))
			printf("%s", separator);
		i++;
	}
	va_end(list);
	printf("\n");
}
