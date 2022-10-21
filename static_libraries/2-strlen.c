#include "main.h"
#include <stdio.h>

/**
 * _strlen - to return the length of a string
 *@s : first string length
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
