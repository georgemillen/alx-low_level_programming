#include"main.h"
/**
 * -isdigit - checks for a digit 0 thru 9
 *  @c: char to be checked
 *  Return: 1 if char is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
