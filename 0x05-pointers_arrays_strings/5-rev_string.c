#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, q, q1;

	q = 0;
	q1 = 0;

	while (s[q] != '\0')
	{
		q++;
	}

	q1 = q - 1;

	for (i = 0; i < q / 2; i++)
	{
		tmp = s[i];
		s[i] = s[q1];
		s[q1--] = tmp;
	}
}
