#include "main.h"
#include <stdlib.h>
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
	char *buf;
	ssize_t fp;
	ssize_t written;
	ssize_t r;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fp, buf, letters);
	written = write(STDOUT_FILENO, buf, r);
	free(buf);

close(fp);
return (written);
}
