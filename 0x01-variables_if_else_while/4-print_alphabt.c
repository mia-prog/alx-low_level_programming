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
        char alphabet = 'a';

        while(alphabet != 'q') && (alphabet != 'e')
        {
                putchar(alphabet);
		alphabet++;
        }
        putchar('\n');
        return (0);
}
