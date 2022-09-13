#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Description: Write a function that prints the alphabet, in lowercase
 * Return: Always 0 (succes)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar('a');
	}
	_putchar('\n');
}
