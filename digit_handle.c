#include "main.h"
/**
 * digit_handle - formats digit output
 * Return: number of chars printed
 * @digit: digit to be printed
 * @buffer: buffer to store output
 */
int digit_handle(int digit, void *buffer)
{
	int count;

	count = 0;
	count = sprintf(buffer, "%d", digit);
	write(1, buffer, count);
	return(count);
}
