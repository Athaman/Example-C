//Written by Keone Martin
// 21/01/2016
// A program to apply the wonder algorithm to an increasing input over 1000 to find the shortest algorithm for a number starting over 1000.
// The wonder algorithm is if a number is even divide it by 2 if odd multiply by 3 and add 1 and repeat until the number =1.
#include <stdio.h>
#include <stdlib.h>

int wonder(long long input);

int main(int argc, char *argv[]){
	
	int numbersbeforeone, largeststartingpoint, smallestnumbersbeforeone;
	long long startingpoint;
	numbersbeforeone = 0;
	smallestnumbersbeforeone=1000;
	largeststartingpoint = 0;
	startingpoint = 1000;
	
	while(startingpoint<100000000){
		
		numbersbeforeone = wonder(startingpoint);
		if(numbersbeforeone<smallestnumbersbeforeone){
			smallestnumbersbeforeone=numbersbeforeone;
			largeststartingpoint = startingpoint;
		}
		startingpoint++;
		
	}
	
	printf("The smallest number sequence for wondering between 1000 and 100000000000 is %d, which contains %d numbers before 1", largeststartingpoint, smallestnumbersbeforeone);
	
	return EXIT_SUCCESS;
}


int wonder(long long startingpoint){
	int counter;
	counter =0;
	while(startingpoint!=1){
		if(startingpoint%2==0){
			startingpoint = startingpoint/2;
		}
		else{
			startingpoint= startingpoint*3 +1;
		}
		counter++;
	}
	return counter;
}