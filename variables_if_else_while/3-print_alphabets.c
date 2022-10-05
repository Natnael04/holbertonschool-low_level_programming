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
	char m, n;

	n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	m = 'A';
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
