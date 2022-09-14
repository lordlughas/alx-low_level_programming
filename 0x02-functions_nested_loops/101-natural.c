#include <stdio.h>

/**
 * main - print sum of multiples
 * Return: Always (Success)
 */
int main(void)
{
	int n;
	int sum = 0;

	for (n = '0'; n < '1024'; n++)
	{
		if (n % 3 == '0' || n % 5 == '0')
		{
			sum += n;
		}

		_putchar("%d\n", sum);
		return (o);
	}
}

