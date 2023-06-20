#include "main.h"


/**
 *get_len - get lengh
 *@num: num to len
 *Return: thte actual lengh
*/

int get_len(unsigned long num)
{
	int l;

	l = 0;
	if (!num)
		return (1);
	while (num)
	{
		num /= 10;
		l += 1;
	}
	return (l);
}

/**
 *main - Starting Point
 *Return: Always 0
*/

int main(void)
{
	int c = 1;
	int z = 0;
	unsigned long f1 = 1;
	unsigned long f2 = 2;
	unsigned long sum1 = 0;
	unsigned long MAX = 1000000000;
	unsigned long d1 = 0;
	unsigned long d2 = 0;
	unsigned long sum2 = 0;

	while (c <= 98)
	{
		if (d1 > 0)
			printf("%lu", d1);
		z = get_len(MAX) - 1 - get_len(f1);
		while (d1 > 0 && z > 0)
		{
			printf("%d", 0);
			z--;
		}
		printf("%lu", f1);

		sum1 = (f1 + f2) % MAX;
		sum2 = (f1 + f2) / MAX + d1 + d2;
		f1 = f2;
		d1 = d2;
		f2 = sum1;
		d2 = sum2;
		if (c != 98)
			printf(", ");
		c++;
	}
	printf("\n");
	return (0);
}


