#include <stdio.h>

int minnum(int array[] , int n){
    int i;
    int min = array[0];
    for(i = 1; i < n; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}

int maxnum(int array[] , int n){
    int i;
    int max = array[0];
    for(i = 1; i < n; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}

int main(){
    int n = 0;
    int i;
    int array[100];
    printf("Enter value : ");
    while (scanf("%d", &array[n]) == 1){
        n++;
        if (getchar() == '\n'){
            break;
        }
    }
    printf("Index : ");
    for(i = 0; i < n; i++){
        printf(" %d", i);
    }
    printf("\n");
    printf("Array : ");
    for(i = 0; i < n; i++){
        printf(" %d", array[i]);
    }   
    printf("\n");
    printf("Min : %d\n", minnum(array , n));
    printf("Max : %d\n", maxnum(array , n));
    return 0;
}