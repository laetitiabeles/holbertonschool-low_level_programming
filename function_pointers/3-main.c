#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - user give two int and an operator
* @argc: argument counter
* @argv: arguments v
*
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int number1, number2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(number1, number2));

	return (0);
}
