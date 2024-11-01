#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * This function converts the initial portion of the string pointed to
 * by `s` to an integer, handling leading whitespace and signs.
 *
 * Return: The converted integer value, or 0 if no valid conversion
 *         could be performed.
 */

	int _atoi(char *s)
	{
	int sign = 1;
	unsigned int num = 0;

		while (*s == ' ')
			s++;
		while (*s == '-' || *s == '+')
		{
			if (*s == '-')
				sign *= -1;
			s++;
		}

		while (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
			s++;
		}

		return (sign * num);
	}
