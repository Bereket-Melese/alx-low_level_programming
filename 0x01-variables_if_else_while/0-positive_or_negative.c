#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and print out the number wheather it is positive, negatice, or zero
 * Return: 0
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
        printf("%i is positive\n",n);
    else if (n < 0)
        printf("%i is negative\n",n);
    else
        printf("%i is Zero\n",n);

    return (0);
}

