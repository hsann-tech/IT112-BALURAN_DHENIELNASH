#include <stdio.h>
int main () {
    int num, total = 0;

    printf("Enter a positive number to ADD (zero or negative to stop): ");
    scanf("%d", &num);

    while (num > 0) {
        total += num;

        printf("Enter another number: ");
        scanf("%d", &num);

    }

    printf("The total is: %d\n", total);
    return 0;
}