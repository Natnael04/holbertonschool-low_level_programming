#include <stdio.h>
#include <string.h>
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
	char *str;
	unsigned int index;
	va_list na;

	va_start(na, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(na, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(na);

}
