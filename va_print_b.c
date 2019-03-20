#include "holberton.h"

/**
 * va_print_b - get value with va_arg and then print the binary
 * @valist: pointer to memory location
 *
 * Return: number of characters printed
 */
int va_print_b(va_list valist)
{
	int counter = 0;
	char *s;

	s = i_to_str(va_arg(valist, int), 2);

	counter += (print_string(s));
	free(s);
	return (counter);
}
