//Written by Keone Martin
// 21/01/2016
// A program to apply the wonder algorithm to a user input. That is if a number is even divide it by 2 if odd multiply by 3 and add 1 and repeat until the number =1.
#include <stdio.h>
#include <stdlib.h>

int wonder(int input);

int main(int argc, char *argv[]){
	
	int numbersbeforeone, number; //stores the number of numbers before the pattern reached 1.
	printf("Please enter a number to wonderfy: ");
	scanf("%d", &number);
	numbersbeforeone = wonder(number);
	printf("This entry took %d permutations.", numbersbeforeone);
	
	return EXIT_SUCCESS;
}


int wonder(int number){
	int counter;
	counter =0;
	while(number!=1){
		if(number%2==0){
			number = number/2;
		}
		else{
			number= number*3 +1;
		}
		printf("%d\n",number);
		counter++;
	}
	return counter;
}