#include <string.h>
#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: main c string to be scanned
 * @accept: string containing list of characters to be matched
 * Return: returns the number of characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
	{
	bytes++;
	break;
	}
	else if (accept[i + 1] == '\0')
	return (bytes);
	}
		s++;
	}
	return (bytes);
}
