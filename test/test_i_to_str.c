#include "../holberton.h"
#include <stdio.h>

int main()
{
	char *s;

	s = i_to_str(1356, 10);
	printf("%s\n", s);
	s = i_to_str(-2356, 10);
	printf("%s\n", s);
	s = i_to_str(0, 10);
	printf("%s\n", s);
	s = i_to_str(1356, 16);
	printf("%s\n", s);
	s = i_to_str(788953, 16);
	printf("%s\n", s);
}
