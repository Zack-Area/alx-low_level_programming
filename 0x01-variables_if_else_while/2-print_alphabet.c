#include <stdio.h>
/**
  * main - The Entry point
  *
  *
  * Return: 0 (success)
  */
int main(void)
{
	char lower_alpha = 'a';

	while (lower_alpha <= 'z')
	{
		putchar(lower_alpha);
		lower_alpha++;
	}
	putchar('\n');
	return (0);
}
