#include "main.h"

/**
* _isupper - Entry point
* @c: le caractère à vérifier
* Description: program that check if c is lower or upper
* Return: always 0
*/

int _isupper(int c)
{

if (c >= 'A' && c <= 'Z')
{
return (1);

}
else
{
return (0);
}
}
