#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char BIGALP[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int o;

	for (i = 0; i <= 26; i++)
	{
		putchar(alp[i]);
	}
	for (o = 0; o <= 27; o++)
	{
		putchar(BIGALP[o]);
	}
	putchar('\n');
	return (0);
}
