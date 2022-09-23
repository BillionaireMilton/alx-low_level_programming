
#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

    /*find size of dest array*/
	while (dest[i++])
		dest_len++;
    
    /**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	*/
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
