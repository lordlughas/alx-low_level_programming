#include <stdio.h>
#include <math.h>
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
	if ((rt * rt) == n)
		return (rt);
	if (rt == n / 2)
		return (-1);
	return (_sqrt(num, rt + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to return the square root of
 * Return: If n has a natural square root - the natural square root of n
 * If n does not have a natural square root - -1
 */
int _sqrt_recursion(int n)
{
	rt = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (check_sqrt(n, rt));
}
