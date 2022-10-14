#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - to copy the string pointed to
 *@src : the string pointed
 *@dest : the buffer pointed
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i])
		dest[j++] = src[i++];
	return (dest);
}
