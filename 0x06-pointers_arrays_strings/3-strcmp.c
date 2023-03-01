#include "main.h"
/**
 * _strcmp -  compares two strings
 * @s1: a pointer to the first string to be compared
 * @s2: a pointer to the second string to be compared
 *
 * Return: 0 if s1 and s2 are the same; less than 0 if s1<s2
 *  if s1>s2 greater than 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
