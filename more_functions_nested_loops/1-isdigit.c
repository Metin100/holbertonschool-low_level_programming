#include "main.h"

/**
 * _isdigit - function that verifies if a  character is a digit or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/
int _isdigit(int c)
{
	return (c >= '0' && c <= '9' ? 1 : 0);
}
