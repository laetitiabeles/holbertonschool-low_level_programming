#include "main.h"

/**
 * create_file - create a new file
 * @filename: given file
 * @text_content: content to add
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int file;
	size_t length = 0, bytesWritten;

	if (!filename)
		return (-1);

/* Open file with RW permissions, create if not exists, and truncate to zero */
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file < 0)
		return (-1);

	if (text_content != NULL)
	{
		/* Calculate the length of the text */
		while (text_content[length] != '\0')
		{
			length++;
		}

	/* Write the text to the file */
	bytesWritten = write(file, text_content, length);
	/* Check if the number of bytes written matches the length of the text */
	if (bytesWritten != length)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
	}
}
