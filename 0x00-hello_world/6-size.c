#include <stdio.h>

/**
 * main - this print the size of various types of computer
 *
 * Return: 0 when completed
 */

int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("size of int: %zu byte(s)\n", sizeof(int));
printf("size of a long int: %zu byte(s)\n", sizeof(long int));
printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
