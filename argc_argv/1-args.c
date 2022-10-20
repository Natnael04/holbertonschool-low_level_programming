#include "main.h"

/**
 *main - the name of the program
 *@argc: the number of arguments passed to the function
 *@argv: argument vector of pointer to string
 *
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argv;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
