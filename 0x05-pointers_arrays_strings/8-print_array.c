#include "main.h"
/**
 *print_array - print and array of int
 *
 *@a: the arra
 *@n: his size
 *return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
