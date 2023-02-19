#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all possible combinations of
 * single-digit numbers, separated by a , anf followed by a space
 * followed by a new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		if (number == 57)
		{
			putchar(number);
			number++;
		}
		else
		{
			putchar(number);
			putchar(44);
			putchar(32);
			number++;
		}
	}
	putchar('\n');
	return (0);
}
