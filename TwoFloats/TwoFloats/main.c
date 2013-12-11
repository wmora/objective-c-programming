//
//  main.c
//  TwoFloats
//
//  Created by William Mora on 10/12/13.
//  Copyright (c) 2013 wmora. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    float value1 = 3.14;
    float value2 = 42.0;
    double sum = value1 + value2;
    printf("The sum of %.2f and %.2f is %.2f.\n", value1, value2, sum);
}

