#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: always 0
 *
 */
int main(void)
{
	char i;

	char j;

	i = 'a';
	j = 'A';
	while
		(i <= 'z') {
			putchar (i);
			i++;
		}
	while
		(j <= 'Z') {
			putchar (j);
			j++;
		}
	putchar('\n');
	return (0);
}
