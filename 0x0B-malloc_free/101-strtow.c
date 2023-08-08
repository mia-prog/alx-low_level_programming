#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_words - Count the number of words in a string.
 * @str: Input string.
 *
 * Return: Number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
	}

	return count;
}

/**
 * free_words - Free memory allocated for an array of strings.
 * @words: Array of strings.
 */
void free_words(char **words)
{
	if (words == NULL)
	{
		return;
	}

	for (int i = 0; words[i] != NULL; i++)
	{
		free(words[i]);
	}

	free(words);
}

/**
 * strtow - Split a string into words.
 * @str: Input string.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	if (str == NULL || strcmp(str, "") == 0)
	{
		return NULL;
	}

	int num_words = count_words(str);

	char **words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return NULL;
	}

	int word_count = 0;
	int word_length = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (word_length > 0)
			{
				words[word_count] = (char *)malloc((word_length + 1) * sizeof(char));
				if (words[word_count] == NULL)
				{
					free_words(words);
					return NULL;
				}
				strncpy(words[word_count], str + i - word_length, word_length);
				words[word_count][word_length] = '\0';
				word_count++;
				word_length = 0;
			}
		}
		else
		{
			word_length++;
		}
	}

	if (word_length > 0)
	{
		words[word_count] = (char *)malloc((word_length + 1) * sizeof(char));
		if (words[word_count] == NULL)
		{
			free_words(words);
			return NULL;
		}
		strncpy(words[word_count], str + strlen(str) - word_length, word_length);
		words[word_count][word_length] = '\0';
		word_count++;
	}

	words[word_count] = NULL;

	return words;
}
