#include <stdio.h>

int main() {
    char name[50];
    char section[20];
    float Quarter1, Quarter2, Quarter3, Quarter4, average;

    printf("Enter Complete Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Section: ");
    fgets(section, sizeof(section), stdin);

    printf("Enter 1st Quarter Grade: ");
    scanf("%f", &Quarter1);

    printf("Enter 2nd Quarter Grade: ");
    scanf("%f", &Quarter2);

    printf("Enter 3rd Quarter Grade: ");
    scanf("%f", &Quarter3);

    printf("Enter 4th Quarter Grade: ");
    scanf("%f", &Quarter4);

    average = (Quarter1 + Quarter2 + Quarter3 + Quarter4) / 4;

    printf("Student: %s\n", name);
    printf("Section: %s\n", section);
    printf("General Average: %.2f\n", average);

    if (average >= 90)
        printf("Remarks: Outstanding\n");
    else if (average >= 85)
        printf("Remarks: Very Satisfactory\n");
    else if (average >= 80)
        printf("Remarks: Satisfactory\n");
    else if (average >= 75)
        printf("Remarks: Fair\n");
    else
        printf("Remarks: Failed\n");

    return 0;
}