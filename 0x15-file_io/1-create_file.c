#include "main.h"

/**
 * create_file - a function that creates a file, writes some content
 * using system call
 * @filename: file to create
 * @text_content: content to write into file
 * Return: 1 (success) -1 (fail)
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t wrbyte;

	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		wrbyte = write(fp, text_content, _strlen(text_content));
		if (wrbyte == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}

/**
 * _strlen - function to calculate the length of a string
 * @s: input string
 * Return: result
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
