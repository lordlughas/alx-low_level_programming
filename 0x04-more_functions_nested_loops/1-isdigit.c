#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: carrier integer variable
 * Return: 1 if true, 0 is false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
