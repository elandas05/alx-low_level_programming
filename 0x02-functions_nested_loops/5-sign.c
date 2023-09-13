#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * Description:
 * @n: sign to be printed
 *
 * Return: 1 and prints + , 0 and prints 0  or -1 and prints -
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
		return (1);
	}
	else if (n == 0)
		{
		_putchar(48);
			return (0);
		}
	if (n < 0)
	_putchar(45);
	return (-1);

}
