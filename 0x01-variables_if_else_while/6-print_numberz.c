#include <stdio.h>

/**
 * main - entery point
 *
 * Description: print 0-9 using putchar
 *		while using int variable
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII repersentation*/
		putchar(digit + '0');
		digit++;
	}
	printf('\n');

	return (0);
}
