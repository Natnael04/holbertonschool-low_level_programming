#include "main.h"
#include <stdio.h>

/**
 * rev_string - to reverse a string
 *@s : the string to be modified
 *
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int length, c, i;
	char *begin, *end, temp;

	for (length = 0; s[i] != '\0'; i++)
		length++;

	for (c = 0 ; c < (length - 1) ; c++)
		end++;

	for (c = 0 ; c < length / 2 ; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
