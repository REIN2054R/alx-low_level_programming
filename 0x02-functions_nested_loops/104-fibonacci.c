#include "main.h"


/**
 *get_len - get lengh
 *
 *Retrn: thte actual lengh
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
	int c;
	int z;
	unsigned long f1;
	unsigned long f2;
	unsigned long sum1;
	unsigned long MAX;
	unsigned long d1;
	unsigned long d2;
	unsigned long sum2;

	f1 = 1;
	f2 = 2;
	MAX= 1000000000;
	d1 = 0;
	d2 = 0;
	sum2 = 0;
	c = 1;
	while(c <= 98)
	{
		if (d1 > 0)
		       printf("%lu", d1);
		z = get_len(MAX) - 1 - get_len(d1);
		while(d1 > 0 && z > 0)
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


