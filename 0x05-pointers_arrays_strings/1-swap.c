#include "main.h"

/*
 * swap_int - swaps the value of two integers
 * @p: swap integer bucket for the integers
 *
 * Description: function that swaps the values of two integers
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int *p;

	*p = *a;
	*a = *b;
	*b = *p;
}
