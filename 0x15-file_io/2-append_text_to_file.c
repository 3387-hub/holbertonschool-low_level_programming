#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
/**
 *append_text_to_file - This function appends text at the end of the file.
 *@filename: Is the name of the file.
 *@text_content: is the NULL terminated string to add at the end of the file.
 *Return: 1 on succes and -1 in failure.
 */
int append_text_to_file(const char *filename, char *text_content)

{
	int fd = 0;
	int fd2 = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			return (-1);
		}
		else
		{
			fd = open(filename, O_RDONLY);
			return (1);
		}
		close(fd);
	}
	else
	{
		fd = open(filename, O_APPEND | O_WRONLY);
		if (fd == -1)
		{
			return (-1);
		}
		fd2 = write(fd, text_content, strlen(text_content));
		if (fd2 == -1)
		{
			return (-1);
		}
		return (1);
	}
	close(fd);
}
