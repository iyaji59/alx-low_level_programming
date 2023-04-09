#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument value
 * Return: 1 and 0 for success and failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]);
	}
	return (0);

}
