#include "main.h"

/**
 * _strncpy - Copy a string starting from index 0 of `dest`.
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: `dest` edited string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

    /**
	 * iterate through src array
	 * where if there is no null byte
	 * among the first n bytes of source
	 * the string placed in dest will not be
	 * null terminated
	*/

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
    
    /**
	 * if the length of source is less than n
	 * write additional nullbytes to dest to
	 * ensure that a total of n bytes is written
	*/

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
