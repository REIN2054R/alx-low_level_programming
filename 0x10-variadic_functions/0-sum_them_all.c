#include "variadic_functions.h"

/**
 *sum_them_all - sum numbers
 *@n: the numbers to add
 *Return: the summ of all of them
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int result;
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	result = 0;
	va_start(list, n);
	while (i < n)
	{
		result += va_arg(list, int);
		i++;
	}
	va_end(list);
	return (result);
}
