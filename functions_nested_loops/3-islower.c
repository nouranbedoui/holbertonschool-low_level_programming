#include "main.h"

/**
 * _islower - checks for a lowercase character.
 * @c: The character to check (as an integer).
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
