#include <stdio.h>
/**
 * main - main block
 * Description: A program that prints all single
 * digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c <= 10)
	{
		printf(c);
		c++;
	}
	putchar('\n');
	return (0);
}
