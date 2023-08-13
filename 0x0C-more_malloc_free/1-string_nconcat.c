#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat : concatenates two strings.
 * @s1 : the first string
 * @s2 : the second string
 * @n : number of bytes from the second string to concatenate
 * returns : pointer to the concatenation if success, null if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int j = 0;
	int z = 0;
	char *s;

	while (s1[i] != '\0')
		i++;

	s = malloc(sizeof(char)* (i + n))
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[j] != '\0'; i++)
	{
		if (s[j] != '\0' )
			s[j] = s1[j];
		else
			for (z = 0, z < n; z++)
			{
				s[j] = s2[z];
				j++;
			}
		s[j] = '\0';
		return (s);
	}
}
