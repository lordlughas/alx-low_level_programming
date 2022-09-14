#include <stdio.h>

/**
 * main - print sum of multiples
 * Return: Always (Success)
 */
int main(void)
{
	int n, z = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			z += n;
		}

		n++;
	}
		printf("%d\n", z);
		return (0);
}

