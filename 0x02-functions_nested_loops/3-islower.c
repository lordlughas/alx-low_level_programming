#include "main.h"

/**
 * _islower - main entry point
 * Description: function that checks for lowercase character
 * @c: the integer value it receives
 * Return: 1 is true. 0 is false.
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
	/* refer into c */
	if (c == 1)
	{
	return (1);
	}
	}
	return (0);
}
