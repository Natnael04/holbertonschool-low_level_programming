#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a pointer allocated to newly alocated space that contain strings
 * @str: string to copy
 *
 *Return: pointer to a new(duplicate) string or NULL if error
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *a;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	i++;
	a = malloc(i * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		a[j] = str[j];
	}
	return (a);
}
