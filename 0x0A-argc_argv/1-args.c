#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of argumentsv
 * @argc: number of arguments 
 * @argv: arrays in the argument
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int argnumber = argc - 1;
	(void) argv; /*Ignore argv*/
	
	printf("%d\n", argnumber);
	return (0) ;
}
