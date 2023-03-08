#include "main.h"
#include <stdio.h>
/**
 *  _sqrt - Finds the natural square root of an inputted number
 *  @n: The number to find the square root of
 *  @r: The root to be tested
 *
 *  Return: If the number has a natural square root - the square root
 *   If the number does not have a natural square root - -1
 */
int _sqrt(int n, int r)
{
	int sqrt = r * r;

	if (sqrt > n)
	return (-1);

	if (sqrt == n)
	return (r);

	return (_sqrt(n, r + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to return the square root of
 *
 *  Return: If n has a natural square root - the natural square root of n
 *  If n does not have a natural square root - -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
