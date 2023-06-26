#include "main.h"

/**
 *rev_string - return printed string
 *
 *@s: the s to print
 *return: nada
*/

void rev_string(char *s)
{
	int i;
	int j;
	char tmp;

	i = 0;
	j = 0;
	if (!s)
	{
		write(1, "\n", 1);
		return;
	}
	while (s[i])
		i++;
	i--;
	while (j <= i)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i--;
		j++;
	}
}
