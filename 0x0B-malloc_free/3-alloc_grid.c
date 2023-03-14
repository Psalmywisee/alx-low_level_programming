#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to a 2 dimensional array
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **arry;
	int x, y;

	if (width <= 0 || height <= 0)

	return (NULL);

	arry = malloc(sizeof(int *) * height);

	if (arry == NULL)

	return (NULL);

	for (x = 0; x < height; x++)
	{
	arry[x] = malloc(sizeof(int) * width);

	if (arry[x] == NULL)
	{

	for (; x >= 0; x--)
	free(arry[x]);
	free(arry);
	return (NULL);
	}
	}
	for (x = 0; x < height; x++)
	{

	for (y = 0; y < width; y++)

	arry[x][y] = 0;
	}
	return (arry);
}
