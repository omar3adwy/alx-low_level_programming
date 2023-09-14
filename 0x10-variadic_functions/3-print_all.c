#include "variadic_functions.h"

/**
 * format_char - formats character
 * @separator: the string separator
 * @ap: arguments pointer
 */

void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - formats integer
 * @separator: the string separator
 * @ap: arguments pointer
 */

void format_int(char *separator, va_list ap)
{       
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_int - formats string
 * @separator: the string separator
 * @ap: arguments pointer
 */

void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
		case 1;
			str = "(nil)";

	printf("%s%s", separator, va_arg(ap, int));
}


