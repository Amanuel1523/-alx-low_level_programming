#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Alaways 0 (Successful)
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
