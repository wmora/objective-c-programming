//
//  main.c
//  Addresses
//
//  Created by William Mora on 11/12/13.
//  Copyright (c) 2013 wmora. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 17;
    int *addressOfI = &i;
    printf("i stores its value at %p\n", addressOfI);
    printf("This function starts at %p\n", main);
    printf("The int stored at addressOfI is %d\n", *addressOfI);
    *addressOfI = 89;
    printf("Now is %d\n", i);
    printf("An int is %zu bytes\n", sizeof(int));
    printf("A pointer is %zu bytes\n", sizeof(int *));
    
    // Challenge
    printf("A float is %zu bytes\n", sizeof(float));
    printf("A short is %zu bytes\n", sizeof(short));
    
    return 0;
}

