#include <stdio.h>

/**
 *main - start point , give num of args
 *@ac: nbr of args
 *@av: won't work with it
 *Return: nada
*/

int main(int ac, char **av)
{
	(void)av;
	printf("%d\n", ac - 1);
	return (0);
}
