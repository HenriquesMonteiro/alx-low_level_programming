#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *q)
{
	int i;

	i = 0;

	while (q[i] != '\0')
	{
		i++;
	}

	return (i);
}
