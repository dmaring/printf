#include "holberton.h"

/**
 * va_print_i - get value with va_arg and then print the integer
 * @valist: pointer to memory location
 *
 * Return: number of characters printed
 */
int va_print_i(va_list valist)
{
         int counter = 0;
         char *s = (va_arg(valist, char*));

	 counter = (print_string(s));
	 free (s);
	 return(counter);
}
