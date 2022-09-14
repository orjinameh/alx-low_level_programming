#include "main.h"

/**
*print_alphabet_x10 - prints 10 times the alphabet, in lowercase
*Return: always 0
*/

void print_alphabet_x10(void)
{
	char alpha;

	int check;

	for (check = 1; check <= 10; check++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
