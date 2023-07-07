#include <stdio.h>
/**
 *main - starting point , create a progamem that give he s name
 *@ac: var num
 *@av: list of strings
 *Return: Nada, just print the name pls
*/

int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", av[0]);
	return (0);
}
