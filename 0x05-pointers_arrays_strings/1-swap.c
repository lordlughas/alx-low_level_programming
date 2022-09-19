#include "main.h"

/*
 * swap_int - swaps the value of two integers
 * @a: swap integer 1
 * @b: swap integer 2
 *
 * Description: function that swaps the values of two integers
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
