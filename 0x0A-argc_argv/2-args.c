#include <stdio.h>

/**
 *main - starting point , print all args
 *@ac: nbr of args
 *@av: the args
 *Return: Nada
*/

int main(int ac, char **av)
{
	int i;

	i = -1;
	while (++i < ac)
		printf("%s\n", av[i]);
	return (0);
}
