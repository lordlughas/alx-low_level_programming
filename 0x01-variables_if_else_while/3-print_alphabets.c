#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints the alphabet in lowercas and then in uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
