#include "main.h"
#include <stdlib.h>
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0;
	/*char *str;*/
	void *buffer = malloc(1024);
	char *new_line = "\n";

	va_start(arg, format);
	if (buffer == NULL)
		return (-1);
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
			format++;
			switch (*format)
			{
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
					i += int_handle(va_arg(arg, int), buffer);
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
