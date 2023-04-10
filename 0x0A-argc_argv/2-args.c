#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
	return (0);
}
