#include <stdio.h>

/**
 * main - To show how to print all possible combinations of numbers
 *
 * Return: Always 0 (Completed)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i = '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
