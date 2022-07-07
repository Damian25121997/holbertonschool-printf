#include "main.h"

int _printf(const char *format, ...)
{
/**	char *sep;*/
	int x, z, c = 0;
	va_list list;


	print atr[] = { {'c', print_char},
			{'s', print_string},
			/**{'d', print_number},
			{'i', print_number},
*/ };

	va_start(list, format);
	for (x = 0; format && format[x]; x++)
	{
			if (format[x] == '%' && format[x + 1] != '%')
			{
				z = 0;
				if (format[x + 1] == atr[z].letter)
				{
					c += atr[z].f(list);
					x++;
					z++;
				}
			}
			else if (format[x] == '%' && format[x + 1] == '%')
			{
				putchar('%');
				c++;
			}
			else
			{
				putchar(format[x]);
				c++;
			}
	}
	va_end(list);
	return (c);
}
