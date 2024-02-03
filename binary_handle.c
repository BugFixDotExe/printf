#include "main.h"

/**
 * int_to_binary - a function that converts int to binary
 * @a: the unsigned int to be converted
 * Return: still pondering on what to return
 */
int int_to_binary(unsigned int a)
{
	int i;
	int *buffer;
	int size;
	int len;
	unsigned int temp;

	size = 0;
	len = 0;
	for (temp = a; temp > 0; temp /= 2)
		size++;
	buffer = malloc(sizeof(int) * size);
	if (buffer == NULL)
		return (0);
	for (i = 0; a > 0; i++)
	{
		*(buffer + i) = a % 2;
		a = a / 2;
	}
	for (i = i - 1; i >= 0; i--)
	{
		char digit = *(buffer + i) + '0';
		len = write(1, &digit, 1);
	}
	return (len);
}
