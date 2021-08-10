#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
/**
 *create_file - This function create a file.
 *@filename: name of the file to created.
 *@text_content: is a NULL terminated string to write to the file.
 *Return: in case of error -1, in correct case 1.
 */
int create_file(const char *filename, char *text_content)

{
	int i;
	int fd = 0, fd2 = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{

		}
		fd2 = write(fd, text_content, i);

		if (fd2 == -1)
		{
			return (-1);
		}
	}
	close(fd);

	return (1);
}
