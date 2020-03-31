#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints the contents to STDOUT
 * @filename: the filename
 * @letters: number of letters
 * Return: the number of letters read and printed, 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f = -1, err = 0, len = 0;
	char *temp;

	if (!filename)
		return (0);
	temp = malloc(sizeof(char) * letters);
	if (!temp)
		return (0);
	f = open(filename, O_RDONLY);
	if (f < 0)
	{
		free(temp);
		return (0);
	}
	err = read(f, temp, letters);
	if (err < 0)
	{
		free(temp);
		return (0);
	}
	while (temp && temp[len])
		len++;
	err = write(STDOUT_FILENO, temp, len);
	free(temp);
	close(f);
	if (err < 0)
		return (0);
	return ((ssize_t)err);
}
