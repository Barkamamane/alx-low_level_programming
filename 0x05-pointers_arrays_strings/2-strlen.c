#include "main.h"

/**
 * _strlen - retunrs the lengh of a string
 * @s: string to evaluate
 *
 * Return: the lenth of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
