#include "holberton.h"

/**
 * va_print_d - get value with va_arg and then print the double
 * @valist: pointer to memory location
 *
 * Return: number of characters printed
 */
int va_print_d(va_list valist)
{
	int counter = 0;
	char *s = (va_arg(valist, double));

	counter = (print_string(s));
	free(s);
	return (counter);
}
