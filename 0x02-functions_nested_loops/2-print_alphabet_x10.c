#include"main.h"

/**
 * Description: print_alphabet_x10 - funcation that will
 *		print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = '0'; line <= '9'; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
