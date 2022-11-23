#include "main.h"
int _strlen(char *str);
/**
 * create_file - function to create a file with text content
 * Return: 1 (if success) -1 (if fails)
 * @filename: name of the file to create
 * @text_content: string to write in the file
*/
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	wr = write(fd, text_content, _strlen(text_content));
	if (wr < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
/**
 * _strlen - function to know length of any string
 * Return: number of characters
 * @str: string given
*/
int _strlen(char *str)
{
	int length;

	for (length = 0 ; str[length] != '\0' ; length++)
		;
	return (length);
}
