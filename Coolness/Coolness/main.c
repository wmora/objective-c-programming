//
//  main.c
//  Coolness
//
//  Created by William Mora on 11/12/13.
//  Copyright (c) 2013 wmora. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 0;
    
    while (i < 12) {
        printf("%d. Will is cool\n", i);
        i++;
    }
    
    i = 0;
    
    do {
        printf("%d. Will is cool\n", i);
        i++;
    } while (i < 12);
    
    for (i = 0; i < 12; i++) {
        if(i % 3 == 0) {
            continue;
        }
        printf("Checking i = %d\n", i);
        if(i + 90 == i * i) {
            break;
        }
    }
    
    printf("The answer is %d\n", i);
    
    // Challenge    
    for (i = 99; i >= 0; i--) {
        printf("%d\n", i);
        if(i % 5 == 0) {
            printf("Found one!\n");
        }
    }
    
    return 0;
}

