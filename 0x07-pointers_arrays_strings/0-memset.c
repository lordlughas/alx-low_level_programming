#include <stdio.h>
#include "main.h"

/**
 * _memset - fills the memory with constant bytes
 * @n: number of bytes of the memory
 * @s: pointer to the block of memory to fill
 * @b: value to be set
 * Return: returns a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
