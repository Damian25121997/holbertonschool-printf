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
	for (x = 0; format != NULL && format[x] != '\0'; x++)
	{
			if (format[x] == '%' && format[x + 1] == '%')
			{
				_putchar('%');
				x++;
				c++;
			}
			else if (format[x] == '%')
			{
				z = 0;
				while (atr[z].letter != '\0')
				{
					if (format[x + 1] == atr[z].letter)
					{
						c += atr[z].f(list);
					}
					z++;
				}
				x++;
			}
			else
			{
				_putchar(format[x]);
				c++;
			}
	}
	va_end(list);
	return (c);
}
