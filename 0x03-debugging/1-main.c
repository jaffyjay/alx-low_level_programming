#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");

	i = 0;

	/*
	 *while (i < 10)
	 *{
	 *infinite loop - no increase of variable
	 *putchar(i);
	 }
	 */

	printf("infinite loop avoided \\o/\n");

	return (0);
}
