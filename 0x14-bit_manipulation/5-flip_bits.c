#include "main.h"

/**
*flip_bits - gets the number of bits to flip to get from n to m
*@n: initial number
*@m: final number
*
*Return: the number of bit bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = n ^ m;
	int count = 0;

	while (bit)
	{
		count += bit & 1;
		bit >>= 1;
	}
	return (count);
}
