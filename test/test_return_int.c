#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	double f = 234.233432;
	int i = 987;

	printf("%i\n", _putchar('c'));
	printf("%i\n", print_string("Hello world!"));

	printf("%i\n", _printf("Hello"));

	printf("%i\n", _printf("%f and %i\n", f, i));

	return (0);
}
