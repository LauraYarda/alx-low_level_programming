#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to the duplicated string
 * @str: the string to duplicate
 * Return: 0
 */
char *_strdup(char *str)
{
	int a = 0, j = 1;
	char *s;

	if (str == NULL)
	return (NULL);

	while (str[j])
	{
	j++;
	}

	s = malloc((sizeof(char) * j) + 1);

	if (s == NULL)
	return (NULL);

	while (a < j)
	{
	s[a] = str[a];
	a++;
	}

	s[a] = '\0';
	return (s);
}
