#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a comparison function.
 * @array: the array to search.
 * @size: the size of the array.
 * @cmp: function pointer to the comparison function.
 *
 * Return: the index of the first element for which cmp doesn't return 0,
 *         or -1 if no element matches or size is less than or equal to 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL || size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)  /* If cmp returns a non-zero value */
return (i);  /* Return the index of the element */
}

return (-1);  /* No match found */
}
