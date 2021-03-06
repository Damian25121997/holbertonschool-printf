#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_number(va_list list);
int print_char(va_list list);
int print_string(va_list list);
int _putchar(char c);

/**
 * struct prf - posible character
 * @letter: letter to check
 * @f: pointer to list
 */
typedef struct prf
{
	char letter;
	int (*f)(va_list);
} print;
#endif
