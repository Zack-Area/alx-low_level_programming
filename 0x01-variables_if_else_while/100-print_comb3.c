#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: 0 (success)
 */
int main(void)
{
	int digit_1 = '0';
	int digit_2 = '0';

	while (digit_1 <= '9')
	{
		while (digit_2 <= '9')
		{
			if (!(digit_1 > digit_2 || digit_1 == digit_2))
			{
				putchar(digit_1);
				putchar(digit_2);
				if (digit_1 == '8' && digit_2 == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit_2++;
		}
		digit_2 = '0';
		digit_1++;
	}
	return (0);
}


