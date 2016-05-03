//written by Keone Martin
// 18/01/2016
// a program to tell you what day an entered date will be.
/*
To complete this task I need to implement a program for the doomsday method which states that in any given year January 3 (or 4 for leap years) February 28th(or 29th for leap years)
March 0 (last day of Feb) April 4th (4/4) May 9th(9/5) June 6 (6/6) July 11 (7/11) August 8(8/8) September 5 (9/5) October 10 (10/10) November 7 (7/11) December 12(12/12)
are all the same day of the week. This day progresses by 1 day each year except leap years where it skips a day. The simple part of this program will be to calculate the number
of days from the closest doomsdate mudolo 7 to conclude days til next thursday. The immensely more challenging part will be writing a program to compute an entered date's 
closest doomsday.

For the doomsday calculation I will have the user enter in 3 seperate integers for the date, month and year they wish calculated to closest Thursday.
Using the year I will calculate the doomsday of that year by working out the doomsday of Year 0 advanced by 1 day per year - leap years (being every 4th year except every 100
years unless it's the 400th).
Using the Month and Day I will locate the closest doomsdate and then work from that to find the entered date's day, which I will then insert into a function to calculate daysTilThursday

Note that I will have to calculate if the given year is a leap year to have slightly varied functions for finding out the doomsdate for January/February. For computing efficiency I
can only test if the present year is a leap year if the value entered for month is less than than 2 as most entered dates leap years are irrellevant.

Days of the week will be represented numerically with 0 for Thursday through 6 for Wednesday.

19/01/2016: I've updated the program to take input pre 1582 (implementation of the gregorian calendar) however it's hard to test since google doesn't like dates that far back.
*/
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define DAYS_IN_THE_WEEK 7
#define START_OF_GREG_CALENDAR 1582 //The year leap years were implemented.

int isItALeapYear(int year);
int whatIsTheDoomsday(int year);
int whatIsTheDoomsdate(int month, int leapyear);

int main(int argc, char *argv[]) {
	int year, month, day, doomsday, doomsdate, leapyear, daystilthursday, athursday, dateisa, doomgap = 0;// year, month, day as entered by user. doomsday holds to day from 0-6 with Thursday being 0
	// doomsdate is the number of the day that the doomsday falls on. Leapyear stores whether it is a leapyear as this affects the doomsdate if it is. Doomgap is the number of days
	//offset the date entered is from the doomsday. daystilthursday is how many days til the next thursday. dateisa stores 0-6 to represent the day for a neater printing message.
	//unsigned int = 0;
	
	printf ("Please enter a year: ");
	scanf("%d", &year);
	printf("Please enter a month between 1 and 12: ");
	scanf("%d", &month);
	printf("Please enter a day between 1-31 (relative to the month)");
	scanf("%d", &day);
	
	doomsday = whatIsTheDoomsday(year);
	leapyear = isItALeapYear(year);
	doomsdate= whatIsTheDoomsdate(month, leapyear);
	daystilthursday = (49+athursday-day)%7;//49 to avoid going into negatives using a multiple of 7.
	athursday = (7+doomsdate - doomsday);//plus 6 to avoid going into negatives with 6 representing the highest numbered day.
	//not really happy with the add random numbers solve for going into negatives but it works.
	
	if(daystilthursday== 0){
		printf("The date entered is a Thursday, there are %d days til the next Thursday.\n", daystilthursday);
	}
	else if(daystilthursday == 6){
		printf("The date entered is a Friday, there are %d days til the next Thursday.\n", daystilthursday);
	}
	else if(daystilthursday == 5){
		printf("The date entered is a Saturday, there are %d days til the next Thursday.\n", daystilthursday);
	}
	else if(daystilthursday == 4){
		printf("The date entered is a Sunday, there are %d days til the next Thursday.\n", daystilthursday);
	}
	else if(daystilthursday == 3){
		printf("The date entered is a Monday, there are %d days til the next Thursday.\n", daystilthursday);
	}
	else if(daystilthursday == 2){
		printf("The date entered is a Tuesday, there are %d days til the next Thursday.\n", daystilthursday);
	}
	else{
		printf("The date entered is a Wednesday, there is %d day til the next Thursday.\n", daystilthursday);
	}
	
	return EXIT_SUCCESS;	
}

int isItALeapYear(int year) { //check if the year entered is a leap year as this affects the doomsdates.
	int leapyear; //set a leapyear: int 0 for not 1 for is a leapyear.
	year = year;
	leapyear =0;
	
	if((year%4)==0 && year>START_OF_GREG_CALENDAR &&((year%100)!=0 || (year%400==0)))
		{
			leapyear = 1;
	}
	else{
			leapyear = 0;
	}
   return leapyear;
}

int whatIsTheDoomsday(int year){
//doomsday for the year this is a universal formula established on the premise of Tuesday (I honestly don't know why it's off wiki) the +5 and %7 at the end simply callibrates 
	//the outcome to align with Thursday = 0
	int doomsday=0;
	if(year>START_OF_GREG_CALENDAR){
		
	doomsday = (5*(year%4)+4*(year%100)+6*(year%400)+5)%7;
	}
	else{
		doomsday= (5*(year%4)+3*(year%7)+3)%7;
	}
	return doomsday;
}	

int whatIsTheDoomsdate(int month, int leapyear){ 
	int doomsdate=0;
	
	if (month ==4||month == 6||month == 8||month ==10||month == 12){
		doomsdate= month;
	}
	else if (month == 5){
		doomsdate = 9;
	}
	else if (month ==9){
		doomsdate = 5;
	}
	else if (month ==7){
		doomsdate = 11;
	}
	else if (month ==11){
		doomsdate = 7;
	}
	else if (month ==3){
		doomsdate =0;
	}
	else if (month ==1){//The doomsdate for January is 3 unless it's a leap year then 4.
		if(leapyear == 0){
			doomsdate= 3;
		}
		else{
			doomsdate = 4;
		}
	}
	else{// the doomsdate for February is 28 except leap years it's 29.
		if(leapyear ==0){
			doomsdate =28;
		}
		else{
			doomsdate =29;
		}		
	}
	return doomsdate;
	
}