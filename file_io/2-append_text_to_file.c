#include "main.h"
int _strlen(char *str);
/**
 * append_text_to_file - function to append text at the end of the file
 * Return: 1 (if success) -1 (if fails)
 * @filename: name of the file
 * @text_content: text to be append at the file's end
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (!text_content)
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
 * _strlen - functiont to know length of any string
 * Return: length of the string
 * @str: strint
*/
int _strlen(char *str)
{
	int length;

	for (length = 0 ; str[length] != '\0' ; length++)
		;
	return (length);
}
