#include "main.h"

/**
 *_strncpy - function that copies a string
 *
 * @src: The origin of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int f;

	for (f = 0; f < n && *(src + f); f++)
	{
		*(dest + f) = *(src + f);
	}
	for (; f < n; f++)
	{
	*(dest + f) = '\0';
	}
	return (dest);

}
