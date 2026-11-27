#include "main.h"
#include <stdarg.h>

/**
 * print_nums - Prints a signed integer
 * @args: List of arguments
 *
 * Return: Number of characters printed or -1 on error
 */
int print_nums(va_list args)
{
	int num;
	int count = 0;
	unsigned int n;
	unsigned int divisor = 1;

	num = va_arg(args, int);

	if (num < 0)
	{
		if (_putchar('-') == -1)
			return (-1);
		count++;
		n = 0U - (unsigned int)num;
	}
	else
	{
		n = (unsigned int)num;
	}

	while (n / divisor >= 10)
		divisor *= 10;

	while (divisor != 0)
	{
		if (_putchar((n / divisor) + '0') == -1)
			return (-1);
		count++;
		n %= divisor;
		divisor /= 10;
	}

	return (count);
}
