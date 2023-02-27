//
// Created by Vadim Kasyanenko 
//

//check all numbers to find lucky ones

#include "interface.h"
#include "stdio.h"

int main()
{
	int counter=0;
	for (int i = 100000; i < 1000000; i++) {
		if (lucky(i)==1) {
			printf("%d\n", i);
			counter++;
		}
	}
	printf("%d\n", counter);
}

