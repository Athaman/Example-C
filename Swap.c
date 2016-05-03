// A program by Keone Martin
// Written on or about the 21/01/2016
// A program to swap two integers using pointer references

#include <stdio.h>
#include <stdlib.h>

void swap(int* first, int* second);

int main (int argc, char* argv[]){
	int first, second;
	first=8;
	second= 22;
	
	swap(&first, &second);
	
	printf("%d %d", first, second);
	
	return EXIT_SUCCESS;
}

void swap(int* first, int* second){
	int storage;
	storage=*first;
	*first=*second;
	*second=storage;
	
}