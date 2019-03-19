#include "holberton.h"

/**
 * va_print_s - get value with va_arg and then _printstr
 * @valist: pointer to memory location
 *
 * Return: number of characters printed
 */
int va_print_s(va_list valist)
{
	return(i_to_str((va_arg(valist, char*));
}
