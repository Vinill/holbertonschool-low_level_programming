#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 *
 *@filename: Const var of type char
 *
 *@text_content: Content of the text
 *
 *Return: -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t wt, op;
	unsigned int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	op = open(filename, O_APPEND | O_WRONLY);

	len = strlen(text_content);

	wt = write(op, text_content, len);

	if (op == -1 || wt == -1)
		return (-1);

	close(op);
	return (1);
}
