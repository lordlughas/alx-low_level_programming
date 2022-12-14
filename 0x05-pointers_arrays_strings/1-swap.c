#include "main.h"

/**
 * swap_int - Swap the value of two integers
 * @a: to be swapped with b
 * @b: to be swapped with a
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
