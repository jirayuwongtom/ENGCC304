#include <stdio.h>
int main(){
    int n;
    printf("Enter value : ");
    if(scanf("%d", &n) !=1){
        printf("Please enter numbers only.");
        return 1;
    }//end if

    if(n % 2 ==1){
        for(int i = 0; i<= n; i++){
            if( i % 2 == 1){
                printf("%d ", i);
            }//end if
        }//end for
    }//end if
    else{
        for (int i = n; i >= 0; i--){
            if (i % 2 ==0){
                printf("%d ", i);
            } //end if
        }//end for
    }//end if
    return 0;
}//end main function