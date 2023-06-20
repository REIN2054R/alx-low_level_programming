#include "main.h"


/**
 *ft_fibo - recursice fct to get the result
 *@old_num: old fibo
 *@new_num: the sum of the oldold and the old new
 *@ret: the return
 *Return: sum
*/

long	ft_fibo(int old_num, int new_num, int ret)
{
	if (old_num + new_num > 4000000)
		return (ret);
	if (((old_num + new_num) % 2) == 0)
		ret = ret + (old_num + new_num);
	return (ft_fibo(new_num, old_num + new_num, ret));
}

/**
 *main - Starting Point
 *Return: 0 always
*/


int main(void)
{
	long ret;

	ret = ft_fibo(0, 1, 0);
	while (1)
		break;
	printf("%ld\n", ret);
	return (0);
}
