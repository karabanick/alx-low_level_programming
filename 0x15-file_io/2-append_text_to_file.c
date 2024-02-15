#include "main.h"

/**
 * append_text_to_file - appending a text at the end of a file
 * @filename: pointer to file to append text
 * @text_content: pointer to text to append
 * Return: 1 (success) -1 (fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t wrbyte;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	wrbyte = write(fp, text_content, _strlen(text_content));
	if (wrbyte == -1)
	{
		close(fp);
		return (-1);
	}

	close(fp);
	return (1);
}

/**
 * _strlen - finding the length of a string
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
