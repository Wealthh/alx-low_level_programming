#include "main.h"
/**
 * cap_string -a function that capitalizes all words of a string
 * @str: string that needs to be capitalize
 * Return: a pointer to the changed string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			str++;

		if (str[index + 1] == ' ' ||
			str[index + 1] == '\t' ||
			str[index + 1] == '\n' ||
			str[index + 1] == ',' ||
			str[index + 1] == ';' ||
			str[index + 1] == '.' ||
			str[index + 1] == '!' ||
			str[index + 1] == '?' ||
			str[index + 1] == '"' ||
			str[index + 1] == '(' ||
			str[index + 1] == ')' ||
			str[index + 1] == '{' ||
			str[index + 1] == '}' ||
			index == 0)
				str[index] -= 32;
		index++;
	}
	return (str);
}