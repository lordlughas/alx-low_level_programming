#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar("%d", i);
	}
	putchar('\n');
	return (0);
}

