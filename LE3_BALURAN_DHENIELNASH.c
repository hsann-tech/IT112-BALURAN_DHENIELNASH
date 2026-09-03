#include <stdio.h>

int main() {
    char name[20] = {0};
    char section[15] = {0};
    int num1, num2;

    printf("Enter Complete Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter Section: ");
    fgets(section, sizeof(section), stdin);

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Student Calculator\n");
    printf("Student name: %s", name);
    printf("Section: %s", section);

    printf("Results:\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);

    return 0;
}