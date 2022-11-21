#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - to convert a binary number to an unsigned int
 * @b: the string to be converted
 *
 * Return: to converted number or 0 if there is char and NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		ans <<= 1;
		ans += b[i] - '0';
		i++;
	}
	return (ans);
}
