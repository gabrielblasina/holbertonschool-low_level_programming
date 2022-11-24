#include "main.h"
void error_list(int errnum, char *str, int fd);
/**
 * main - program to copy first file to the second one
 * Return: 0 (if success) 97, 98, 99, 100 (exit values)
 * @argc: number of arguments entered on command line
 * @argv: pointer to arrays (arguments given in command line)
*/
int main(int argc, char **argv)
{
	int fd1 = 0, fd2 = 0, wr = 0, rd = 0;
	char *buff[1024];

	if (argc != 3)
		error_list(97, "", 0);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		error_list(98, argv[1], 0);
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		error_list(99, argv[2], 0);
	while ((rd = read(fd1, buff, 1024)) != 0)
	{
		if (rd == -1)
			error_list(98, argv[1], 0);
		wr = write(fd2, buff, rd);
		if (wr == -1)
			error_list(97, argv[2], 0);
	}
	close(fd1);
		if (fd1 == -1)
			error_list(100, "", fd1);
	close(fd2);
		if (fd2 == -1)
			error_list(100, "", fd2);
	return (0);
}
/**
 * error_list - function to print the error and exit
 * Return: 0 (if success) 97, 98, 99, 100 (exit values)
 * @errnum: error number
 * @str: name of the file with error
 * @fd: file descriptor
*/
void error_list(int errnum, char *str, int fd)
{
	switch (errnum)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(errnum);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(errnum);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(errnum);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(errnum);
	}
}
