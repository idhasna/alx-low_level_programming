#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and prints it
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: number bytes read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t a;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	w = read(fd, buf, letters);
	a = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (a);
}
