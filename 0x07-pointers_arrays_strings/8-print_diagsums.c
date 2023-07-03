#include "main.h"

/**
 *print_diagsums - sum 2 diag
 *@a: array
 *@size: the size of the array, the array are fucked
 *, the ydont end withthe /0
 *Return: Nada
*/

void print_diagsums(int *a, int size)
{
	int num1;
	int num2;
	int i;

	num1 = 0;
	num2 = 0;
	i = 0;
	while (i < size)
	{
		num1 += a[i * (size + 1)];
		num2 += a[(i + 1) * (size - 1)];
		i++;
	}
	printf("%d, %d\n", num1, num2);
}
