#include "holberton.h"

/**
 * _printf - format and print data
 * @format: input format and text
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	unsigned int counter = 0;
	int (*ptr)(va_list);
	va_list valist;

	va_start(valist, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%') /** check for %% case **/
			{
				_putchar('%');
				i += 1;
				break;
			}
			i++;
			ptr = get_form_func(&format[i]);
			i++;
			if (ptr) /** check if pointer not NULL **/
				counter += ptr(valist);
			else
			{
				counter += print_string("Error\n");
				break;
			}
		}
		/** print character if not a format id **/
		else
		{
			counter += _putchar(format[i]);
			i++;
		}

	}
	return (counter);
}
