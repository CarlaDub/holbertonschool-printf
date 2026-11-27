#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_chars - Prints anything
 * @format: List of types of arguments
 *
 * Return: Nothing (void)
 */
void print_chars(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 's':
				printf("%s%s", separator, va_arg(args, int));
				break;
			case '%':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%%", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
