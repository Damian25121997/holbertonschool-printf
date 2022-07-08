#include "main.h"

void print_number_xd(unsigned n);

/**
* print_number - print a number
* @n: is an input
*/

int print_number(va_list list)
{
		int n = va_arg(list, int);
		
		if (n < 0)
		{
			_putchar('-');
			print_number_xd(-(n));
			return (1);
		}
		else
		{
			print_number_xd(n);
			return (1);
		}
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
	_putchar((n % 10) + '0');
}
