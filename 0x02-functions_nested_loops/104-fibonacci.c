#include "main.h"

/**
 *main - Starting Point
 *Return: Always 0
*/

int main(void)
{
	int k;
	unsigned long a;
	unsigned long b;
	unsigned long tmp;

	a = 0;
	b = 1;
	k = 2;
	printf("%lu, %lu, ", a, b);
	while (k < 98)
	{
		tmp = b;
		b = a + b;
		a = tmp;
		printf("%lu", b);
		if (k != 97)
			printf(", ");
		k++;
	}
	printf("\n");
	return (0);
}
