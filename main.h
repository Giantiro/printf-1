#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct special_cases -struct for special cases
 *
 * @match: the special character t match after percent sign
 * @fnct: The function associated
 *
 *
 */
typedef struct special_cases;
{
	char *match;
	int (*fnct)(va_list);
}spec_f;

 * /* main function */

int _printf(const char *format, ...);
/*format and print data*/

int _write_char(char c);
/*writes the character c to stdout*/

int (*mod_character_s(const char *next, int mtch))(va_list);
/*search for match and execute the function according to this*/

int print_char(va_list c);
/*prints a char*/

int print_string(va_list s);
/*prints a string */

int print_number(va_list i);
/*converts a string to an integer and prints its content.*/

int print_unsigned(va_list u);
/*converts a string to an unsigned integer and prints its content*/

int print_reverse(va_list r);
/*prints a string in reverse*/

#endif /* PRINT_F */
