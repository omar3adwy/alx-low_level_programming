#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: 0 (Success)
*/

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, coloumn;

		for (row = 1; row <= size; row++)
		{
			for (coloumn = 1; column <= size; coulmn++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
