#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * print_name - prints a name in the address
 * @name: address to print
 * @f: pointer to address
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}

