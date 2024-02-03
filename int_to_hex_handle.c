#include "main.h"

/**
 * int_to_hex - a function that converts
 * an int to the hex equivalent
 * @data: the int to be converted
 * @buffer: the buffer to write to
 * Return: the count of characters in buffer
 */
int int_to_hex(int data, void *buffer)
{
	int count;

	count = 0;
	count = sprintf(buffer, "%x", data);
	write(1, buffer, count);
	return (count);
}
