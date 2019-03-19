#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

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
	_printf("string: %s %s", "This is string 1\n", " and this is string 2\n");
	_putchar('\n');
	_printf("%c\n", c);
	_putchar('\n');
**/
	_printf("Length:[%f, %i]\n", 40.23, 233);
	_printf("String: %s\n", "Hello there");
	_printf("Character: %c\n", 'c');

	return (0);
}
