#include "main.h"

/**
 *reverse_array - reverse array of int
 *@a: the array
 *@n: the array size
 *Return: NADA
*/

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;
	while (i < n - 1)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		i++;
		n--;
	}
}
