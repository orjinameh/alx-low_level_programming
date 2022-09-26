#include "main.h"

/**
*_memset - fill memory with a constant byte
* @s: a pointer to a memory
* @b: the byte to write to memor
* @n: the number of bytes to write
*
* Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		*s[i] = b;
	}

	return (s);
}
