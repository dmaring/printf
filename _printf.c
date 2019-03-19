#include "holberton.h"

/**
 * _printf - format and print data
 * @format: input format and text
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int counter = 0;
	int (*ptr)(va_list);
	va_list valist;

	va_start(valist, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%') /** check for %% case **/
			{
				counter += _putchar('%');
				i++;
				continue;
			}

			ptr = get_form_func(&format[i]);

			if (ptr) /** check if pointer not NULL **/
				counter += ptr(valist);
		}
		/** print character if not a format id **/
		else
		{
			counter += _putchar(format[i]);
		}
		i++;

	}
	return (counter);
}
