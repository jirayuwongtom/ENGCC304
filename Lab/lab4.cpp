#include <stdio.h>

int main() {
    char ID[11];
    int hours;
    float salaryhours, sumSalary;
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%10s", ID);
    printf("Input the working hrs: ");
    scanf("%d", &hours);
    printf("Salary amount/hr: ");
    scanf("%f", &salaryhours);
    sumSalary = (hours * salaryhours);
    printf("Expected Output: \n");
    printf("Employees ID = %s\n", ID);
    printf("Salary = U$ %.2f\n", sumSalary);
    return 0;
}//end function
