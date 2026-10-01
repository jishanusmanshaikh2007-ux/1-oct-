#include <stdio.h>

int main() {
    float temp;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp < 10)
        printf("Cold\n");
    else if (temp < 25)
        printf("Normal\n");
    else if (temp < 35)
        printf("Warm\n");
    else
        printf("Hot\n");

    return 0;
}
