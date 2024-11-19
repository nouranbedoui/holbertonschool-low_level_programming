#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer in decimal format.
 * @elem: the integer to print.
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer in hexadecimal format.
 * @elem: the integer to print.
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - demonstrates the usage of array_iterator.
 *
 * Return: Always 0.
 */
int main(void)
{
int array[5] = {0, 98, 402, 1024, 4096};  /* Array to test */

/* Call array_iterator with print_elem to print in decimal */
array_iterator(array, 5, &print_elem);

printf("\n");

/* Call array_iterator with print_elem_hex to print in hexadecimal */
array_iterator(array, 5, &print_elem_hex);

return (0);
}
