#include "main.h"
int main() 
{
	int a;
	int bytes = _printf("%%Hack th%c %s\n", 'e', "planet!");
	printf("%d\n", bytes);

	a = printf("%%Hack th%c %s\n", 'e', "planet!");
	printf("%d\n", a);

	return 0;
}
