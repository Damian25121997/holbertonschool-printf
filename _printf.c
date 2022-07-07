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
*/ 			{'\0', NULL} };

	va_start(list, format);
	if (format == NULL)
		return (-1);
	for (x = 0; format != NULL && format[x] != '\0'; x++)
	{
			if (format[x] == '%' && format[x + 1] == '%')
			{
				_putchar('%');
				x++;
				c++;
			}
			else if (format[x] == '%' && format[x + 1] == '\0')
			{
				return (-1);
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
					else
					{
						_putchar('%');
						_putchar(format[x + 1]);
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
