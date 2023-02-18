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
		if (i == 9)
			putchar(i + '0');
		else
		{	putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
