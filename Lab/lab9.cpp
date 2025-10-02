#include <stdio.h>

int main() {
    int N;
    printf("Enter N : ");
    scanf("%d", &N);

    int Array[N];
    for(int i = 0; i < N; i++){
        printf("Enter value [%d] : ", i );
        scanf("%d" , &Array[i]);
    }//end for

    printf("Index : ");
    for (int i = 0; i < N; i++){
        printf("%2d ", i);
    }//end for
    printf("\n");

    printf("Array : ");
    for(int i =0; i < N; i++){
        int num = Array[i];
        int prime = 1;
        if (num < 2){
            prime = 0;
        }else{
            for (int j = 2; j * j <= num; j++){
                if (num % j == 0){
                    prime = 0;
                    break;
                }//end if
            }//end for
        }//end if
        
         if (prime == 1){
            printf("%2d ", num);
        } else {
            printf(" # ");
        }//end if
    }//end for
    return 0;
}//end main function
