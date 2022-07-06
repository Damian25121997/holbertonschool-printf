#include "main.h"

int _printf(const char *format, ...)
{
	/**char *sep;
*/	
	int x, z;
	va_list list;


	print atr[] = { {'c', print_char},
			{'s', print_string},
			/**{'d', print_number},
			{'i', print_number},
*/
			{'\0', NULL} };

	va_start(list, format);
	for (x = 0; format && format[x]; x++)
	{
			if (format[x] == '%' && format[x + 1] != '%')
			{	z = 0;

				while (atr[z].letter != '\0')
				{
					if (format[x + 1] == atr[z].letter)
					{
						atr[z].f(list);
						x++;
					}
				z++;
				}
			}
			else
				putchar(format[x]);
	}
	
	va_end(list);
	return (x);
}
