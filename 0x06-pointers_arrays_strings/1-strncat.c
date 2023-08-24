#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: The string to be appended
 * @src: The string to be appended to dest
 * @n: The number of bytes from src to dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
	
{
	int index =0, dest_len = 0;
	
	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);

}
