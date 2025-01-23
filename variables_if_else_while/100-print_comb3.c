#include <stdio.h>  /* Include this to use putchar */

int main(void)
{
    int i, j;

    for (i = 0; i <= 9; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            putchar(i + '0');  /* Print first digit */
            putchar(j + '0');  /* Print second digit */

            if (i != 8 || j != 9)  /* Avoid last combination */
            {
                putchar(',');  /* Print comma */
                putchar(' ');  /* Print space */
            }
        }
    }
    putchar('\n');  /* Print newline */
    return (0);
}
