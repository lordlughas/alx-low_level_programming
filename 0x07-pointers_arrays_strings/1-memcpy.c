#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies the memory area
 * @src: memory area source
 * @dest: memory area destination
 * @n: number of bytes of memory area
 * Return: returns a pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
