#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all its parameter
 * @n: number of arguments
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nat;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(nat, n);
	for (i = 0; i < n; i++)
	{
		va_arg(nat, int);
	}
	va_end(nat);
	return (sum);

}
