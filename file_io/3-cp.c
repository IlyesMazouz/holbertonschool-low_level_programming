#include "main.h"
#define BUF_SIZE 1024

/**
*error - prints an error message and exits with a given code
*@msg: the error message to print
*@code: the exit code to use
*/

void error(char *msg, int code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
*main - copies the content of a file to another file
*@argc: number of arguments passed to the program
*@argv: array of arguments passed to the program
*Return: 0 on success, or an error code on failure
*/

int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		error("Usage: cp file_from file_to", 97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		error("Error: Can't read from file %s", 98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		error("Error: Can't write to file %s", 99);
	}

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		error("Error: Can't write to file %s", 99);
	}
	}

	if (bytes_read == -1)
	{
		error("Error: Can't read from file %s", 98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		error("Error: Can't close file descriptor", 100);
	}

	return (0);
}
