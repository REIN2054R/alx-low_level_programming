#include <stdio.h>
#include <stdlib.h>

/**
 *main - return a change
 *@ac: the nbr of args
 *@av: the avs
 *Return: 0 if ok 1 if not
*/

int main(int ac, char **av)
{
	int input;
	int ret;

	ret = 0;
	if (ac == 2)
	{
		input = atoi(av[ac - 1]);
		if (input <= 0)
			return ((void)printf("0\n"), 0);
		if (input / 25)
		{
			ret = (input / 25);
			input %= 25;
		}
		if (input / 10)
		{
			ret += (input / 10);
			input %= 10;
		}
		if (input / 5)
		{
			ret += (input / 5);
			input %= 5;
		}
		ret += input;
		printf("%d\n", ret);
	}
	else
		return ((void)printf("Error\n"), 1);
	return (0);
}
