#include "main.h"

/**
 *  _sqrt_recursion - the program should subctract in orderto find root
 * 
 * @n: given number
 * @x: number that will be used to subctract
 *
 * Return: if n is not natural, return -1
 */
int sub_method(int n, int x)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	n = n-x;
	return(1 + sub_method(n, x + 2));
}

/**
 *  _sqrt_recursion - the program must calculate the square
 *
 * @n: given number
 * Return: if n is not natural, return -1
 */
int _sqrt_recursion(int n)
{
	int sqrt = sub-method(n, 1);

	if(sqrt * sqrt = n)
		return(sqrt);
	return(-1);
}
