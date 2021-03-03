#include <stdlib.h>
#include "holberton.h"

/**
 * **alloc_grid - array of 2d
 * @width: width of the array
 * @heigth: heigth of the array
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
int **arr;
int i, j;
if (height <= 0 || width <= 0)
return (NULL);
arr = (int **) malloc(sizeof(int *) * height);
if (arr == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
arr[i] = (int *) malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
free(arr);
for (j = 0; j <= i; j++)
free(arr[j]);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
