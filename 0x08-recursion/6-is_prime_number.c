#include "main.h"
#include <stdio.h>
/**
 * check_prime -  Checks if a number is divisible
 * @num: The number to be checked
 * @div: The divisor
 *
 *  Return: If the number is divisible - 0
 *  If the number is not divisible - 1
 */
int check_prime(int n, int d)
{
	if (n <= 1)
	return (0);

	if (n % d == 0 && d > 1)
	return (0);

	if ((n / d) < d)
	return (1);

	return (check_prime(n, d + 1));
}
/**
 * is_prime_number - Return if a number is prime
 * @n: the number to be checked
 *
 * Return: interger value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
