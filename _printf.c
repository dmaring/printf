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
	unsigned int count = 0;
	int (*ptr)(va_list);
	va_list valist;

	va_start(valist, format);

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			/** check for %% case **/
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i+=2;
				break;
			}
			i++;
			ptr = get_form_func(&format[i]);
			i++;
			/** check if pointer not NULL **/
			if (ptr)
			{
				ptr(valist);
				i++;
				break;
			}
			else
			{
				_putstr("Error\n");
				break;
			}
		}

		/** print character if not a format id **/
		else
		{
			_putchar(format[i]);
			i++;
		}

	}
	return (count);
}
