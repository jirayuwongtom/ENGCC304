#include <stdio.h>

void checkArmstrongnum(int number){
    int digit = 0;
    int sum = 0;
    
    for(int i = number; i > 0; digit++){
        i = i /  10;
    }//end for
    for(int i = number; i > 0;){
        int d = i % 10;
        int numexponent = 1;
        for (int j = 0; j < digit; j++){
            numexponent = numexponent * d;
        }//end for
        sum = sum + numexponent;
        i = i /  10;
    }//end for

    if(sum == number){
        printf("Pass");
    }else{
        printf("Not Pass");
    }//end if
}//end function

int main(){
    int number;
    printf("Enter Number : ");
    scanf("%d" , &number);
    checkArmstrongnum(number);
    return 0;
}//end function