#include "main.h"
/**
 * str_handle - prodcues string output according to format
 * @str: string
 * Return: number of chars printed
 */
int str_handle(char *str)
{
	int count = 0;
	size_t str_len = strlen(str);

	count += write(1, str, str_len);
	return (count);
}
