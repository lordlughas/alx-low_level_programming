#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array integers
 * @a: array of integers
 * @n: number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int tmp, counter;

	for (counter = n - 1; counter >= n / 2; counter--)
	{
		tmp = a[n - 1 - counter];
		a[n - 1 - counter] = a[counter];
		a[counter] = tmp;
	}
}
