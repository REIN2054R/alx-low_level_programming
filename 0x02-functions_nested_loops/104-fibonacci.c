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
	while (k < 100)
        {
                tmp = b;
                printf("%lu", b);
                if (k != 99)
                        printf(", ");
                k++;
        }
	printf("\n");
	return (0);
}
