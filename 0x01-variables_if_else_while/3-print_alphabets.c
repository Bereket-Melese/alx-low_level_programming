#include <stdio.h>
/**
 * main - main block
 * Description: A program that prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
    
    char c = 'a';

    while (c <= 'z')
    {
        putchar(c);
        c++;
    }

    char c = 'A';

    while (c <= 'Z')
    {
        putchar(c);
        c++;
    }

    putchar('\n');
    return (0);
}

