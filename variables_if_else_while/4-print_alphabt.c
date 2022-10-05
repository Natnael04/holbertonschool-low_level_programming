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
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		if (n != 'q' && n != 'e')
		putchar(n);
	}

	putchar('\n');
	return (0);
}
