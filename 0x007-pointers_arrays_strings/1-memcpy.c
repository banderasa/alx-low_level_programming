#include "main.h"
/**
 * _memcpy - a function thta copies memory are
 * @dest: memory where it is stored
 * @src: memory where it is copied
 * @: number of bytes
 *
 * Return: copy memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);

}
