#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase, followed by a new line
 *
 * Return: always 0
 *
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
