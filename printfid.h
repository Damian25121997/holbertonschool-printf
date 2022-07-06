#include "main.h"

void print_number_xd(unsigned int n);

/**
* print_number - print a number
* @n: is an input
*/

int print_number(int n)
{
		if (n < 0)
		{
			putchar('-');
			print_number_xd(-(unsigned int)n);
			return (1);
		}
		else
			print_number_xd(n);
			return (1);
}

/**
* print_number_xd - print a number
* @n: is an input
*/

void print_number_xd(unsigned int n)
{
	if (n / 10 != 0)
	{
		print_number_xd(n / 10);
	}
	putchar((n % 10) + '0');
}
