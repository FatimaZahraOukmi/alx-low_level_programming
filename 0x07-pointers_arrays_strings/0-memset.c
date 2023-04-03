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
	unsigned int i = 0;
	while (i < n)
	{
	s[i] = b;
	i++;
	}
	return (s);
}
