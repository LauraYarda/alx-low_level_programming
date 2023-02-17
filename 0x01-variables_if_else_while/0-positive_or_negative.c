#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints if the number is positive,negative or zero
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	print("%d is positive\n", n);
	}
	else if (n == 0)
	{
	print("%d is zero\n", n);
	}
	else if (n < 0)
	{
	print("%d is negative\n", n);
	}
	return (0);
}

