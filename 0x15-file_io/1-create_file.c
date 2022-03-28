#include "main.h"

/**
 * create_file - Function that reads a text file
 *	and prints it to the POSIX standard output
 *
 *@filename: Const var of type char
 *
 *@text_content: Content of the text
 *
 *Return: -1
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t wt, op;
	unsigned int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	op = open(filename, O_TRUNC, O_CREAT | O_RDWR, 0600);

	len = strlen(text_content);

	wt = write(op, text_content, len);

	if (op == -1 || wt == -1)
		return (-1);

	close(op);
	return (1);
}
