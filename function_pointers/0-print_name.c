#include "main.h"
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using the function pointed to by f.
 * @name: The name to be printed.
 * @f: The function pointer that will be used to print the name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}

/**
 * print_name_as_is - prints a name as it is.
 * @name: The name to be printed.
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - prints a name in uppercase.
 * @name: The name to be printed.
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
unsigned int i = 0;

printf("Hello, my uppercase name is ");
while (name[i])
{
if (name[i] >= 'a' && name[i] <= 'z')
{
putchar(name[i] - 'a' + 'A');
}
else
{
putchar(name[i]);
}
i++;
}
putchar('\n');
}
