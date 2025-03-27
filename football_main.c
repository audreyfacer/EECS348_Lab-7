#include "football.h"

int main(int argc, char *argv[]) {
    printf("Enter 0 or 1 to STOP\n");
    int score;

    //if there is an argument provided store it in score
    if (argc > 1) {
        score = atoi(argv[1]);  
    } else {
        score = 0;  
    }
    /*
    asks for nfl score and if score is 0 or 1 the program ends
    then it calls the print_combinations function to find all possible combinations
    of plays in that score and prints them with the message.
    */
    while(score > 1){
        printf("Enter the NFL score: ");
        scanf("%d", &score);
        if (score <= 1) {
            break;
        }
        printf("Possible combinations of scoring plays if a team’s score is %d:\n", score);
        print_combinations(score);
        

    }
    return 0;
}