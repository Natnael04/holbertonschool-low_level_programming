#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char s[] = "_putchar ";
	int i;
	for (i=0; s[i] != '\0'; i++)
	{
		putchar (s[i]);
	}
	return (0);
}
