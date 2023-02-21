#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: the character to be checked
 *
 * REturn: 1 if c is a letter, o otherwise
 */
int _isalpha(int c)
{
	return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
