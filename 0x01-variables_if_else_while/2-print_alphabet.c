#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char lowerCase;

	for (lowerCase = 'a', lowerCase<='z', lowerCase++)
		purchar(lowerCase);
		putchar("\n");

	return(0);
}
