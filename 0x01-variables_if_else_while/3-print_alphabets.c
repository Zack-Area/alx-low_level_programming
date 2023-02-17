#include <stdio.h>
/**
  * main - Entry point
  * Return: 0 (success)
  */
int main(void)
{
	char low_alpha = 'a';
	char cap_alpha = 'A';

	while (low_alpha <= 'z')
	{
		putchar(low_alpha);
		low_alpha++;
	}
	while (cap_alpha <= 'Z')
	{
		putchar(cap_alpha);
		cap_alpha++;
	}
	putchar('\n');
	return (0);
}
