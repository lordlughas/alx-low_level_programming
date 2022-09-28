#include <stdio.h>
#include "main.h"

/**
 * check_sqrt - returns the square root of natural number
 * @n: number to be squared
 * @rt: root of number to be checked
 * Return: if number does not have natural square root return -1,
 * if number has a natural square root return square root
 */
int check_sqrt(int n, int rt)
{
	if (rt * rt == n)
		return (rt);
	if (rt * rt <= 0)
		return (check_sqrt(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - calculates the natural square root of n
 * @n: base number
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (check_sqrt(n, 2));
}
