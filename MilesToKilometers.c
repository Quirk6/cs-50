#include <stdio.h>

int main() {
    float miles, kilometers;
    printf("Enter the number of miles: ");
    scanf("%f", &miles);
    kilometers = miles * 1.60934;
    printf("%.2f miles is %.2f kilometers.\n", miles, kilometers);
    return 0;
}
