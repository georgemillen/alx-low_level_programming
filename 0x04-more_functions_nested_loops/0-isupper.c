#include"main.h"
/**
 * _isupper - cheks if char is uppercase
 * @c:The char to be checkedd
 * Return: 1 if char is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c => 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
