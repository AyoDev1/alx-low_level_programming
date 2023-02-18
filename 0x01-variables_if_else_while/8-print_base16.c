#include <stdio.h>

/**
 * main - To show how to print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Completed)
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
