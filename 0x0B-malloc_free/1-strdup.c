#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to the duplicated string
 * @str: the string to duplicate
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0, j = 1;
	char *s;

	s = malloc((sizeof(char) * j) + 1);

	if (str == NULL)
	return (NULL);

	while (str[j])
	{
	j++;
	}

	if (s == NULL)
	return (NULL);

	while (i < j)
	{
	s[i] = str[i];
	i++;
	}

	s[i] = '\0';
	return (s);
}
