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
can only test if the present year is a leap year if the value entered for month is greater than 2 as most entered dates leap years are irrellevant.

Days of the week will be represented numerically with 0 for Thursday through 6 for Wednesday.
*/
#include <stdio.h>
#include <assert.h>

//What day was the doomsday of year 0? 0=Thursday - 6= Wednesday
#define DOOMSDAY_YEAR_ZERO 
#define DAYS_IN_THE_WEEK 7

int main(int argc, char *argv[]) {
	int year, month, day, doomsday;
	
	printf ("Please enter a year after 1582AD: ");
	scanf("%d", &year);
	printf("Please enter a month between 1 and 12: ");
	scanf("%d", &month);
	printf("Please enter a day between 1-31 (relative to the month)");
	scanf("%d", day);
	
	//doomsday for the year
	doomsday = (5*(year%4)+4*(year%100)+6*(year%400))%7;
	printf("%d", doomsday);
	
}

int daysTilThursday(int day){
	
	
}