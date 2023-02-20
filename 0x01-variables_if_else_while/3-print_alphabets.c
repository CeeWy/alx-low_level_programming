#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - EntryPoint
 *
 * Return : Always 0 (success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	for (alp ='a'; alp <= 'Z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
