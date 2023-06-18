#include <stdio.h>
/**
 * main - Prints alphabet
 *
 * Return: always 0
 */
int main(void)
{
	char Alph[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int a, i;

	for (a = 0; a < 26; a++)
	{
	for (i = 0; i < 26; i++)
		{
	putchar(alph[a][i]);
	}
	putchar('\n');
		}
	return (0);
}
