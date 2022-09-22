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
	int count;

	for (count = n; count >= 0; count--)
	{
		if (count != 0)
		{
			printf(", ");
		}

		printf("%d", a[count]);
	}
	printf("\n");
}
