#include "holberton.h"

/**
 * get_form_func - selects correct function for format
 * @s: input format identifier
 *
 * Return: pointer to matching function
 */
int (*get_form_func(const char *s))(va_list)
{
	/** initialize struct of print and format functions **/
	printer_t printers[] = {
		{"c", va_print_c},
		{"s", va_print_s},
		{"i", va_print_i},
		{"d", va_print_i},
		{"b", va_print_b},
		{"R", va_print_rot13},
		{NULL, NULL}
	};

	int i = 0;

	/** loop through fmatters id member **/
	while (printers[i].id)
	{
		if (*s == *(printers[i].id))
			break;
		i++;
	}

	return (printers[i].f);
}
