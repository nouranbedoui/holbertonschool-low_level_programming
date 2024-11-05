#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to search.
 * @accept: the set of bytes to search for.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)  /* Loop through the string s */
{
char *p = accept;

/* Check if the current character in s is in accept */
while (*p)
{
if (*s == *p)  /* If a match is found */
{
return (s);  /* Return pointer to the character in s */
}
p++;  /* Move to the next character in accept */
}

s++;  /* Move to the next character in s */
}

return (NULL);  /* Return NULL if no match is found */
}
