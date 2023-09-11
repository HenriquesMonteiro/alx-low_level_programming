#include "main.h"

/**
 * factorial - Calculate factorial
 * @n: starting variable
 * Return: -1 if n is lower than 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
