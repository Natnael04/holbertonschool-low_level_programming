#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - to print the binary representation of a number
 * @n: the converted binary number
 *
 * Return: always 0
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	printf("%ld", n & 1);
}
