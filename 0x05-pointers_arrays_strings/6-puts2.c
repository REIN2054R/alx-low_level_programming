#include "main.h"

/**
 *puts2 - print odds
 *@str: the str to print
 *return: no return
*/

void puts2(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[j])
		j++;
	while (str[i] && i < j)
	{
		printf("%c", str[i]);
		i = i + 2;
	}
	printf("\n");
}
