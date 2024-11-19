#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 *                  on each element of an array.
 * @array: The array to iterate over.
 * @size: The number of elements in the array.
 * @action: A pointer to the function that will be applied on each element.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

/* Ensure array and action function pointer are not NULL */
if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);  /* Call the function with the current array element */
}
}
}
