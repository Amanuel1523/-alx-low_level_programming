#include "main.h"
/**
 * _islower - check ethier the input is lowercase or not
 *
 * c - is the parameter of the defined function _islower
 *
 * Return: if it returns 1 the letter is in lowercase else it returns 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
