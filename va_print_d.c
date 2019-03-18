#include "holberton.h"

/**
 * va_print_d - get value with va_arg and then print the double
 * @valist: pointer to memory location
 *
 * Return: number of characters printed
 */
int va_print_d(va_list valist)
{
	char *s;

	s = d_to_str(va_arg(valist, double));
	return (print_string(s));
}
