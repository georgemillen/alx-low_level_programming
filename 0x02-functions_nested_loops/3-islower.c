#include"main.h"
/**
 *  _islower - checks if char is lowercase
 * @c:is the character to be chechked
 * Return: 1 if char is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
