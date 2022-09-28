#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Returns the length of string
 * @s: pointer to string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		len++;
		len += _strlen_recusion(s + 1);
	}
	return (len);
}
