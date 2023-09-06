#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: chat type string
 * @src: chat type string
 * Description: copy the string pointed to by pointer 'src' to
 * the buffer pointed to 'dest'
 * Return: pointed to 'dest'
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
