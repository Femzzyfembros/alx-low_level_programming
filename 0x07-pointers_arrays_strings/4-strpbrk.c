#include "main.h"

/**
 * _strpbrk - function that searches a string for any bytes
 *
 * @s:first occurrence in the string
 *
 * @accept: matches one of the byte
 *
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
