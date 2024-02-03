#include "main.h"

int unsigned_int(unsigned int data, void *buffer)
{
	int count;
	
	count = 0;
	count = sprintf(buffer, "%u", data);
	write(1, buffer, count);
	return (count);
}
