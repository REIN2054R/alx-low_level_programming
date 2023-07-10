#include "main.h"

/**
 *words_nbr - count words to allocate
 *@str: the str to divide
 *Return: the numbre of words
*/

int	words_nbr(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != ' ')
			i++;
	}
	return (count);
}

/**
 *delete_all - free everything
 *@str: the double inter to free
 *@i: where did it count exactely
 *Return: NADA
*/

void	delete_all(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

/**
 *strtow - split a function into words
 *@str: the big string to split
 *Return: double pointer char
*/

char **strtow(char *str)
{
	char **new;
	int count;
	int i;
	int j;
	int k;

	if (!str || str[0] == 0)
		return (NULL);
	count = words_nbr(str);
	if (count <= 0)
		return (NULL);
	new = (char **)malloc(sizeof(char *) * count + 1);
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i])
		{
			k = 0;
			count = i;
			while (str[i] && str[i] != ' ')
				i++;
			new[j] = (char *)malloc(sizeof(char) * (i - count + 1));
				if (!new[j])
					delete_all(new, j);
			while (str[count] && str[count] != ' ')
			{
				new[j][k] = str[count];
				count++;
				k++;
			}
			new[j][k] = 0;
		}
		j++;
	}
	new[j] = NULL;
	return (new);
}
