#include "main.h"
#include <string.h>

/**
 * puts2 - prints one character out of two
 * @str: variable
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
