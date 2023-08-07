#include "main.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: address of file
 *@letters:number of letters it should read and print
 *Return:number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f;
	ssize_t nbl;
	char *buffer;

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		free(buffer);
		return (0);
	}

	nbl = read(f, buffer, letters);
	nbl = write(STDOUT_FILENO, buffer, nbl);
	close(f);
	return (nbl);
}
