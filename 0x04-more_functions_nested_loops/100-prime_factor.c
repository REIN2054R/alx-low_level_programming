#include "main.h"



/**
 *main - starting point
 *Return: 0 always
*/

int main(void)
{
	unsigned long a;
	unsigned long i;
	unsigned long ret;

	a = 612852475143;
	i = 2;
	ret = 1;
	while (i <= a)
	{
		if (!(a % i))
		{
			a = a / i;
			if (i > ret)
				ret = i;
			i = 2;
		}
		else
			i++;
	}
	if (ret > a)
		printf("%lu\n", ret);
	else
		printf("%lu\n", a);
	return (0);
}
