#include "main.h"

/**
 * _strncat - Concatenates two strings with at most n bytes from src.
 * @dest: The destination string to which src will be appended.
 * @src: The source string to append to dest.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;

while (*ptr != '\0')
{
ptr++;
}


while (n > 0 && *src != '\0')
{
*ptr = *src;
ptr++;
src++;
n--;
}

*ptr = '\0';

return (dest);
}
