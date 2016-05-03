// A program by Keone Martin
// Written on or about the 26/01/2016
// A program to print out a symmetrical cross based on the users input. Input must be odd.

#include <stdio.h>
#include <stdlib.h>

void printCross(int input);

int main (int argc, char* argv[]){
	
	int input;
	scanf("%d", &input);
	printCross(input);
	
	return EXIT_SUCCESS;
}

void printCross(int input){
	int counterWidth=0;
	int counterHeight=0;
	int secondCross, firstCross;
	firstCross=0;
	secondCross=input-1;
	while(counterHeight<input){
		while(counterWidth<input){
			if(counterWidth==firstCross||counterWidth==secondCross){
				printf("#");
			}
			else{
				printf("-");
			}
			counterWidth++;
		}
		printf("\n");
		firstCross++;
		secondCross--;
		counterHeight++;
		counterWidth=0;
	}
}