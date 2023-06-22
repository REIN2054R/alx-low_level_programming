#include "main.h"

/**
 *main - Starting Point
 *Return: NADA
*/

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (!(i % 3) && !(i % 5))
			printf("FizzBuzz");
		else if (!(i % 3))
			printf("Fizz");
		else if (!(i % 5))
			printf("Buzz");
		else
			printf("%d", i);
		printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
