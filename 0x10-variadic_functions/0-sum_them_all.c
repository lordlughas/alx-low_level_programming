#include <stdarg.h>
/**
 * sum_them_all - compute the sum
 * @n: number of params
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int i;
	int sum = 0;

	if (n <= 0)
		return (0);
	va_start(par, n);
	for (i = 0; i < n; i++)
		sum += va_arg(par, int);
	va_end(par);
	return (sum);
}
