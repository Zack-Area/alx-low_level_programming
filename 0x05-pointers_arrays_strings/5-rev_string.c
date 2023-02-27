#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int k = 0, i, j;
	char temp;

	while (k >= 0)
	{
		if (s[k] == '\0')
			break;
		k++;
	}

	for (i = 0; i < (k - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = s[j];
			s[j] = s[j - 1];
			s[j - 1] = temp;
		}
	}
}

