#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: always 0
 *
 */
int main(void)
{
	int b;

	b = 0;
	while
		(b < 10) {
			putchar(b + '0');
			b++;
		}
	putchar('\n');
	return (0);
}
