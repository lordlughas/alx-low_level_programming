#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase letters
 * Return: void
 */

char *string_toupper(char *)
{

	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		inidex++;
	}
		

	return(str);
}
