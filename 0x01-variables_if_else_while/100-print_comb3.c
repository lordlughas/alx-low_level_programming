#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Description: prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = '0'; x < '9'; x++)
	{
		for (y = '0'; y < '9'; y++)
		{
			if (x < y)
			{
				putchar(x);
				putchar(y);
			}
			if (x != '8' || (x == '8' && y != '9'))
					{
					putchar(',');
					putchar(' ');
					}
		}
	}
	return (0);
}
