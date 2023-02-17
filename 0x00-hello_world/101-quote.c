#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: Prints a string of text to standard error
 *
 * Return: 1
 */

int main(void)
{
	fwrite("and that piece of art is useful\"\
 - Dora Korpar, 2015-10-19\n", 61, 1, stderr);
	exit(1);
}
