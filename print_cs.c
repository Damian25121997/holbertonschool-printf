#include "main.h"

int print_char(va_list list)
{
	int c;
	c = va_arg(list, int); 
		putchar(c);
		return (1);
}


int print_string(va_list list)
{
	char *p;
	int s;

	p = va_arg(list, char *);

	if (p == NULL)
	{
		return (0);
	}
	for (s = 0; p[s] != '\0'; s++)
		putchar(p[s]);
	return (s);
}


