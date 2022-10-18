#include "main.h"

/**
 * print_reverse - prints a string in reverse
 * @r:  the variadic argument brought from printf function
 * Return: amount of characters printed
 */

int print_reverse(va_list r)
{
	int i = 0, lenr = 0;
	char *s = va_arg(r, char *);

	while (s[i] != '\0')
		i++;
	lenr = i;

}
