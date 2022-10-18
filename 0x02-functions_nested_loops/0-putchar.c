#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Alaways 0 (Successful)
 */
int main(void)
{
	char *st = "_putchar";

	while (*st)
	{
		_putchar(*st);
		st++;
	}
	_putchar('\n');
	return (0);
}
