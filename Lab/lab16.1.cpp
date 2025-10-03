#include <stdio.h>

int main(){
    int array[] = {15, 7, 25, 3, 73, 32, 45};
    int n = 7;
    int i;
    int j;
    int t;
    int pos;

    printf("Old Series : 15, 7, 25, 3, 73, 32, 45\n");
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(array[i] > array[j]){
                t = array[i];
                array[i] = array[j];
                array[j] = t;
            }//end if
        }//end for
    }//end for

    printf("New Series : ");
    for(i = 0; i < n; i++){
        printf("%d" , array[i]);
        if(i < n - 1){
            printf(", ");
        }//end if
    }//end for
    printf("\n");

    for(i = 0; i < n; i++){
        if(array[i] == 32){
            pos = i;
        }//end if
    }//end for
    printf("Pos of 32 : %d\n",pos);
}//end main function