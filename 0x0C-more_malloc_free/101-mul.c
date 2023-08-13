#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_positive_integer(const char *str) {
    while (*str) {
        if (!isdigit(*str)) {
            return 0;
        }
        str++;
    }
    return 1;
}

unsigned long multiply(unsigned long a, unsigned long b) {
    return a * b;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    if (!is_positive_integer(argv[1]) || !is_positive_integer(argv[2])) {
        printf("Error\n");
        return 98;
    }

    unsigned long num1 = strtoul(argv[1], NULL, 10);
    unsigned long num2 = strtoul(argv[2], NULL, 10);

    unsigned long result = multiply(num1, num2);

    printf("%lu\n", result);

    return 0;
}
