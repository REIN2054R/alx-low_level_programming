#include "variadic_functions.h"

/**
 *print_strings - same as the old one , diff it print strings
 *@separator: the separator
 *@n: number of input
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	i = 0;
	va_start(list, n);
	while (i < n)
	{
		str = va_arg(list, char *);
		if (!str)
			printf("nil");
		else
			printf("%s", str);
		if ((*separator != 0) && (i != n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(list);
}
