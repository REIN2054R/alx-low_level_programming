#include <stdio.h>
#include <stdlib.h>

/**
 *check_av - check if it's all num or not
 *@str: the str to check
 *Return: 1 if all nbr else 0
*/

int check_av(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		i++;

	if (!str[i])
		return (1);
	return (0);
}

/**
 *main - print add
 *@ac: nbr of args
 *@av: the args
 *Return: NADA
*/

int main(int ac, char **av)
{
	int res;
	int i;

	res = 0;
	i = 1;
	while (i < ac)
	{
		if (!check_av(av[i]))
			return((void)printf("Error\n"),0);
		res += atoi(av[i]);
		i++;

	}
	printf("%d\n", res);
	return (0);
}
