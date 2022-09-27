#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to matrix of integers
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int x;
	int sum1 = 0;
	int sum2 = 0;

	for (x = 0; x < size; x++)
	{
	sum1 += a[(size + 1) * x];
	sum2 += a[(size - 1) * (x + 1)];
	}
	printf("%d,%d\n", sum1, sum2);
}
