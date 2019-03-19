#include "../holberton.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	char *s;

	s = i_to_str(INT_MIN, 10);
	printf("%s\n", s);
	s = i_to_str(-2356, 10);
	printf("%s\n", s);
	printf("%i\n", -2356);
	s = i_to_str(540, 10);
	printf("%s\n", s);
	s = i_to_str(0, 10);
	printf("%s\n", s);
	s = i_to_str(1356, 16);
	printf("%s\n", s);
	s = i_to_str(788953, 16);
	printf("%s\n", s);
}
