#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success, return 1. On error, return -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

