#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: A program that prints all possible
 * combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(c);
		c++;
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
