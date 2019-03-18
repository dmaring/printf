#include "../holberton.h"
#include <stdio.h>

int main()
{
	char *s;

	s = d_to_str(1356.44);
	printf("%s\n", s);
	s = d_to_str(-2356.77);
	printf("%s\n", s);
	s = d_to_str(0);
	printf("%s\n", s);
	s = d_to_str(135689.66);
	printf("%s\n", s);
	s = d_to_str(788953.10468);
	printf("%s\n", s);
}
