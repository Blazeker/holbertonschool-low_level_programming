#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

struct datatypes
{
	char *car;
	void (*f)(va_list args);
};
typedef struct datatypes var_types;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
