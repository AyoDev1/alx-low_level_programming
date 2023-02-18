#include <stdio.h>

/**
 * main - To show how to print the lowercase alphabet in reverse
 *
 * Return: Always 0 (Completed)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
