#include "holberton.h"

/**
 * va_print_s - get value with va_arg and then _printstr
 * @valist: pointer to memory location
 *
 * Return: number of characters printed
 */
int va_print_s(va_list valist)
{
	return(print_string(va_arg(valist, char *)));
}
