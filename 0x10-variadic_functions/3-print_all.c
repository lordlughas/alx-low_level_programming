#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - print all varialbles
 * @format: contains types of params in order
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list par;
	char *s, *sep = "";

	if (format)
	{
		va_start(par, format);
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(par, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(par, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(par, double));
					break;
				case 's':
					s = va_arg(par, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
		va_end(par);
	}
	printf("\n");
}
