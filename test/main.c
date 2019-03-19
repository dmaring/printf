#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int c = 'l';
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	/**
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("Let's try to printf a simple sentence.\n");
	_printf("%s", "This is a string");
	_putchar('\n');
	_printf("%c\n", c);
	_putchar('\n');
	**/

	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%f, %d]\n", 40.23, 233);

	return (0);
}
