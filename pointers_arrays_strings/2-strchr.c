#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string.
 * @s: pointer to the string to search.
 * @c: the character to find.
 *
 * Return: pointer to the first occurrence of c, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
while (*s)  /* Loop until the null terminator is reached */
{
if (*s == c)
{
return (s);  /* Return pointer to the first occurrence of c */
}
s++;  /* Move to the next character */
}

/* Check if c is the null terminator */
if (*s == c)
{
return (s);  /* Return pointer to the null terminator if c is '\0' */
}

return (NULL);  /* Return NULL if c is not found */
}
