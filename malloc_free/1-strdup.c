#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 *           contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if memory allocation
 *         fails or if str is NULL.
 */
char *_strdup(char *str)
{
char *dup_str;
unsigned int i, len;


if (str == NULL)
return (NULL);


len = 0;
while (str[len] != '\0')
len++;


dup_str = (char *)malloc(sizeof(char) * (len + 1));
if (dup_str == NULL)
return (NULL);


for (i = 0; i < len; i++)
{
dup_str[i] = str[i];
}
dup_str[len] = '\0';


return (dup_str);
}
