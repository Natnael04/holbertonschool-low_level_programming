#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'the programs description'
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int a, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	/* your code goes there */
	if (n == 0)
	{
		printf("%d and is 0\n", n);
	}
	else if (n > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	return (0);
}
