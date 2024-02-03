#include "main.h"

/**
 * int_to_octal - a function that converts
 * a decimal to it's octal equivalent
 * @data: the decimal to be converted
 * Return: the count || 0 if fail
 */
int int_to_octal(int data, void *buffer)
{
	int count;

	count = 0;
	count = sprintf(buffer, "%o", data);
	write(1, buffer, count);
	return (count);
}
