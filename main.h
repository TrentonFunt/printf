#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(char c);
int print_str(char *str);
int print_int(int num);
int print_uint(unsigned int num);
int print_octal(unsigned int num);
int print_hex(unsigned int num, int uppercase);

#endif /* MAIN_H */
