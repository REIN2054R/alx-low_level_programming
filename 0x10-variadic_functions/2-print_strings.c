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
		if (!separator && str)
			printf("%s", str);
		else if (separator && !str && i == 0)
			printf("nil");
		else if (separator && str && i == 0)
			printf("%s", str);
		else if (separator && !str)
			printf("%snil", separator);
		else
			printf("%s%s", separator, str);
		i++;
	}
	printf("\n");
	va_end(list);
}
