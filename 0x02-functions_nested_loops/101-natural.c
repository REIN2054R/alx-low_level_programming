#include "main.h"

/**
 *main - starting Point
 *
 *Return: 0 ALWAYS
 */

int main(void)
{
	int ret;
	int i;

	ret = 0;
	i = 1;
	while (i < 1024)
	{
		if ((i % 3) || (i % 5))
			ret = ret + i;
		i++;
	}
	printf("%d\n", ret);
	return (0);
}
