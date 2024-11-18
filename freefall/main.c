#include <stdio.h>

#include "choice.h"
#include "speed.h"
#include "time.h"

int main(void) {
    double height;
    double a;
    do {
        a = choose();
    } while (a == 1);
    puts("Enter your height: ");
    scanf("%lf", &height);
    if (a == -9.80665) {
        printf("Your speed is: %f m/s\n", speed(height, a));
        printf("Your time is: %f s\n", time(height, a));
    }
    else {
        printf("Your speed is: %f m/s\n", speed(height, a));
        printf("Your time is: %f s\n", time(height, a));
    }
    return 0;
}

