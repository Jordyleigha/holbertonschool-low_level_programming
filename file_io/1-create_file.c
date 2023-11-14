#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * create_file - file to be created
 * @filename: filename
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int jordanfile;
	unsigned int i;

	if (filename == NULL)
		return (-1);

	jordanfile = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (jordanfile == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; i < strlen(text_content); i++)
		{
			write(jordanfile, &text_content[i], 1);
		}
	}
	return (1);
}
