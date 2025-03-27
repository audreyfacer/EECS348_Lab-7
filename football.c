#include "football.h"
#include <stdio.h>

int count_combinations(int points) {
    int td, fg, safety, td_fg, td_2pt;
    int count = 0;
    
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