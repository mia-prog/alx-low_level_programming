#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
        char alphabet;

        for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
        {
                putchar(alphabet);
        }  
	for (alphabet = 'A'; alphabet <= 'Z' ; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
        return (0);
}
