#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	int x, t;

	if (argc != 3)
{
	printf("Error\n");
	return (1);
}

	x = atoi(argv[1]);
	t = atoi(argv[2]);

	printf("%d\n", x * t);

	return (0);
}
