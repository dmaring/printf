#include "holberton.h"

/**
 * va_print_c - get value with va_arg and then _putchar
 * @valist: pointer to memory location
 *
 * Return: number of characters printed
 */
int va_print_c(va_list valist)
{
	return (_putchar(va_arg(valist, int)));
}
