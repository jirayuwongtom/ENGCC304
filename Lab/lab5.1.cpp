#include <stdio.h>

int main() {
    char ID[11];
    int hours;
    double salaryhours;
    double sumSalary;
    printf("Input the Employees ID(Max. 10 chars) : ");
    scanf("%10s", ID);
    printf("Input the working hrs : ");
    scanf("%d", &hours);
    printf("Salary amount/hr : ");
    scanf("%lf", &salaryhours);
    sumSalary = hours * salaryhours;
    printf("----- \n");
    printf("Expected Output : \n");
    printf("Employees ID = %s\n", ID);
    if(sumSalary >= 1000){
        int total = (int)sumSalary;
        int thousand = total % 1000;
        int million = total / 1000;
        printf("Salary = U$ %d,%03d.00\n", million , thousand);
    } else {
        printf("Salary = U$ %.2f\n", sumSalary);
    }//end if
    return 0;
}//end main function
