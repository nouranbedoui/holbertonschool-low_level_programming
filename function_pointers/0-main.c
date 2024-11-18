#include "main.h"
#include <stdio.h>
#include "function_pointers.h"

/**
 * main - Entry point to demonstrate function pointers.
 *
 * Return: Always 0.
 */
int main(void)
{

print_name("Bob", print_name_as_is);


print_name("Bob Dylan", print_name_uppercase);
    
return (0);
}
