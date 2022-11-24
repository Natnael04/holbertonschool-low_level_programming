#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - to print n numbers separeted by separator string
 * @separator: the string to be printed between numbers
 * @n: the number of integer passed to the function
 *
 * Return: always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	va_list my_list;

	va_start(my_list, n);
	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(my_list, int));

		if (counter != n - 1)
			printf("%s", separator);
		else
			printf("\n");
	}
	va_end(my_list);

}
