#include "main.h"

/**
 * get_endianness - checks whether a machine is big endian or little
 *
 * Return: 1 if little endian, 0 otherwise
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *p = (char *)&n;

	if (*p == 1)
		return (1);
	else
		return (0);

}

