#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 11 == 0)
        printf("Divisible by both 5 and 11\n");
    else if (num % 5 == 0)
        printf("Divisible by 5 only\n");
    else if (num % 11 == 0)
        printf("Divisible by 11 only\n");
    else
        printf("Not divisible by 5 or 11\n");

    return 0;
}
