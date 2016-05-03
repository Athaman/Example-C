//written by Keone Martin
// 17/01/2016
//Program to scan number entry and ascertain whether it is a leap year. A leap year is any year that is a multiple of 4 but not 100 unless also 400.

#include <stdio.h>
#include START_OF_LEAP_YEARS=1582;

int main(int argc, char *argv[]) {
	int year;
	year = 0;
	
	printf("Please enter a year");
	scanf("%d", &year); 
	
	if(year>START_OF_LEAP_YEARS)
	{
		if((year%4)==0){
			if((year%100)==0){
				if((year%400)==0){
					printf("This year is a leap year despite being divisible by 100 because it's divisible by 400.\n");
				}
				else{				
					printf("This year is not a leap year despite being divisible by 4 because it's divisible by 100.\n");
				}
			}
			else{
				printf("This year is a leap year because it's divisible by 4 and not 100.\n");
			}
		}
		else{
			printf("This year is not a leap year because it isn't divisible by 4.\n");
		}
	}
	else{
		printf("The Gregorian Calendar started in 1582 therefore anything before that was not a leap year.\n");
	}
   return EXIT_SUCCESS;
}
