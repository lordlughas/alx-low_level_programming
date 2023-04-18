#include "search_algos.h"

/**
 * linear_search - search for a value in an array
 * using the Linear search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search from
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int num;

	if (array == NULL)
		return (-1);

	for (num = 0; num < (int)size; num++)
	{
		printf("Value checked array[%u] = [%d]\n", num, array[num]);
		if (value == array[num])
			return (num);
	}
	return (-1);
}
