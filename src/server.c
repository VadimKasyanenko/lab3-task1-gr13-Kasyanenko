//
// Created by Vadim Kasyanenko 
//

//function compares sum of first 3 digits and sum of last 3 digits
//num is the number which is checked to be lucky
//function returns is the number lucky or not

#include "interface.h"

#define numDigits 6 // number of digits in the number

int isLucky(int number)
{
    if (number < 0 || number >= 1000000) {
        // invalid input
        return 0;
    }

    int sumFirstThree = 0;
    int sumLastThree = 0;
    for (int i = 0; i < numDigits; i++) {
        int digit = number % 10;
        number /= 10;
        if (i < 3) {
            sumFirstThree += digit;
        }
        else {
            sumLastThree += digit;
        }
    }
    return sumFirstThree == sumLastThree;
}

