#include "main.h"
/**
 * _printf - produces output according to format
 * Return: number of chars printed
 * @format: character string to be printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0;
	char *new_line = "\n";

	va_start(arg, format);
	if (*format == '\0')
	{
		write(1, new_line, 1);
		return (0);
	}
	while (*format)
	{
	if (*format == '%')
	{
		format++;
		switch (*format)
		{
			case 'c':
			{
				int c = va_arg(arg, int);

				i += write(1, &c, 1);
				break;
			}
			case 's':
			{
				char *str = va_arg(arg, char*);
				int size = strlen(str);

				i += write(1, str, size);
				break;
			}
			case '%':
			{
				char p = '%';

				i += write(1, &p, 1);
				break;
			}
		}
	}
	else
	{
		i += write(1, format, 1);
	}
	format++;
	}
	return (i);
}
