#include "main.h"

/**
 *jack_bauer - starting Point
 *
 *Return : NADA
*/

void	jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	c = 0;
	d = 0;
	while (a < 3)
	{
		b = 0;
		while (b <= 9)
		{
			if (a == 2 && b == 4)
				return;
			c = 0;
			while (c < 6)
			{
				d = 0;
				while (d <= 9)
				{
					printf("%d%d:%d%d\n", a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
