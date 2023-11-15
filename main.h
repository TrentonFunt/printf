#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdbool.h>
#include <limits.h>

int _printf(const char *format, ...);
int handle_format_specifier(char specifier, va_list list_args);
int _putchar(char c);
int print_str(char *str);
int print_int(int num);
int print_uint(unsigned int num);
int print_octal(unsigned int num);
int print_hex(unsigned int num, int uppercase);
int print_pointer(void *addr);
int print_unknown(char specifier);
int print_binary(unsigned int num);
int print_string(char *str);

#endif /* MAIN_H */
