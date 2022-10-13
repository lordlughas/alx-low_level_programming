#include <stdarg.h>

/**
 * sum_them_all - computes the sum
 * @n: number of parameters
 * return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_lists param;
	unsigned int i;
	int sum = 0;

	if (n <= 0)
		return (0);
	va_start (param, n);
	for (i = 0; i < n; i++)
		sum += va_arg(pa, int);
	va_end(param);
	return (sum);
}
