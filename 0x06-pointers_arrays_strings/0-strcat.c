#include <string.h>
#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination of string
 * @src: source of string to be concatenated
 *
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (0);
}
