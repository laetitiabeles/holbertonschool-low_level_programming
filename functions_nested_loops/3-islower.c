#include "main.h"

/**
* _islower - Entry point
* @c: le caractère à vérifier
* Description: program that check if c is lower or upper
* Return: always 0
*/

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);

}
else
{
return (0);
}
}
