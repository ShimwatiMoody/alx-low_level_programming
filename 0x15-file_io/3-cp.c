#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file the buffer is storing characters for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Unable to allocate buffer for %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int close_status;

	close_status = close(fd);

	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the program arguments.
 *
 * Return: 0 on success.
 *
 * Description: Exits with specific error codes if:
 *   - The argument count is incorrect (exit code 97).
 *   - The source file cannot be read (exit code 98).
 *   - The destination file cannot be created or written to (exit code 99).
 *   - Either file cannot be closed (exit code 100).
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, read_bytes, write_bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from_fd = open(argv[1], O_RDONLY);
	read_bytes = read(from_fd, buffer, 1024);
	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_fd == -1 || read_bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_bytes = write(to_fd, buffer, read_bytes);
		if (to_fd == -1 || write_bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_bytes = read(from_fd, buffer, 1024);
		to_fd = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_bytes > 0);

	free(buffer);
	close_file(from_fd);
	close_file(to_fd);
	return (0);
}

