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

	if (&format[i] == NULL)
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;
			if (format[i] == '%') /** check for %% case **/
			{
				if (format[i + 1] != '\0')
				{
					counter += _putchar('%');
					i++;
					continue;
				}
			}
			ptr = get_form_func(&format[i]);
			if (ptr) /** check if pointer not NULL **/
				counter += ptr(valist);
			else
			{
				counter += print_string("%");
				counter += (_putchar(format[i]));
			}
		}
		else
			counter += _putchar(format[i]);
		i++;
	}
	return (counter);
}
