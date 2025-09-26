#include <stdio.h>
#include <string.h>
struct Student {
    char Name[20] ;
    char ID[5] ;
    float ScoreSub1 ;
    float ScoreSub2 ;
    float ScoreSub3 ;
    float ScoreSub4 ;
    float ScoreSub5 ;
} typedef S ;

float averscore(S Student){
    return(Student.ScoreSub1 + Student.ScoreSub2 + Student.ScoreSub3 + Student.ScoreSub4 + Student.ScoreSub5) / 5.0;
}//end float

const char* Grade(float score){
    if(score >= 80 && score <= 100)
    return "A";
    else if (score >= 75 && score < 80 ) 
    return "B+";
    else if (score >= 70 && score < 75 )
    return "B";
    else if (score >= 65 && score < 70 ) 
    return "C+";
    else if (score >= 60 && score < 65 ) 
    return "C";
    else if (score >= 55 && score < 60 ) 
    return "D+";
    else if (score >= 50 && score < 55 ) 
    return "D";
    else return "F";
}//end function

int main(){
    S Stdnum[3];
    int i ;
    printf("Enter the details of 3 students : \n");
    for(i = 0; i < 3; i++){
        printf("Student %d: \n" , i + 1);
        printf("Name : ");
        scanf("%s" , Stdnum[i].Name);
        printf("ID : ");
        scanf("%s" , Stdnum[i].ID);
        printf("Scores in Subject 1 : ");
        scanf("%f" , &Stdnum[i].ScoreSub1);
        printf("Scores in Subject 2 : ");
        scanf("%f" , &Stdnum[i].ScoreSub2);
        printf("Scores in Subject 3 : ");
        scanf("%f" , &Stdnum[i].ScoreSub3);
        printf("Scores in Subject 4 : ");
        scanf("%f" , &Stdnum[i].ScoreSub4);
        printf("Scores in Subject 5 : ");
        scanf("%f" , &Stdnum[i].ScoreSub5);
    }//end for
    printf("\n");

    for(i = 0; i < 3; i++){
        printf("Student %d: \n" , i + 1);
        printf("Name : %s\n" , Stdnum[i].Name);
        printf("ID : %s\n" , Stdnum[i].ID);
        printf("Score : %.0f , %.0f , %.0f , %.0f , %.0f ,\n" , Stdnum[i].ScoreSub1 , Stdnum[i].ScoreSub2 , Stdnum[i].ScoreSub3 , Stdnum[i].ScoreSub4 , Stdnum[i].ScoreSub5);
        printf("Grade : %s , %s , %s , %s , %s ,\n" , Grade(Stdnum[i].ScoreSub1) , Grade(Stdnum[i].ScoreSub2) , Grade(Stdnum[i].ScoreSub3) , Grade(Stdnum[i].ScoreSub4) , Grade(Stdnum[i].ScoreSub5));
        printf("Average Scores : %.1f\n" , averscore(Stdnum[i]));
        printf("\n");
    }//end for
    return 0;
}//end function

