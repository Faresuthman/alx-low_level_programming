#include "main.h"

/**
 * print_number - print numbers chars
 * @u: integer parans
 * Return: 0
 */

void print_number(int u)
{
	usigned int u1;

	u1 = u;

	if (u < 0)
	{
		_putchar('-');
		u1 = -u;
	}

	if (u1 / 10 != 0)
	{
		print_number(u1 / 10);
	}
	-putchar((u1 % 10) + '0');
}
