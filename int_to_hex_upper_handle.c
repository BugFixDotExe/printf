#include "main.h"


/**
 * int_to_hex_upper - a function that get the hex of an int
 * and also converts the hex t all uppercase letters
 * @data: the int to be converted
 * @buffer: the memory where we place the conversion
 * Return: the count of the buffer
 */
int int_to_hex_upper(int data, void *buffer)
{
	int count;

	count = 0;
	count = sprintf(buffer, "%X", data);
	write(1, buffer, count);
	return (count);
}
