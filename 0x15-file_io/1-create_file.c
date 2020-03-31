#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file and copies text into it
 * @filename: the filenamee
 * @text_content: text to copy
 * Return: 1 on success, -1 on failure (file can not be created, or written,
 * or write fails, etc).
 */

int create_file(const char *filename, char *text_content)
{
	int fd, err, len;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	err = write(fd, text_content, len);
	close(fd);
	if (err < 0)
		return (-1);
	return (1);
}
