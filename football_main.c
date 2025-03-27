#include "football.h"

int main(int argc, char *argv[]) {
    printf("Enter 0 or 1 to STOP\n");
    int score;

    
    if (argc > 1) {
        score = atoi(argv[1]);  
    } else {
        score = 0;  
    }
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