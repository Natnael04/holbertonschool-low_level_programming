#include<stdio.h>

/**
 * main - print the size of various types on the computer
 *@void = Null value
 * Return: 0
 */

int main(void)
{

	printf("Size of char: %zu byte\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of int: %zu bytes\n", sizeof(long int));
	printf("Size of int: %zu bytes\n", sizeof(long long int));
	printf("Size of float: %zu bytes\n", sizeof(float));

	return (0);
}
