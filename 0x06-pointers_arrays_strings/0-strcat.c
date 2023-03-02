#include "main.h"
/**
 * *_strcat -a function that concatenates two strings
 * @dest: pointer destination
 * @src: ppointer source
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a = -1, i;

for (i = 0; dest[i] != '\0';)
i++;

	do {
		a++;
		dest[i] = src[a];
	}
while (src[a] != '\0');
return (dest);
}
