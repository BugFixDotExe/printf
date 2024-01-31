#include "main.h"
#include <string.h>
/**
 * str_handle - prodcues string output according to format
 * @str: string
 * Return: number of chars printed
 */
int str_handle(char *str)
{
	size_t str_len;

	int count = 0;

	if (str == NULL)
		str = "(null)";
	str_len = strlen(str);
	count += write(1, str, str_len);
	return (count);
}
