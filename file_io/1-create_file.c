#include "main.h"
#include <string.h> /* Include <string.h> for strlen */

/**
 * create_file - Creates a file
 * @filename: Name of the file to create
 * @text_content: Content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
		close(fd);
		return (-1);
	}
	}

	close(fd);
	return (1);
}
