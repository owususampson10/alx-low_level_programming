#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	/*Check for invalid input*/
	if (size == 0)
	{
	return (NULL);
	}

	/*Allocate memory for the char array*/
	char *str = malloc(size * sizeof(char));

	/*Check if memory allocation was successful*/
	if (str == NULL)
	{
	return (NULL);
	}

	/*Initialize the array with the given character*/
	for (unsigned int i = 0; i < size; i++)
	{
	str[i] = c;
	}

	/*Return the pointer to the array*/
	return (str);
}
