#include "3-calc.h"


/**
 *main - create a calculator
 *@ac: nbr of args
 *@av: args
 *Return: 0 normale cases , 98 when nbr of args os wrong ,
 * 99 if a wrong operator exist, 100  *if we try to divide or module on 0
*/

int main(int ac, char **av)
{
	int b;
	int a;
	int (*fct)(int, int);

	if (ac == 4)
	{
		a = atoi(av[1]);
		b = atoi(av[3]);

		fct = get_op_func(av[2]);
		if (!fct)
			return ((void)printf("Error\n"), 99);
		if (b == 0 && (av[2][0] == '/' || av[2][0] == '%'))
			return ((void)printf("Error\n"), 100);
		printf("%d\n", fct(a, b));
		return (0);
	}
	return ((void)printf("Error\n"), 98);
}
