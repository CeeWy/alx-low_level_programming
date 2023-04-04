#include "main.h"
/**
 * print_rev - imprime en reversa
 * @f: string
 * return: 0
 */
void print_rev(char *f)
{
	int longi = 0;
	int o;

	while (*f != '\0')
	{
		longi++;
		f++;
	}
	f--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*f);
		f--;
	}

	_putchar('\n');
}
