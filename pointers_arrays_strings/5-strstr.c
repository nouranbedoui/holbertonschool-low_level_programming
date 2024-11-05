#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds the first occurrence of a substring.
 * @haystack: the string to search in.
 * @needle: the substring to search for.
 *
 * Return: a pointer to the first occurrence of needle in haystack,
 *         or NULL if needle is not found.
 */
char *_strstr(char *haystack, char *needle)
{

if (*needle == '\0')
return (haystack);


while (*haystack)
{

char *h = haystack;
char *n = needle;

while (*h && *n && *h == *n)
{
h++;
n++;
}


if (*n == '\0')
return haystack;

haystack++;  
}

return (NULL); 
}
