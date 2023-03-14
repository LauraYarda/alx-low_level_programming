#include "main.h"
#include <stdlib.h>
/**
 *  alloc_grid - nested loop to make grid
 *  @width: width input
 *  @height: height input
 *
 *   Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int a, b, e, d;
	int **c;

	if (width <= 0 || height <= 0)
	return (NULL);

	c = malloc(sizeof(int *) * height);

	if (c == NULL)
	{
	free(c);
	return (NULL);
	}

	for (a = 0; a < height; a++)
	{
	c[a] = malloc(sizeof(int) * width);

	if (c[a] == NULL)
	{
	for (b = a; b >= 0; b--)
	{
	free(c[b]);
	}

	free(c);
	return (NULL);
	}

	}
	for (e = 0; e < height; e++)
	{
	for (d = 0; d < width;  d++)
	{
	c[e][d] = 0;
	}
	}
	return (c);
}
