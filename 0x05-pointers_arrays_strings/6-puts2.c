#include "main.h"

/**
 *puts2 - print odds
 *@str: the str to print
 *return: no return
*/

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		printf("%c", str[i]);
		i = i + 2;
	}
	printf("\n");
}
