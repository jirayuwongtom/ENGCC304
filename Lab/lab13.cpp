#include <stdio.h>

void swapNumbers (int *a , int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}//end function

int main(){
    int num1;
    int num2;
    int *ptr1;
    int *ptr2;
    printf("Enter num1 : ");
    scanf("%d" , &num1);
    printf("Enter num2 : ");
    scanf("%d" , &num2);
    printf("Before swap (num1 & num2) : %d , %d\n", num1 , num2);
    ptr1 = &num1;
    ptr2 = &num2;
    swapNumbers(ptr1 , ptr2);
    printf("After swap (num1 & num2) : %d , %d", num1 , num2);
}//end main function