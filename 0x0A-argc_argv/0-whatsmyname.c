#include <stdio.h>

/**
 * main - prints the program name
 * @argc: number of elements in the argv
 * @argv: strings containing the program name and arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
