#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 * @n: Number of bytes from n2 to concatenate.
 *
 * Return: Pointer to space in memory containing concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_length, s2_length;

	/*check if the strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*compute the length of the strings*/

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
	/*memoey reservation - fot case 1 & 2.*/
	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*copy first string into str.*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/*copy second string into str.*/
	for (j = 0; j < n; j++)
	{
		str[i] = s2[i];
		i++;
	}

	str[i] = '\0';
	return (str);
}
