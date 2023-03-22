#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index -  searches for an integer
 *  @array:  the array of elements
 *  @size:  is the number of elements
 *  @cmp: is a pointer to the elements to be compared
 *
 *  Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}
	return (-1);
}
