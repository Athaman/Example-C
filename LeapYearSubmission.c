//written by Keone Martin
// 17/01/2016
//Program to scan number entry and ascertain whether it is a leap year. A leap year is any year that is a multiple of 4 but not 100 unless also 400.

#include <stdio.h>
#include <assert.h>

#define START_OF_LEAP_YEARS 1582

int main(int argc, char *argv[]) {
	int year;
	year = 0;
	
	printf("Please enter a year: ");
	scanf("%d", &year); 
	assert(year>=START_OF_LEAP_YEARS);
	
	if((year%4)==0 && (year%100)!=0 || (year%400==0))
		{
			printf("The year %d is a leap year.\n", year);
	}
	else{
			printf("The year %d is not a leap year.\n", year);
	}
   return 0;
}