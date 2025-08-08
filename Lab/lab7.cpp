#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num = 0;
    int randomNumber , guessnum;
    int score;
    int numlow, numhigh;
    srand(time(NULL));
    do {
        printf("\nDo you want to play game (1=play,-1=exit) : \n");
        if(scanf("%d", &num) != 1) {
            printf("Please enter only 1 or -1.\n");
            while (getchar() != '\n');
            continue;
        }//end if
        if(num == -1) {
            printf("See you again.\n");
            break;
        }//end if
        if(num != 1) {
            printf("Please enter only 1 or -1.\n");
            continue;
        }//end if
        score = 100;
        numlow = 1;
        numhigh = 100;
        randomNumber = rand() % 100 + 1;
        printf("(Score=%d)\n\n", score);
        while (1) {
            printf("Guess the winning number (%d-%d) : \n", numlow, numhigh);
            scanf("%d", &guessnum);
            if (guessnum == randomNumber) {
                printf("That is correct! The winning number is %d\n", randomNumber);
                printf("\nScore this game: %d\n", score);
                break;
            } else {
                score -= 10;
                if (randomNumber > guessnum) {
                    printf("Sorry, the winning number is HIGHER than %d. (Score=%d)\n\n", guessnum, score);
                    if (guessnum + 1 > numlow) numlow = guessnum + 1;
                } else {
                    printf("Sorry, the winning number is LOWER than %d. (Score=%d)\n\n", guessnum, score);
                    if (guessnum - 1 < numhigh) numhigh = guessnum - 1;
                }//end if
            }//end if
        }//end while
    } while (1);
    return 0;
}//end function
