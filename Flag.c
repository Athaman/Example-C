//Written by Keone Martin
// 21/01/2016
// a practice case for nested while loops, tasked to print out the Danish flag using 2 while loops (initially used 3 see alternative for 2 loop version).
#include <stdio.h>
#include <stdlib.h>

void showDanish(void);
void alternateShowDanish(void);

int main(int argc, char *argv[]){
	
	showDanish();
//	alternateShowDanish();
	
	return EXIT_SUCCESS;
}

void showDanish(void){
	int row, col;
	row=0;
	
	while (row<5){
		col=0;
		if(row!=2){
			while(col<13){
				if(col!=2){
					printf("*");
				}
				else{
					printf(" ");
				}
				col++;
			}
		}
		else{
			while(col<13){
				printf(" ");
				col++;
			}
		}
		printf("\n");
		row++;
	}
	printf("\n\n\n");
}

void alternateShowDanish(void){
	int row, col;
	row = 0;
	
	while(row<5){
		col = 0;
		
		while(col<13){
			if(row!=2 && col!=2){
				printf("*");
			}
			else{
				printf(" ");
			}
			col++;
		}
		row++;
		printf("\n");
	}
}
