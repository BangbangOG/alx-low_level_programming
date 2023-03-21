#include "main.h"

/**
 * _isaplha - Function that  checks for alphabetic character
 * @c: parameter to be checked
 *
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
