#include <stdio.h>

/**
 * main - print sum of multiples
 * Return: Always (Success)
 */
int main(void)
{
	int n, int z = 0;

	for (n < 1024)
	{
		if ((n % 3 == '0') || (n % 5 == '0'))
		{
			z += n;
		}

		n++;
	}
		_putchar("%d\n", z);
		return (0);
}

