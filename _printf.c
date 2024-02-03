#include "main.h"
#include <stdlib.h>

/**
 * _printf - a function that produces output according to a format.
 * @format: the spacifier
 * Return: a count of both format and ..
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0;
	/*char *str;*/
	void *buffer = malloc(1024);
	char *new_line = "\n";
	
	if (format == NULL)
		return (0);
	va_start(arg, format);
	if (buffer == NULL)
		return (0);
	if (*format == '\0')
	{
		write(1, new_line, 1);
		va_end(arg);
		return (0);
	}
	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (*format == '%' && strlen(format) <= 1)
				return (0);
			format++;
			switch (*format)
			{
				case '%':
				{
					i += write (1, format, 1);
					break;
				}
				case 'c':
				{
					i += char_handle(va_arg(arg, int));
					break;
				}
				case 's':
				{
					i += str_handle(va_arg(arg, char *));
					break;
				}
				case 'd':
				{
					i += digit_handle(va_arg(arg, int), buffer);
					break;
				}
				case 'i':
				{
					i += int_handle(va_arg(arg, int), buffer);
					break;
				}
				case 'b':
				{
					i += int_to_binary(va_arg(arg, unsigned int));
					break;
				}
				case 'u':
				{
					i += unsigned_int(va_arg(arg, unsigned int), buffer);
					break;
				}
				case 'o':
				{
					i += int_to_octal(va_arg(arg, unsigned int), buffer);
					break;
				}
				case 'x':
				{
					i += int_to_hex(va_arg(arg, int), buffer);
				}
			}
		}
	else
	i += write(1, format, 1);
	format++;
	}
	va_end(arg);
	free(buffer);
	return (i);
}
