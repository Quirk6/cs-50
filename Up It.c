#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("~Double up is %d~-----/~Quadruple up is %d~/\n", number * 2, number * 4);
    return 0;
}
