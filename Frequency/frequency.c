//Written by Keone Martin
// 26/01/2016
// A program to read in strings of characters and compile frequency statistics on how often each character appears.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


void countLetters(char input[], int frequency[]);
void printResults(int frequency[], int lengthofinput);

int main(int argc, char *argv[]){
	char content[256];
	printf("Please enter an input and I'll tell you how many of each letter you said... \n");
	fgets(content, 256, stdin);
	int frequency[26] ={0}; //an array containing 26 ints that will count the frequency of each input. 
	countLetters(content, frequency);
	printResults(frequency, strlen(content));
	
	return EXIT_SUCCESS;
}


void countLetters(char input[], int frequency[]){
	int counter =0;
	int length =0;
	char current;
	length = strlen(input);
	while(counter < length){
		current = input[counter];
		//printf("%d%c, ", counter, current);
		if(current=='a' || current =='A'){
			frequency[0]++;
		}
		else if(current=='b'|| current =='B'){
			frequency[1]++;
		}
		else if(current =='c' || current =='C'){
			frequency[2]++;
		}
		else if(current =='d' || current =='D'){
			frequency[3]++;
		}
		else if(current =='e' || current =='E'){
			frequency[4]++;
		}
		else if(current =='f' || current =='F'){
			frequency[5]++;
		}
		else if(current =='g' || current =='G'){
			frequency[6]++;
		}
		else if(current =='h' || current =='H'){
			frequency[7]++;
		}
		else if(current =='i' || current =='I'){
			frequency[8]++;
		}
		else if(current =='j' || current =='J'){
			frequency[9]++;
		}
		else if(current =='k' || current =='K'){
			frequency[10]++;
		}
		else if(current =='l' || current =='L'){
			frequency[11]++;
		}
		else if(current =='m' || current =='M'){
			frequency[12]++;
		}
		else if(current =='n' || current =='N'){
			frequency[13]++;
		}
		else if(current =='o' || current =='O'){
			frequency[14]++;
		}
		else if(current =='p' || current =='P'){
			frequency[15]++;
		}
		else if(current =='q' || current =='Q'){
			frequency[16]++;
		}
		else if(current =='r' || current =='R'){
			frequency[17]++;
		}
		else if(current =='s' || current =='S'){
			frequency[18]++;
		}
		else if(current =='t' || current =='T'){
			frequency[19]++;
		}
		else if(current =='u' || current =='U'){
			frequency[20]++;
		}
		else if(current =='v' || current =='V'){
			frequency[21]++;
		}
		else if(current =='w' || current =='W'){
			frequency[22]++;
		}
		else if(current =='x' || current =='X'){
			frequency[23]++;
		}
		else if(current =='y' || current =='Y'){
			frequency[24]++;
		}
		else if(current =='z' || current =='Z'){
			frequency[25]++;
		}
		counter++;
	}
}

void printResults(int frequency[], int length){
	printf("A %d/%d\n", frequency[0], length);
	printf("B %d/%d\n", frequency[1], length);
	printf("C %d/%d\n", frequency[2], length);
	printf("D %d/%d\n", frequency[3], length);
	printf("E %d/%d\n", frequency[4], length);
	printf("F %d/%d\n", frequency[5], length);
	printf("G %d/%d\n", frequency[6], length);
	printf("H %d/%d\n", frequency[7], length);
	printf("I %d/%d\n", frequency[8], length);
	printf("J %d/%d\n", frequency[9], length);
	printf("K %d/%d\n", frequency[10], length);
	printf("L %d/%d\n", frequency[11], length);
	printf("M %d/%d\n", frequency[12], length);
	printf("N %d/%d\n", frequency[13], length);
	printf("O %d/%d\n", frequency[14], length);
	printf("P %d/%d\n", frequency[15], length);
	printf("Q %d/%d\n", frequency[16], length);
	printf("R %d/%d\n", frequency[17], length);
	printf("S %d/%d\n", frequency[18], length);
	printf("T %d/%d\n", frequency[19], length);
	printf("U %d/%d\n", frequency[20], length);
	printf("V %d/%d\n", frequency[21], length);
	printf("W %d/%d\n", frequency[22], length);
	printf("X %d/%d\n", frequency[23], length);
	printf("Y %d/%d\n", frequency[24], length);
	printf("Z %d/%d\n", frequency[25], length);
}

