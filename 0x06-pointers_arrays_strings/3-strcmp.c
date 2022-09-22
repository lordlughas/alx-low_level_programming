#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one to be compared
 * @s2: string two to be compared
 *
 * Return: value less than 0 if string is less than the other.
 * value greater than 1 if string is greater than the other.
 * 0 if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i, ret;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	ret = s1[i] - s2[i];

	return (ret);
}
