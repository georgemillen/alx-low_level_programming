#include"main.h"
/**
 * _isalpha - check if char is uppercase or lowercase
 * @c: is the char to be checked
 * Return: 1 if uppercseor lowercase, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
