#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
*/
int	main(void)
{
	printf("Sizeof a char: %ld bytes(s)\n", sizeof(char));
	printf("Sizeof an int: %ld bytes(s)\n", sizeof(int));
	printf("Sizeof a long int: %ld bytes(s)\n", sizeof(long int));
	printf("Sizeof a long long int: %ld bytes(s)\n", sizeof(long long int));
	printf("Sizeof a float: %ld bytes(s)\n", sizeof(float));
	return (0);
}
