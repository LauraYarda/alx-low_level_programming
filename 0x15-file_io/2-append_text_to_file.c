#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: A pointer to the name of the file
 * @text_content: The string to add to the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp = fopen(filename, "a");
	int res;

	if (fp == NULL)
	return (-1);

	if (filename == NULL || text_content == NULL)
	return (-1);

	 res = fputs(text_content, fp);
	fclose(fp);
	return ((res != EOF) ? 1 : -1);
}
