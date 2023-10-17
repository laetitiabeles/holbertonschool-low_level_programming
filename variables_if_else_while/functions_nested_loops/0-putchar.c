#include <string.h>
#include <unistd.h>

/**
* main - entry point
*
* Description: program that prints string without put, putchar and printf
*
* Return: always 0 (success)
*/

int main(void)
{
char chaine[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n', '\0'};

write(1, chaine, strlen(chaine));

return (0);
}
