#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * error_exit - Prints an error message and exits with the specified code.
 * @exit_code: The exit code.
 * @message: The error message.
 * @arg: The additional argument to include in the error message.
 */
void error_exit(int exit_code, const char *message, const char *arg)
{
dprintf(STDERR_FILENO, message, arg);
exit(exit_code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
int file_from, file_to;
char buffer[1024];
ssize_t bytes_read, bytes_written;
if (argc != 3)
error_exit(97, "Usage: cp file_from file_to\n", "");
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
error_exit(98, "Error: Can't read from file %s\n", argv[1]);
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
error_exit(99, "Error: Can't write to %s\n", argv[2]);
while ((bytes_read = read(file_from, buffer, 1024)) > 0)
{
bytes_written = write(file_to, buffer, bytes_read);
if (bytes_written == -1)
error_exit(99, "Error: Can't write to %s\n", argv[2]);
}
if (bytes_read == -1)
error_exit(98, "Error: Can't read from file %s\n", argv[1]);
if (close(file_from) == -1)
error_exit(100, "Error: Can't close fd %d\n", "");
if (close(file_to) == -1)
error_exit(100, "Error: Can't close fd %d\n", "");
return (0);
}
