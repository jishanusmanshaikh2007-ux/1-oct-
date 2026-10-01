#include <stdio.h>

int main() {
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if (month == 2)
        printf("February has 28 days in a normal year\n");
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        printf("This month has 30 days\n");
    else if (month >= 1 && month <= 12)
        printf("This month has 31 days\n");
    else
        printf("Invalid month\n");

    return 0;
}
