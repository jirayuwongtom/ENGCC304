#include <stdio.h>

int minnum(int array[] , int n){
    int i;
    int min = array[0];
    for(i = 1; i < n; i++){
        if(array[i] < min){
            min = array[i];
        }//end if
    }//end for
    return min;
}//end function

int maxnum(int array[] , int n){
    int i;
    int max = array[0];
    for(i = 1; i < n; i++){
        if(array[i] > max){
            max = array[i];
        }//end if
    }//end for
    return max;
}//end function

int main(){
    int n = 0;
    int i;
    int array[100];
    printf("Enter value : ");
    while (scanf("%d", &array[n]) == 1){
        n++;
        if (getchar() == '\n'){
            break;
        }//end if
    }//end while
    printf("Index : ");
    for(i = 0; i < n; i++){
        printf(" %d", i);
    }//end for
    printf("\n");
    printf("Array : ");
    for(i = 0; i < n; i++){
        printf(" %d", array[i]);
    }//end for
    printf("\n");
    printf("Min : %d\n", minnum(array , n));
    printf("Max : %d\n", maxnum(array , n));
    return 0;
}//end main function