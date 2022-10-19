#include "main.h"
/**
 * _abs - computs absolute value of a function
 *
 * @ab: integer input
 *
 * Return: absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
