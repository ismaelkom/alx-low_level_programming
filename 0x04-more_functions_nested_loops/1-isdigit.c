#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @x: The number to be checked
 * Return 1 for character that will be a digit or 0 for any else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
		return (1);
	else
		return (0);
}
