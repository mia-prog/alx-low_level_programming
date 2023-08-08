#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int count_words(char *str);
void free_words(char **words);
char **strtow(char *str);

int count_words(char *str) {
    int count = 0;
    int in_word = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            count++;
        }
    }

    return count;
}

void free_words(char **words) {
    int i;

    if (words == NULL) {
        return;
    }

    for (i = 0; words[i] != NULL; i++) {
        free(words[i]);
    }

    free(words);
}

char **strtow(char *str) {
    if (str == NULL || strcmp(str, "") == 0) {
        return NULL;
    }

    int num_words = count_words(str);
    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    int word_count = 0;
    int word_length = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            if (word_length > 0) {
                words[word_count] = (char *)malloc((word_length + 1) * sizeof(char));
                if (words[word_count] == NULL) {
                    free_words(words);
                    return NULL;
                }
                strncpy(words[word_count], str + i - word_length, word_length);
                words[word_count][word_length] = '\0';
                word_count++;
                word_length = 0;
            }
        } else {
            word_length++;
        }
    }

    if (word_length > 0) {
        words[word_count] = (char *)malloc((word_length + 1) * sizeof(char));
        if (words[word_count] == NULL) {
            free_words(words);
            return NULL;
        }
        strncpy(words[word_count], str + i - word_length, word_length);
        words[word_count][word_length] = '\0';
        word_count++;
    }

    words[word_count] = NULL;

    return words;
}
