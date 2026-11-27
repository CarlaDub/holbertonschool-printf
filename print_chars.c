#include "main.h"
#include <stddef.h>

/**
 * print_char - Prints a character
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_string - Prints a string
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *str;
	int i = 0;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		if (_putchar(str[i]) == -1)
			return (-1);
		i++;
	}

	return (i);
}

/**
 * print_percent - Prints a percent sign
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_percent(va_list args)
{
	(void)args;

	return (_putchar('%'));
}
