#include "main.h"

/**
 * create_array - Creates an array of chars, initialized with a given char.
 * @size: The size of the array to create.
 * @c: The character to initialize each element of the array with.
 *
 * Return: A pointer to the array, or NULL if size = 0 or memory allocation
 *         fails.
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
return (NULL);

array = (char *)malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
