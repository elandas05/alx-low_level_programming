#include "main.h"

/**
 * main - Determine if a number is positive, negative or zero
 * 0: the number to be checked
 * Return: always 0
 */

void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;

}