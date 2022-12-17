#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - to print strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char * name;
	va_list na;

	va_start(na, separator);

	for (i = 0; i < n; i++)
	{
		printf("%s" va_arg(na, char *)

		if (separator == NULL)
			printf(" ");
		else if (str[i] == NULL)
			printf("nil");
		else
			printf("\n");
	}
	va_end(na);

}
