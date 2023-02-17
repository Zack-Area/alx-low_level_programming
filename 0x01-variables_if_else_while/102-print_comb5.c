#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: 0 (success)
 */

int main(void)
{
	int digit_1, digit_2;

	for (digit_1 = 0; digit_1 <= 99; digit_1++)
	{
		for (digit_2 = 0; digit_2 <= 99; digit_2++)
		{
			if (digit_1 < digit_2 && digit_1 != digit_2)
			{
				putchar((digit_1 / 10) + '0');
				putchar((digit_1 % 10) + '0');
				putchar(' ');
				putchar((digit_2 / 10) + '0');
				putchar((digit_2 % 10) + '0');
				if (digit_1 != 98 || digit_2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

