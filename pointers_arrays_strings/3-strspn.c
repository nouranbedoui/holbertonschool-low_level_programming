#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to search.
 * @accept: the characters to check against.
 *
 * Return: the number of bytes in the initial segment of s that consist only of
 *         bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *p;

while (*s)  /* Loop through string s */
{
p = accept;  /* Pointer to iterate through the accept string */

/* Check if the character s points to is in the accept string */
while (*p)
{
if (*s == *p)  /* If the current character matches, break and count it */
{

count++;

break;
}
p++;
}

if (*p == '\0')  /* If no match was found in accept, stop the loop */
break;

s++;  /* Move to the next character in string s */
}

return (count);  /* Return the number of matching characters */
}
