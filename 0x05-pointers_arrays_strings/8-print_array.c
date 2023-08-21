#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 *
 * @n: elements parameter input
 * @a: string parmeter input
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			print("%d, ", a[i]);
		else
			print("%d", a[i]);
	}
	printf("\n");
}
