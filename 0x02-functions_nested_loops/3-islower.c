#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Description: 'the program's description'
 * @c: the character to be checked
 *
 * Return: 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
