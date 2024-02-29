#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer
 *
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: 0 or pointer of the array.
 */
int **alloc_grid(int width, int height)
{
	int **dd;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);
	dd = malloc(sizeof(int *) * height);

	if (dd == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		dd[h] = malloc(sizeof(int) * width);

		if (dd[h] == NULL)
		{
			for (; h >= 0; h--)
				free(dd[h]);

			free(dd);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			dd[h][w] = 0;
	}

	return (dd);
}
