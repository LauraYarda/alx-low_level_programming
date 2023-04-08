#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_file - Creates a file
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to a string to write to the file
 *
 * Returns: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE* file = fopen(filename, "w");
	int text_len, written = 0;

	if (filename == NULL)
	return (-1);

	if (file == NULL)
	{
	return -1;
	}
	if (text_content != NULL)
	text_len = strlen(text_content);
	written = fwrite(text_content, sizeof(char), text_len, file);
	if (written != text_len)
	{
	fclose(file);
	return (-1);
	}
	if (fclose(file) != 0)
	{
	return (-1);
}
	if (chmod(filename, S_IRUSR | S_IWUSR) != 0)
	{
	return (-1);
}
 return (1);
 }
