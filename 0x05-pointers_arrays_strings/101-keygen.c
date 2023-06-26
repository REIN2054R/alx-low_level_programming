#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - starting point
 *return: 0 always
*/

int main(void)
{
	int ret;
	char c;

	srand(time(NULL));
	while (ret <= 2645)
	{
		c = rand() % 128;
		ret += c;
		putchar(c);
	}
	putchar(2772 - ret);
	return (0);
}
