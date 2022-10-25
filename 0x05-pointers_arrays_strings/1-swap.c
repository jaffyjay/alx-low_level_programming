#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
