#include <stdio.h>

/**
 * main - entery point
 *
 * Description: print 0-9 using putchar
 *              while using int variable
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n')

	return (0);
}
