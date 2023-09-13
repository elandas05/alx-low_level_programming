#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char xtr;
	int i;
		i = 0;

	while (i < 10)
	{
		for (xtr = 'a'; xtr <= 'z'; xtr++)
		{
			_putchar(xtr);
		}
		_putchar('\n');
			i++;
	}


}
