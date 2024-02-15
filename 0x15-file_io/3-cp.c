#include "main.h"

/**
 * main - program that copies the contents of a file to another file
 * @argc: argument count
 * @argv: pointer to argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int fp1, fp2;
	ssize_t rdbyte, wrbyte;
	char buff[BUFF_SIZE];

	if (argc != 3)
		usage_and_exit();

	fp1 = open(argv[1], O_RDONLY);
	if (fp1 == -1)
		read_error(argv[1]);

	fp2 = open(argv[2],
			O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fp2 == -1)
	{
		close(fp1);
		write_error(argv[2]);
	}
	while ((rdbyte = read(fp1, buff, BUFF_SIZE)) > 0)
	{
		wrbyte = write(fp2, buff, rdbyte);
		if (wrbyte != rdbyte)
		{
			close(fp1);
			close(fp2);
			write_error(argv[2]);
		}
	}
	if (rdbyte == -1)
	{
		close(fp1);
		close(fp2);
		read_error(argv[1]);
	}
	if (close(fp1) == -1)
		close_error(fp1);
	if (close(fp2) == -1)
		close_error(fp2);
	return (0);
}

/**
 * usage_and_exit - handling usage and exit
 * Return: nothing
 */

void usage_and_exit(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * read_error - handling read error message
 * @filename: pointer to file
 * Return: nothing
 */

void read_error(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * write_error - writes the error message to stderr
 * @filename: pointer to file
 * Return: nothing
 */

void write_error(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * close_error - closing error message
 * @fp: input file poiter
 * Return: nothing
 */

void close_error(int fp)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
	exit(100);
}
