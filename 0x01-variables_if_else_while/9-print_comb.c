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
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
