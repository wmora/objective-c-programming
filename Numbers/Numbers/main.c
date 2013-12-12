//
//  main.c
//  Numbers
//
//  Created by William Mora on 11/12/13.
//  Copyright (c) 2013 wmora. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    int x = 255;
    printf("x is %d.\n", x);
    printf("In octal, x is %o.\n", x);
    printf("In hexadecimal, x is %x.\n", x);
    
    long y = 255;
    printf("y is %ld.\n", y);
    printf("In octal, y is %lo.\n", y);
    printf("In hexadecimal, y is %lx.\n", y);
    
    unsigned long z = 255;
    printf("z is %lu.\n", z);
    // Octal and hex already assumed the number was unsigned
    printf("In octal, z is %lo.\n", z);
    printf("In hexadecimal, z is %lx.\n", z);
    
    // Arithmetic operations
    printf("3 * 3 + 5 * 2 = %d\n", 3 * 3 + 5 * 2);
    
    // Integer division
    printf("11 / 3 = %d\n", 11/3);
    printf("11 / 3 = %d remainder of %d\n", 11/3, 11%3);
    printf("11 / 3 = %f\n", 11/(float)3);
    printf("The absolute value of -5 is %d\n", abs(-5));
    
    double a = 12345.6789;
    printf("a is %f\n", a);
    printf("a is %e\n", a);
    
    // Challenge
    printf("Sine of 1 radian is %.3f\n", sin(1));
    
    return 0;
}

