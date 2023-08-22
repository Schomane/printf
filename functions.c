#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - prints a char
 * @types : list of agruments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: Width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print char(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	char = c va_arg(types, int);

return (handle_write_char(c, buffer, flags, width, precision, size));
}
