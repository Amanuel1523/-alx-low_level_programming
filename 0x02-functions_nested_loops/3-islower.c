#include "main.h"
/**
 * _isalpha - check ethier the input is lowercase or not
 *
 * Return: if it returns 1 the letter is in lowercase else it returns 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
