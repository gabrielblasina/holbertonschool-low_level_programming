#include "main.h"
/**
 * read_textfile - function that reads a text and prints it in std output
 * Return: 0 (if fails) len (if success)
 * @filename: name of the file
 * @letters: number of letters to be read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t rd, wr;
	int fd;
	char *txt;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	txt = malloc(sizeof(char) * letters);
	if (!txt)
	{
		free(txt);
		return (0);
	}
	rd = read(fd, txt, letters);
	if (!rd)
	{
		free(txt);
		close(fd);
		return (0);
	}
	wr = write(STDOUT_FILENO, txt, rd);
	if (!wr)
	{
		free(txt);
		close(fd);
		return (0);
	}
	close(fd);
	free(txt);
	return (rd);
}
