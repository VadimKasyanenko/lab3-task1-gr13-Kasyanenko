//
// Created by Vadim Kasyanenko 
//

//function compares sum of first 3 digits and sum of last 3 digits
//num is the number which is checked to be lucky
//function returns is the number lucky or not

#include "interface.h"

int lucky(int num)
{
	if ((num % 1000) / 100 + (num % 1000) / 10 % 10 + (num % 1000) % 10 ==
		(num / 1000) / 100 + (num / 1000) / 10 % 10 + (num / 1000) % 10) {
		return 1;
	}
	else {
		return 0;
	}
}
