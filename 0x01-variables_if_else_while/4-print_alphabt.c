#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - main entry point
 *
 * Description: program that prints alphabets in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
		putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
		return (0);
}
