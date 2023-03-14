#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of chars
 * @size: the size of the array
 * @c: the character to fill the array
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);

	if (size == 0)
	return (NULL);

	if (s == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
	s[i] = c;
	}
	return (s);
}

