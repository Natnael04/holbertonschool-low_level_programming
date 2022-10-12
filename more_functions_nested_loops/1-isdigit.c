#include "main.h"
#include <ctype.h>

/**
 * _isdigit - to check for a digit character.
 *@c : int parameter
 * Return: 0 or 1
 */
int _isdigit(int c)
{

	if (c >= 30 && c <= 39)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
