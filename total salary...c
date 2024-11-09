#include <stdio.h>
#include <math.h>

int main() {
    int basic;
    char grade;
    float hra, da, allow, pf, totalSalary;

    printf("Enter the basic salary: ");
    scanf("%d", &basic);
    printf("Enter the grade (A/B/C): ");
    scanf(" %c", &grade);

    hra = 0.20 * basic;
    da = 0.50 * basic;
    pf = 0.11 * basic;

    if (grade == 'A') {
        allow = 1700;
    } else if (grade == 'B') {
        allow = 1500;
    } else {
        allow = 1300;
    }

    totalSalary = basic + hra + da + allow - pf;

    int roundedSalary = round(totalSalary);

    printf("Total Salary: %d\n",roundedSalary);

    return 0;
}
