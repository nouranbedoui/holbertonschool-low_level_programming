#include "function_pointers.h"

/**
 * print_name - executes a function on the name passed.
 * @name: the name to be printed.
 * @f: function pointer to a function that prints the name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)  /* Ensure both name and function pointer are valid */
{
f(name);  /* Call the function passed as an argument */
}
}
