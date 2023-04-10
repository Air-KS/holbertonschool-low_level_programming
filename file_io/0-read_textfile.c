#include "main.h"

/**
* read_textfile - function that reads a text file and prints it to the POSIX
* @filename: Name file
* @letters: Letters
*
* Return: O or 1
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor, bytesRead, bytesWritten;
	char *buffer;

	if (!filename)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
		return (0);

	bytesRead = read(fileDescriptor, buffer, letters);
	if (bytesRead == -1)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}

	buffer[bytesRead] = '\0';
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}

	free(buffer);
	close(fileDescriptor);
	return (bytesWritten);
}
