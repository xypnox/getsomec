/*
    This program shows the way integer arrays are used in c

    Here two arrays namely bats and balls are declared And
    the program computes the average of these two arrays
*/

#include <stdio.h>

int main() {
    float ball_avg = 0, bat_avg = 0;
    int i = 0, j = 0;

    int balls[5];
    balls[0] = 1;
    balls[1] = 8;
    balls[2] = 6;
    balls[3] = 9;
    balls[4] = 4;

    int bats[3] = {8, 3, 4};

    for (i = 0; i < 5;i++) {
        ball_avg += balls[i];
    }

    ball_avg /= 5;

    for (size_t j = 0; j < 3; j++) {
        bat_avg += bats[j];
    }

    bat_avg /= 3;
    printf("Average of the balls is \t %.2f\n", ball_avg);
    printf("Average of the bats  is \t %.2f\n", bat_avg);
    return 0;
}
