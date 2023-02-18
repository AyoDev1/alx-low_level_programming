#include <stdio.h>

/**
 * main - To show how to print all single digit number, 10 from 0.
 *
 * Return: Always 0 (Completed)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar("\n");
	return (0);
}
