#include "main.h"
/**
 * char_handle - produces character output according to format
 * @data: buffer
 * Return: number of chars
 */
int char_handle(int data)
{
	int count;

	count = 0;
	count += write(1, &data, 1);
	return (count);
}
