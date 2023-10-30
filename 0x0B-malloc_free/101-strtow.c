#include "main.h"
#include <stdlib.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 *strtow - splits a string into words.
 *@str: the string
 *
 *Return: returns a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int x, flag, len;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	x = flag = len = 0;
	while (str[x])
	{
		if (flag == 0 && str[x] != ' ')
			flag = 1;
		if (x > 0 && str[x] == ' ' && str[x - 1] != ' ')
		{
			flag = 0;
			len++;
		}
		x++;
	}

	len += flag == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
		return (NULL);

	util(words, str);
	words[len] = NULL;
	return (words);
}

/**
 *util - a util function for fetching words into an array
 *@words: the strings array
 *@str: the string
 */
void util(char **words, char *str)
{
	int i, y, start, flag;

	i = y = flag = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
		{
			start = i;
			flag = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			create_word(words, str, start, i, y);
			y++;
			flag = 0;
		}

		i++;
	}

	if (flag == 1)
		create_word(words, str, start, i, y);
}
/**
 *create_word - creates a word and insert it into the array
 *@words: the array of strings
 *@str: the string
 *@start: the starting index of the word
 *@end: the stopping index of the word
 *@index: the index of the array to insert the word
 */
void create_word(char **words, char *str, int start, int end, int index)
{
	int x, z;

	x = end - start;
	words[index] = (char *)malloc(sizeof(char) * (x + 1));

	for (z = 0; start < end; start++, z++)
		words[index][z] = str[start];
	words[index][z] = '\0';
}
