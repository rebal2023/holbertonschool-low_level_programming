#include<stdio.h>
#include<stdlib.h>
/**
*main - program that multiplies two numbers
*@argc: nb of arguments
*@argv: array of arguments
*Return: 0
*/
int main(int argc, char **argv)
{
	int x = 0;
	int y = 0;
	int mul = 0;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mul = x * y;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
