#include <stdio.h>
/**
 * main - prints alphabet in lower case
 * Return: 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuv";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}

