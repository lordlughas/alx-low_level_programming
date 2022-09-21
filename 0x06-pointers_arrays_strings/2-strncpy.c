#include <string.h>
#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string variable
 * @src: source string variable
 * @n: number of characters to be copied from source
 *
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
