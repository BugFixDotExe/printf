#include "main.h"

/**
 * int_to_octal - a function that converts
 * a decimal to it's octal equivalent
 * @data: the decimal to be converted
 * Return: the count || 0 if fail
 */
int int_to_octal(int data)
{
	int *buffer, size, temp, i, count;
	char value;

	size = 0;
	count = 0;

	for (temp = data; temp > 0; temp /= 2)
		size++;
	buffer = malloc(sizeof(int) * size);
	if (buffer == NULL)
		return (0);

	for (i = 0; data > 0; i++)
	{
		*(buffer + i) = data % 8;
		data = data / 8;
	}
	for (i = i - 1; i >= 0; i--)
	{
		value = *(buffer + i) + '0';
		count += write(1,  &value, 1);
	}
	free(buffer);
	return (count);
}
