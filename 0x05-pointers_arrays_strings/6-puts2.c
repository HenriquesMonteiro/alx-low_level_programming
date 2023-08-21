#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int q, i;

	q = 0;

	while (str[q] != '\0')
	{
		q++;
	}

	for (i = 0; i < q; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
