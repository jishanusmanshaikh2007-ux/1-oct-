#include <stdio.h>

int main() {
    float m1, m2, m3, total, percentage;

    printf("Enter marks for 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3;

    printf("Total = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (m1 < 40 || m2 < 40 || m3 < 40)
        printf("Result: Fail\n");
    else if (percentage >= 75)
        printf("Result: Distinction\n");
    else if (percentage >= 60)
        printf("Result: First Class\n");
    else if (percentage >= 50)
        printf("Result: Second Class\n");
    else
        printf("Result: Pass\n");

    return 0;
}
