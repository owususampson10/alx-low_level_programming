#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **see;
	int u, a;

	if (width <= 0 || height <= 0)
		return (NULL);

	see = malloc(sizeof(int *) * height);

	if (see == NULL)
		return (NULL);

	for (u = 0; u < height; u++)
	{
		see[u] = malloc(sizeof(int) * width);

		if (see[u] == NULL)
		{
			for (; u >= 0; u--)
				free(see[u]);

			free(see);
			return (NULL);
		}
	}

	for (u = 0; u < height; u++)
	{
		for (a = 0; a < width; a++)
			see[u][a] = 0;
	}

	return (see);
}
