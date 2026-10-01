#include <stdio.h>

int main() {
    float amount, discount, final_amount;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    if (amount >= 5000)
        discount = amount * 0.20;
    else if (amount >= 2000)
        discount = amount * 0.10;
    else if (amount >= 1000)
        discount = amount * 0.05;
    else
        discount = 0;

    final_amount = amount - discount;

    printf("Discount = %.2f\n", discount);
    printf("Final amount = %.2f\n", final_amount);

    return 0;
}
