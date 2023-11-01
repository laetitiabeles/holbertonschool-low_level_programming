#include "main.h"

/**
* _isdigit - Entry point
* @c: le caractère à vérifier
* Description: program that check if c is lower or upper
* Return: always 0
*/

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	return (0);
}
