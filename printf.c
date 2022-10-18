#include "main.h"

/**
 * _printf - Receives the main string and all necessary parameters to print
 * a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	va_list call;
	unsigned int i, length = 0;

	va_start(call, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++) /*runs along the chain*/
	{
		if (format[i] == '%')
		{
		     	if (format[i + 1] == '%')
		    	{  _write_char('%');
				i = 1 + 1;
				length++;
			}
			else if (mod_character_s(format, i + 1) != '\0')
			{   length += mod_character_s(format, i + 1)(call);
				i = i + 1;
			}
			else
			{ _write_char(format[i]);
				length++;
			}
		}
		else
		{ _write_char(format[i]);
			length++;
		}
	}
	va_end(call);
	return (length)
}
