#include "main.h"
/**
 *factorial - return the fact of a namber
 *@n: the num to get the number
 *Return: the fact
*/
int factorial(int n)
{
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
	return (NULL);
}
