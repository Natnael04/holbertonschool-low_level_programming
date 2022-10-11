#include "main.h"
#include <ctype.h>

/**
* _isupper - to check for uppercase character.
 *@c : int parameter
 * Return: 0 or 1
 */
int _isupper(int c)
{

	if (c == 'A' && 'Z')
	{
		return (1);
	}
	else
		return (0);
}
