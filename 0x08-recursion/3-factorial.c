#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: factorial number
 * Return: return -1 when n less than 0, 0 if n equal to 0
 * else return factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	return (n * factorial(n - 1));
}
