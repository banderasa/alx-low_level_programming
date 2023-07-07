#include <stdio.h>
#include "main.h"
/**main - A program that prints all arguments it recieves
 * @argc: number of arguments 
 * @argv: arrays in an argument
 * Return:  always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
		
		return 0;
}
