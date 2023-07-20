#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - print own main
 *
 *@ac: nbr of args
 *@av: whatare those args
 *Return: Always 0
*/

int main(int ac, char **av)
{
	int a;
	char *str;
	int i;

	i = 0;
	if (ac != 2)
		return ((void)printf("Error\n"), 1);
	a = atoi(av[1]);
	if (a < 0)
		return ((void)printf("Error\n"), 2);
	str = (char *)main;
	while (i < a)
	{
		if (i == a - 1)
		{
			printf("%02hhx\n", str[i]);
			break;
		}
		printf("%02hhx ", str[i]);
		i++;
	}
	return (0);
}
