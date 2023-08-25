#include "main.h"
<<<<<<< HEAD
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
=======
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: char pointer left side
 * @src: char pointer right side
 * Return: the length *s
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
>>>>>>> e0fb1bac923dd282dfc04a2098a8c1744d89cd84
	return (dest);
}
