#include "main.h"

/**
*print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line
*Return: always 0
*/

void print_alphabet_x10(void)
{
	int check;

	check = 0;

	while (check <= 9)
	{
		print_alphabet();
	}

	_putchar('\n');;
}
