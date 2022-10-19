#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n, count;

	count = 0;

	while (count < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		count++;
		_putchar('\n');
	}
}
