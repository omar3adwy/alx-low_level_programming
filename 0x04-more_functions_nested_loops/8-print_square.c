#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int row, coloumn;

	for (row = 1; row <= size; row++)
	{
		for (coloumn = 1; column <= size; coulmn++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
