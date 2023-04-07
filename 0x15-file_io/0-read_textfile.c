#include "main.h"
/**
 * read_textfile- Read text file print to STDOUT
 * @filename: text file being read
 * @letters: number of letters to be read
 *
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = NULL;
	size_t count = 0;
	size_t c;

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
	return (0);
	}

	while ((!feof(fp)) && count < letters)
	{
	c = fgetc(fp);
	putchar(c);
	count++;
	}
	fclose(fp);
	return (count);
}
