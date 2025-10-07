#include <stdio.h>

int countWords(char *filename){
    FILE *file;
    char word[20];
    int count;
    file = fopen(filename , "r");
    if(file == 0){
        return 0;
    }//end if
    for (count = 0; fscanf(file, "%s", word) == 1; count++);
    fclose(file);
    return count;
}//end function

int main(){
    char filename[20];
    int totalWords;

    printf("Enter file name : ");
    scanf("%s" , filename);

    totalWords = countWords(filename);

    if(totalWords == 0){
        printf("Cannot open file %s\n", filename);
    }
    else{
        printf("Total number of words in '%s' : %d words\n", filename, totalWords);
    }//end if
}//end main function
