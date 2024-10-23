#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));  // Initialize random number generator
    n = rand() - RAND_MAX / 2;  // Assign a random number to n

    // Print the number and whether it is positive, negative, or zero
    printf("%d ", n);
    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n < 0)
    {
        printf("is negative\n");
    }
    else
    {
        printf("is zero\n");
    }

    return (0);
}
