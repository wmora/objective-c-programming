//
//  main.c
//  BMICalc
//
//  Created by William Mora on 12/12/13.
//  Copyright (c) 2013 wmora. All rights reserved.
//

#include <stdio.h>
#include <time.h>

// Here is the declaration of the struct Person
typedef struct {
    float heightInMeters;
    int weightInKilos;
} Person;

float bodyMassIndex(Person person) {
    return person.weightInKilos / (person.heightInMeters * person.heightInMeters);
}

int main(int argc, const char * argv[])
{
    Person person;
    person.weightInKilos = 96;
    person.heightInMeters = 1.8;
    
    printf("person weighs %i kilograms\n", person.weightInKilos);
    printf("person is %.2f meters tall\n", person.heightInMeters);
    
    float bmi = bodyMassIndex(person);
    printf("Person has a BMI of %.2f\n", bmi);
    
    // Challenge
    struct tm future;
    long manySecondsFromNow = 4000000 + time(NULL);
    localtime_r(&manySecondsFromNow, &future);
    
    printf("In 4 million seconds from now the date will be %d-%d-%d\n",
           future.tm_mday, future.tm_mon + 1, 1970 + future.tm_year);
    
    return 0;
}

