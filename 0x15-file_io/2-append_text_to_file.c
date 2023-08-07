#include "main.h"
/**
 *append_text_to_file -  appends text at the end of a file.
 *@filename:  name of the file
 *@text_content: NULL terminated string to add at the end of
 *the file
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, num, i = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
	}
	f = open(filename, O_WRONLY | O_APPEND);
	if (f < 0)
		return (-1);
	num = write(f, text_content, i);
	if (num != i)
		return (-1);
	close(f);
	return (1);
}
