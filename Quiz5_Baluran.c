#include <stdio.h>

int main() {
    float savings, total = 0, average, needed;

    printf("================================\n");
    printf("       DAILY SAVINGS TRACKER\n");
    printf("================================\n");

    for (int day = 1; day <= 7; day++) {
        printf("Enter savings for Day %d: ", day);
        scanf("%f", &savings);

        total = total + savings;
    }

    average = total / 7;

    printf("\n================================\n");
    printf("          SAVINGS SUMMARY\n");
    printf("================================\n");

    printf("Total Savings: PHP %.2f\n", total);
    printf("Daily Average: PHP %.2f\n", average);

    if (total >= 500) {
        printf("Status: GOAL REACHED\n");
    } else {
        needed = 500 - total;
        printf("Status: GOAL NOT REACHED\n");
        printf("You need PHP %.2f more to reach your goal.\n", needed);
    }

    printf("================================\n");

    return 0;
}