#include "main.h"

/**
 *print_to_98 - print numebr until we meet 98
 *@n: starting nbr
 *Return : no return
 */

void	print_to_98(int n)
{
	if (n <= 98)
		while (n < 99)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	else if (n >= 98)
		while (n > 97)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	printf("\n");
}
