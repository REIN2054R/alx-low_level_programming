#include "main.h"

/**
 *argstostr - concatenates all args
 *@ac: nbr of raguments
 *@av: the arguments
 *Return: a string with alla arguments
*/

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int count;
	char *new;

	i = 0;
	count = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			j++;
			count++;
		}
		count++;
		i++;
	}
	new = (char *)malloc(sizeof(char) * (count + 1));
	if (!new)
		return (NULL);
	i = 0;
	count = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			new[count] = av[i][j];
			count++;
			j++;
		}
		new[count] = '\n';
		count++;
		i++;
	}
	new[count] = 0;
	return (new);
}

