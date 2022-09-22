#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: pointer to string
 *
 * Return: A pointer to s
 */
char *cap_string(char *s)
{
	int count = 0;

	/*  scan through string */
	while (s[count] != '\0')
	{/* if next character after count is a char , capitalise it */
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[count] == ' ' || s[count] == '\t' || s[count] == '\n'
		|| s[count] == ',' || s[count] == ';' || s[count] == '.'
		|| s[count] == '.' || s[count] == '!' || s[count] == '?'
		|| s[count] == '"' || s[count] == '(' || s[count] == ')'
		|| s[count] == '{' || s[count] == '}')
		{
			if (s[count + 1] >= 97 && s[count + 1] <= 122)
			{
				s[count + 1] = s[count + 1] - 32;
			}
		}
		count++;
	}
	return (s);
}
