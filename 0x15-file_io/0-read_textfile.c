#include "main.h"

/**
 * read_textfile - Function that reads a text file
 *	and prints it to the POSIX standard output
 *
 * @filename: Is a pointer of type const char
 *
 * @letters: Variable of type size_t
 *
 * Return: Wt
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wt, op;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buf, letters);
	wt = write(STDOUT_FILENO, buf, rd);

	if (op == -1 || rd == -1 || wt == -1 || wt != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(op);

	return (wt);
}
