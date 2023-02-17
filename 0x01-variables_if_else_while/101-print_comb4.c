#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: 0 ( success)
 */


int main(void)
{
	int digit_1 = '0';
	int digit_2 = '0';
	int digit_3 = '0';

	while (digit_1 <= '7')
	{
		while (digit_2 <= '8')
		{
			while (digit_3 <= '9')
			{
				if (digit_1 < digit_2 && digit_2 < digit_3)
				{
					putchar(digit_1);
					putchar(digit_2);
					putchar(digit_3);
					if (!(digit_1 == '7' && digit_2 == '8' && digit_3 == '9'))
					{
						putchar(',');
						putchar(' ');
					}

				}
				digit_3++;
			}
			digit_3 = '0';
			digit_2++;
		}
		digit_2 = '0';
		digit_1++;
	}
	putchar('\n');
	return (0);
}
