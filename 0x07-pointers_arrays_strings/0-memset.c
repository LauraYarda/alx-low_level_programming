#include "main.h"
/*
 * _memset - fills memory with a constant byte
 * @s: character that points to the constant
 * @b: the contsnt constant byte
 * @n: the bytes
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
