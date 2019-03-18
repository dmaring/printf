#include "holberton.h"

/**
 * va_print_i - get value with va_arg and then print the integer
 * @valist: pointer to memory location
 *
 * Return: number of characters printed
 */
int va_print_i(va_list valist)
{
	char *s;

	s = i_to_str(va_arg(valist, int), 10);
	return (print_string(s));
}
