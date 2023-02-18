#include <stdio.h>

/**
 * main - To show how to print the alphabet in lowercase.
 * Except q and e
 *
 * Return: Always 0 (Completed)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
