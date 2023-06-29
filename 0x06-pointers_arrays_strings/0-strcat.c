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

	i = 0;
	while (dest[i])
		i++;
	while (src[i])
	{
		dest[i] = src[i};
		i++;
	}
	dest[i] = 0;
	return (dest);
}
