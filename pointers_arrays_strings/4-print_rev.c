#include "main.h"

/**
 * print_rev - to print a string in reverse
 *@s : a string to print reverse
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{

	for (; *s != '\0'; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
