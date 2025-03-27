#include "football.h"
#include <stdio.h>

int count_combinations(int points) {
    int td, fg, safety, td_fg, td_2pt; 
    int count = 0;
    /*
    checks for each play if it exceeds the point max before increasing the number
    of each type of play in order of max points
    to least points, if the points of the plays combined add up to the points given by 
    the user the number of combinations is increased
    */
    for (td_2pt = 0; td_2pt * 8 <= points; td_2pt++) {
        for (td_fg = 0; td_fg * 7 + td_2pt * 8 <= points; td_fg++) {
            for (td = 0; td * 6 + td_fg * 7 + td_2pt * 8 <= points; td++) {
                for (fg = 0; fg * 3 + td * 6 + td_fg * 7 + td_2pt * 8 <= points; fg++) {
                    for (safety = 0; safety * 2 + fg * 3 + td * 6 + td_fg * 7 + td_2pt * 8 <= points; safety++) {
                        if (safety * 2 + fg * 3 + td * 6 + td_fg * 7 + td_2pt * 8 == points) {
                            count++;
                        }
                    }
                }
            }
        }
    }
    return count; 
}

void print_combinations(int points) {
    int td, fg, safety, td_fg, td_2pt;
    /*
    essentially goes through the same process as count combinations but prints them after each combination
    is found, rather than counting them.
    */
    for (td_2pt = 0; td_2pt * 8 <= points; td_2pt++) {
        for (td_fg = 0; td_fg * 7 + td_2pt * 8 <= points; td_fg++) {
            for (td = 0; td * 6 + td_fg * 7 + td_2pt * 8 <= points; td++) {
                for (fg = 0; fg * 3 + td * 6 + td_fg * 7 + td_2pt * 8 <= points; fg++) {
                    for (safety = 0; safety * 2 + fg * 3 + td * 6 + td_fg * 7 + td_2pt * 8 <= points; safety++) {
                        if (safety * 2 + fg * 3 + td * 6 + td_fg * 7 + td_2pt * 8 == points) {
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",
                                   td_2pt, td_fg, td, fg, safety);
                        }
                    }
                }
            }
        }
    }
}