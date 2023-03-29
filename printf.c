#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * is_good - hi
 * @c: hi
 * Return: hi
 */
int is_good(char c)
{
	return c == 'c' || c == 's' || c == '%';
}

/**
 * _printf - hi
 * @format: hi
 * @...: hi
 * Return: hi
 */
int _printf(const char *format, ...)
{
	va_list ls;
	int i = 0, ln = 0;

	va_start(ls, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] && is_good(format[i + 1]))
		{
			i++;
			if (format[i] == 'c')
			{
				char c = va_arg(ls, int);

				write(1, &c, 1);
				ln++;
			}
			else if (format[i] == 's')
			{
				printstr(va_arg(ls, char *));
			}
			else if (format[i] == '%')
			{
				write(1, &format[i], 1);
				ln++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			ln++;
		}
		i++;
	}
	va_end(ls);
	return (ln);
}
