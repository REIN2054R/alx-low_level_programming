#include "main.h"

/**
 *fibo - starting point
 *@i: long
 *@j: long
 *@k: long again
 *Return: NADA
*/

void	fibo(long i, long j, long k)
{
	if (k == 50)
		return;
	printf("%ld", j);
	if (k != 49)
		printf(", ");
	fibo(j, i + j, k + 1);
}

/**
 *main - Strtng point
 *Return: 0 always
*/

int main(void)
{
	long i;
	long j;
	long k;

	i = 1;
	j = 2;
	k = 2;
	printf("%ld, %ld, ", i, j);
	fibo(j, i + j, k);
	printf("\n");
	return (0);
}
