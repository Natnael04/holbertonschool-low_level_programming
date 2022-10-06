#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */

int main(void)
{
	int n;

	n = 0;
	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
		putchar(n);
	}
	putchar('\n');
	return (0);
}
