#inlcude "main.h"
/**
 * _printf - print to stout formatted text
 *
 * @format: format specifier
 * Return: no of bytes printed
 * int _printf (const char *format, ...)
 {
unsigned int i; count = 0;

va_list args;

va_starts(arg, format);

for(i = 0; format [i] ! = '\0' i++
{
if (format[i] != '%')
{
printf_putchar(format [i]);
}

}
