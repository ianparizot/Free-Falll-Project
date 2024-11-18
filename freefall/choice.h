//
// Created by pariz on 17/11/2024.
//

#ifndef CHOICE_H
#define CHOICE_H
#include <stdio.h>

double choose() {
    int choice;
    puts("How is your axis oriented?\n"
         "1. With a negative g value\n"
         "2. With a positive g value\n"
         "Answer by 1 or 2");
    scanf("%d", &choice);
    if (choice == 1) {
        float g = -9.80665;
        return g;
    }

    else if (choice == 2) {
        float g = 9.80665;
        return g;
    }
    else {
        return 1;
    }
}

#endif //CHOICE_H
