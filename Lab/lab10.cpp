#include <stdio.h>
#include <string.h>

int main(){
    char word[100];
    int j;
    int Palin = 1;
    printf("Enter word : ");
    scanf("%s" , word);
    j = strlen(word) -1;

    for(int i = 0; i < j; i++ , j--){
        char left = word[i];
        char right = word[j];
        if(left >= 'A' && left <= 'Z'){
            left = left + 32;
        }//end if
        if(right >= 'A' && right <= 'Z'){
            right = right + 32;
        }//end if
        if(left != right) {
            Palin = 0;
            break;
        }//end if
    }//end for
    
    if(Palin == 1){
        printf("Pass");
    }else{
        printf("Not pass");
    }//end if
    return 0;
}//end function