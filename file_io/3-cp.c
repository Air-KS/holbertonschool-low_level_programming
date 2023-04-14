#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
* open_file - Opens a file using the "open" function of the standard C library
* @filename: name file
* @flags: flag
* @mode: mode
*
* Return: fileDescriptor
*/
int open_file(char *filename, int flags, mode_t mode)
{
	int fileDescriptor = open(filename, flags, mode);

	if (fileDescriptor == -1)
	{
		perror(filename);
		exit(1);
	}
	return (fileDescriptor);
}

/**
* close_file - Close file
* @fileDescriptor: fileDescriptor
*
*/
void close_file(int fileDescriptor)
{
	if (close(fileDescriptor) == -1)
	{
		perror("close");
		exit(1);
	}
}

/**
* copy_file - copy file
* @file_from: file from
* @file_to: file to
*
*/
void copy_file(char *file_from, char *file_to)
{
	int fileDescriptor_from, fileDescriptor_to, read_bytes;
	char buffer[BUFFER_SIZE];

	fileDescriptor_from = open_file(file_from, O_RDONLY, 0);
	fileDescriptor_to = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((read_bytes = read(fileDescriptor_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fileDescriptor_to, buffer, read_bytes) != read_bytes)
		{
			perror(file_to);
			exit(1);
		}
	}

	if (read_bytes == -1)
	{
		perror(file_from);
		exit(1);
	}

	close_file(fileDescriptor_from);
	close_file(fileDescriptor_to);
}

/**
* main - main function
* @argc: argc
* @argv: argv
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(1);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
