#include <ctype.h>
#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase letters
 * of a string to uppercase
 * @index: The string to be changed
 * Return: A pointer to the changed string
 */

char *string_toupper(char *)
{

	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}


	return (str);
}
