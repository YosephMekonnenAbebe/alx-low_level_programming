#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H 

#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
oid print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_string(va_list);

/**
 * struct format_t - entrPoint
 *
 * @t: variable
 * @f: af unction
 */
typedef struct format_t
{
	char *t;
	void (*f)(va_list);
}
format_t;

#endif /* VARIADIC_FUNCTIONS.H */
