#include "main.h"

/**
 * _memset - 
 *
 *
 * @n: unsigned integer that represents the number of bytes to set
 *
 *
 * @s: pointer to a character array (String)
 *
 * 
 * @b: character that represents the value
 * 
 *
 * Return: changed array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
