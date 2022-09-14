#include "main.h"
/**
 * print_alphabet -> print lowercase alphabets
 */
void print_alphabet(void)
{
	int alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha = alpha + 1;
	}
	_putchar('\n');
}
