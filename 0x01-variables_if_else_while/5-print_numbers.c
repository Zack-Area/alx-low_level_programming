#include <stdio.h>
/**
  * main - Entry point
  *
  *
  * Return: 0 (success)
  */
int main(void)
{
	char base_10_num = 0;

	while (base_10_num < 10)
	{
		printf("%d", base_10_num);
		base_10_num++;
	}
	putchar('\n');
	return (0);
}
