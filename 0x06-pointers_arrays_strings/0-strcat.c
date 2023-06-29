#include "main.h"

/**
 *_strcat - cat a string srcinto a string dst
 *
 *@dest: destination
 *@src: the srource
 *Return: new dest
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
