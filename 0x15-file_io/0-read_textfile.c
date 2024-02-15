#include "main.h"

/**
 * read_textfile - function that uses system call to read textfile
 * and prints it to POSIX standard output
 * @filename: pointer to the file with text
 * @letters: number of letters it could read and print
 * Return: number of letters read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buff;
	ssize_t rdbyte, wrbyte;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters + 1));
	if (buff == NULL)
	{
		close(fp);
		return (0);
	}

	rdbyte = read(fp, buff, letters);
	if (rdbyte == -1)
	{
		free(buff);
		close(fp);
		return (0);
	}

	wrbyte = write(STDOUT_FILENO, buff, rdbyte);
	free(buff);
	close(fp);

	if (wrbyte == -1 || wrbyte != rdbyte)
		return (0);

	return (wrbyte);
}
