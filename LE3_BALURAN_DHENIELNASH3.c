#include <stdio.h>

int main() {
    char name[50] = "Dheniel Nash Baluran";
    char section[20] = "BSIT-1R13";
    int num1, num2;

    printf("Enter Complete Name: %s\n", name);
    printf("Enter Section: %s\n", section);

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Student Calculator\n");
    printf("Student name: %s\n", name);
    printf("Section: %s\n", section);

    printf("Results:\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);

    return 0;
}