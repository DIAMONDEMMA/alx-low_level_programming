#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int n;

	n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n = n + 1;
	}
	_putchar('\n');
}
