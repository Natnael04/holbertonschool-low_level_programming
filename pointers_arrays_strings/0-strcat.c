#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - to concatenates two strings
 *@src : source string
 *@dest : destination string
 *
 * Return: is dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	int j = strlen(src) - 1;

	for (j = 0; dest[j] != '\0'; j++)
	{

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	}
	return (dest);

}
