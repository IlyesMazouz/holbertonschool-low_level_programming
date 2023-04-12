#include "main.h"

/**
* read_textfile - function that prints text to POSIX standard output
*@filename: a pointer
*@letters: size_t
*Return: value of bytes_read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char buffer[1024];
	size_t total_read = 0;
	ssize_t bytes_read;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	while (bytes_read > 0 && total_read < letters)
	bytes_read = fread(buffer, 1, sizeof(buffer), file);
	{
	if ((size_t)fwrite(buffer, 1, bytes_read, stdout) != (size_t)bytes_read)
	{
		fclose(file);
		return (0);
	}
	total_read += bytes_read;
	}

	fclose(file);
	return (total_read);
}
