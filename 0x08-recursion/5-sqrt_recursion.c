#include "main.h"
/**
 *_sqrt_sqrt - sqrt the recursed one
 *@n: the n to find her sqrt
 *@i: the number to test
 *Return: the sart
*/
int _sqrt_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_sqrt(n, i + 1));
}
/**
 *_sqrt_recursion - sqrt
 *@n: the number to find the sqrt
 *Return: the n sqrted
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_sqrt(n, 0));
}
