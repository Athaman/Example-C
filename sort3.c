//written by Keone Martin
// 20/01/2016
//Program to scan number entry from user and sort them in ascending order than print 1 per line.

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int smallest, middle, longest, storage=0;
	printf("Please input 3 integer numbers: \n");
	scanf("%d", &smallest);
	scanf("%d", &middle);
	scanf("%d", &longest);
	
	if(smallest>middle){//swap numbers
		storage = smallest;
		smallest = middle;
		middle = storage;
	}
	if(middle>longest){//swap numbers
		storage = middle;
		middle = longest;
		longest =storage;
	}
	if(smallest>middle){//swap numbers again
		storage = smallest;
		smallest = middle;
		middle = storage;
	}
	
	printf("The numbers you entered, in increasing order, were:\n %d \n %d \n %d", smallest, middle, longest);
	
   return EXIT_SUCCESS;
}