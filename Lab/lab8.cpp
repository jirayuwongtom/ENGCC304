#include <stdio.h>
int main(){
    int position;
    int year;
    int project;
    float basesalary = 0;
    float experiencebonus = 0;
    float specialbonus = 0;
    float netsalary = 0;

    printf("Position : ");
    scanf ("%d" , &position);
    printf("Years of Experience : ");
    scanf ("%d" , &year);
    printf("Number of Projects Completed this Year : ");
    scanf ("%d" , &project);

    if(position == 1){
        basesalary = 20000;
    }else if (position == 2){
        basesalary = 35000;
    }else if (position == 3){
        basesalary = 50000;
    }//end if

    if(year < 1){
        experiencebonus = 0;
    }else if (year <= 3){
        experiencebonus = basesalary * (0.10);
    }else if (year <= 5){
        experiencebonus = basesalary * (0.15);
    }else{
        experiencebonus = basesalary * (0.20);
    }//end if
    
    if(project > 5){
        specialbonus = basesalary * (0.05);
    }//end if
    
    netsalary = basesalary + experiencebonus + specialbonus;

    printf("Base Salary : %.0f THB\n" , basesalary);
    printf("Experience Bonus : %.0f THB\n" , experiencebonus);
    printf("Special Bonus : %.0f THB\n" , specialbonus);
    printf("Net Salary : %.0f THB\n" , netsalary);
    return 0;
}//end main function
