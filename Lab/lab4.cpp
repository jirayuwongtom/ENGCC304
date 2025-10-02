#include <stdio.h>

int main() {
    char ID[11];
    int hours;
    double salaryhours;
    double sumSalary;
    printf("Input the Employees ID(Max. 10 chars): \n");
    scanf("%10s", ID);
    printf("Input the working hrs: \n");
    scanf("%d", &hours);
    printf("Salary amount/hr: \n");
    scanf("%lf", &salaryhours);
    sumSalary = (hours * salaryhours);
    printf("Expected Output: \n");
    printf("Employees ID = %s\n", ID);
    printf("Salary = U$ %.2f\n", sumSalary);
    return 0;
}//end main function
