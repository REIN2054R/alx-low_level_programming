#include <stdio.h>

/**
 *main - Start point
 *
 *
 *Return: 0
*/

int main(void)
{
	char *str;
	int i;

	i = -1;
	str = "0123456789abcdef";
	while (str[++i])
		putchar(str[i]);
	putchar('\n');
	return (0);
}
