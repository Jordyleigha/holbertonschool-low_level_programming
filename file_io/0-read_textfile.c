#include "main.h"
/**
 * read_textfile - reads a textfile
 * @filename: filename
 * @letters: number of letters printed
 *
 * Return: the number of letters printed, if failed return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ja;
	ssize_t red, wrt;
	char *school;

	if (!filename)
		return (0);

	ja = open(filename, O_RDONLY);

	if (ja == -1)
		return (0);

	school = malloc(sizeof(char) * (letters));
	if (!school)
		return (0);

	red = read(ja, school, letters);
	wrt = wrtie(STDOUT_FILENO, school, red);

	close (ja);

	free(school);

	return (wrt);
}
