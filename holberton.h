#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct format - holds formats and corresponding function pointers
 *
 * @id: formmat identifier
 * @f: format function
 */
typedef struct printer
{
	char *id;
	int (*f)(va_list);
} printer_t;


int _putchar(char c);
int _putstr(char *c);
int va_print_c(va_list);
int va_print_s(va_list);
int (*get_form_func(const char *s))(va_list);
int _printf(const char *format, ...);
int strlen_1(char *s);
char * d_to_str(double num);
char * i_to_str(int num, int base);
int print_string(char *s);


#endif /** HOLBERTON_H **/
