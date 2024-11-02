#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which src will be appended.
 * @src: The source string to append.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, const char *src)
{
char *ptr = dest;

    /* Move the pointer to the end of the dest string */
while (*ptr != '\0')
{
ptr++;
}

    /* Append src to dest */
while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}

    /* Null-terminate the concatenated string */
*ptr = '\0';

return (dest);
}
