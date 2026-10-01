#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter expression, for example 10 + 5: ");
    scanf("%f %c %f", &a, &op, &b);

    if (op == '+')
        printf("Result = %.2f\n", a + b);
    else if (op == '-')
        printf("Result = %.2f\n", a - b);
    else if (op == '*')
        printf("Result = %.2f\n", a * b);
    else if (op == '/') {
        if (b != 0)
            printf("Result = %.2f\n", a / b);
        else
            printf("Cannot divide by zero\n");
    }
    else
        printf("Invalid operator\n");

    return 0;
}
