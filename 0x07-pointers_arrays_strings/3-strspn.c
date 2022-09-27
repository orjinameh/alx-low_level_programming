#include "main.h"

/**
* _strspn - get length of a prefix substring
* @s: the string to searc
* @accept: the characters to allow in the substring
*
* Description: calculates the length (in bytes) of the initial segment of s
* which consists entirely of bytes in accept.
* Return: number of bytes in the initial segment of s which consist only of
*/

unsigned int _strspn(char *s, char *accept)
{
	int match;
	int i = 0;

	if (*s)
	{
		for (int j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}

			if (*(accept[j] +1) == '\0' && s[i] != accept[j])
				return (match);
		}

		i++;
	}

	return (matches);
}
