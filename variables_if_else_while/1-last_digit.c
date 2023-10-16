#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - entry point
*
* Description: if - condition
*
* Return: always 0 (success)
*/

int main(void)
{

int n;
int last_d = n % 10;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last_d);
}
else if (n < 6 && !0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_d);
}

return (0);
}
