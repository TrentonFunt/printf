#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int len;
int len2;
unsigned int ui;
void *addr;

len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
ui = (unsigned int)INT_MAX + 1024;
addr = (void *)0x7ffe637541f0;
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);
_printf("Unsigned:[%u]\n", ui);
printf("Unsigned:[%u]\n", ui);
_printf("Unsigned octal:[%o]\n", ui);
printf("Unsigned octal:[%o]\n", ui);
_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
_printf("Address:[%p]\n", addr);
printf("Address:[%p]\n", addr);
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
_printf("Unknown:[%r]\n");
printf("Unknown:[%r]\n");
/*extra*/
_printf("Large Integer:[%d]\n", INT_MAX);
printf("Large Integer:[%d]\n", INT_MAX);
_printf("Overflow:[%u]\n", UINT_MAX + 1);
printf("Overflow:[%u]\n", UINT_MAX + 1);
_printf("Null String:[%s]\n", NULL);
printf("Null String:[%s]\n", NULL);
_printf("Character:[%c]\n", 'A');
printf("Character:[%c]\n", 'A');
_printf("Character:[%c]\n", '\0');
printf("Character:[%c]\n", '\0');
_printf("Character:[%c]\n", '\n');
printf("Character:[%c]\n", '\n');
_printf("String:[%s]\n", "Hello, World!");
printf("String:[%s]\n", "Hello, World!");
_printf("String:[%s]\n", "");
printf("String:[%s]\n", "");
_printf("Percent:[%%]\n");
printf("Percent:[%%]\n");
_printf("String (NULL pointer):[%s]\n", (char *)NULL);
printf("String (NULL pointer):[%s]\n", (char *)NULL);
len = _printf("Len:[%d]\n", len);
len2 = printf("Len:[%d]\n", len2);
_printf("Unknown:[%r]\n");
printf("Unknown:[%r]\n");
_printf("String (Special characters):[%s]\n", "!@#$%^&*()");
printf("String (Special characters):[%s]\n", "!@#$%^&*()");
_printf("Percent with extra text:[%% Extra Text]\n");
printf("Percent with extra text:[%% Extra Text]\n");
_printf("Multiple characters:[%c%c%c]\n", 'A', 'B', 'C');
printf("Multiple characters:[%c%c%c]\n", 'A', 'B', 'C');
_printf("Multiple strings:[%s %s]\n", "Hello", "World");
printf("Multiple strings:[%s %s]\n", "Hello", "World");
_printf("Mixed characters and strings:[%c %s]\n", 'X', "Y");
printf("Mixed characters and strings:[%c %s]\n", 'X', "Y");
_printf("String with format specifier: [%s%c%s]\n", "Begin", 'M', "End");
printf("String with format specifier: [%s%c%s]\n", "Begin", 'M', "End");
_printf("String with multiple format specifiers: [%s%c%d]\n", "Text", 'A', 123);
printf("String with multiple format specifiers: [%s%c%d]\n", "Text", 'A', 123);
_printf("Multiple percent signs: [%%%%]\n");
printf("Multiple percent signs: [%%%%]\n");
_printf("String with large buffer size: [%100s]\n", "This is a long string");
printf("String with large buffer size: [%100s]\n", "This is a long string");
_printf("Large integer and string: [%d %s]\n", INT_MAX, "Hello");
printf("Large integer and string: [%d %s]\n", INT_MAX, "Hello");
_printf("Empty format string: []\n");
printf("Empty format string: []\n");
_printf("Large number of characters: [%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c]\n",
            'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
            'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T');
printf("Large number of characters: [%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c]\n",
           'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
           'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T');
len = _printf("Test Case 1: [%c]\n", '\0');
printf("Test Case 1: [%c]\n", '\0');
len = _printf("Test Case 2: [%c]\n", '\t');
printf("Test Case 2: [%c]\n", '\t');   
len = _printf("Test Case 3: [%c]\n", '0');
printf("Test Case 3: [%c]\n", '0');
len = _printf("Test Case 4: [%c]\n", 'A');
printf("Test Case 4: [%c]\n", 'A');
/* extra extra */
len = _printf("Test Case 1: %d\n", 12345);
printf("Test Case 1: %d\n", 12345);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);
len = _printf("Test Case 2: %i\n", -98765);
printf("Test Case 2: %i\n", -98765);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);
len = _printf("Test Case 3: %d\n", 0);
printf("Test Case 3: %d\n", 0);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);
len = _printf("Test Case 4: %i\n", INT_MAX);
printf("Test Case 4: %i\n", INT_MAX);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);
len = _printf("Test Case 5: %d\n", INT_MIN);
printf("Test Case 5: %d\n", INT_MIN);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);
len = _printf("Test Case 6: %i\n", 42);
printf("Test Case 6: %i\n", 42);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);
len = _printf("Test Case 7: %d\n", -32768);
printf("Test Case 7: %d\n", -32768);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);
len = _printf("Test Case 8: %i\n", 65535);
printf("Test Case 8: %i\n", 65535);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);
len = _printf("Test Case 9: %d\n", -2147483647);
printf("Test Case 9: %d\n", -2147483647);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);
len = _printf("Test Case 10: %i\n", 2147483647);
printf("Test Case 10: %i\n", 2147483647);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);
len = _printf("Test Case 1: %i\n", 12345);
printf("Test Case 1: %i\n", 12345);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);

len = _printf("Test Case 2: %i\n", -98765);
printf("Test Case 2: %i\n", -98765);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);

len = _printf("Test Case 3: %i\n", 0);
printf("Test Case 3: %i\n", 0);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);

len = _printf("Test Case 4: %i\n", INT_MAX);
printf("Test Case 4: %i\n", INT_MAX);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);

len = _printf("Test Case 5: %i\n", INT_MIN);
printf("Test Case 5: %i\n", INT_MIN);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);

len = _printf("Test Case 6: %i\n", 42);
printf("Test Case 6: %i\n", 42);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);

len = _printf("Test Case 7: %i\n", -32768);
printf("Test Case 7: %i\n", -32768);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);

len = _printf("Test Case 8: %i\n", 65535);
printf("Test Case 8: %i\n", 65535);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);

len = _printf("Test Case 9: %i\n", -2147483647);
printf("Test Case 9: %i\n", -2147483647);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);

len = _printf("Test Case 10: %i\n", 2147483647);
printf("Test Case 10: %i\n", 2147483647);
_printf("Length:[%d]\n", len);
printf("Length:[%d]\n", len);
return (0);
}
