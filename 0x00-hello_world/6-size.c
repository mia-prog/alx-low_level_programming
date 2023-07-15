#include <stdio.h>
/**
  *main - prints numbers of base 16 in lowercase
  *Return: 0
*/
int main(void)
{
	printf("Size of a char: %zu bytes(s)\n", sizeof(char));
	printf("Size of a int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)", sizeof(float));
	return (0);
}
