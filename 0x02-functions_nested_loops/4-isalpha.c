#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: input from the function
 *
 * Return: 1 if c is a letter otherwise 0 if not
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}


