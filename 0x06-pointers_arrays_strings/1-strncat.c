#include <string.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string one
 * @src: string two
 * @n: max no of characters to be appended
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
