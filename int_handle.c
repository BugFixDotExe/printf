#include "main.h"
/**
 * int_handle - produces int according to format
 * Return: number of characters printed
 * @data: data to be printed
 * @buffer: buffer to store output
 */
int int_handle(int data, void *buffer)
{
	int count;

	count = 0;
	count = sprintf(buffer, "%d", data);
	write(1, buffer, count);
	return(count);
}
