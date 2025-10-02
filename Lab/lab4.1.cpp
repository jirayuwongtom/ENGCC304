#include <stdio.h>

int main(){
    int Day;
    int Seconds;
    int time = 86400;
    printf("Input Day : ");
    scanf("%d", &Day);
    Seconds = Day * time;
    printf("%d Day = %d seconds", Day , Seconds);
    return 0;
}//end main function