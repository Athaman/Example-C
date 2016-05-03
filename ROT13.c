//written by Keone Martin
// 21/01/2016
//Program to encrypt/decrypt ROT 13, which is ascii offset by 13.

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define FIRST_CAPITAL 'A'
#define LAST_CAPITAL 'Z'
#define FIRST_LOWER_CASE 'a'
#define LAST_LOWER_CASE 'z'
#define LETTERS_IN_ALPHABET 26
#define ROT13 13 //the cipher offset
#define CHAR_OVERFLOW_THREAT 'n'

char encode(char plaintext);
void testEncode(void);

int main(int argc, char *argv[]) {
	char plaintext, ciphertext;
	
	printf("Please insert a character to be encoded into ROT13: \n");
	scanf("%c", &plaintext);
	
	ciphertext= encode(plaintext);
	
	printf("The letter '%c' is converted to '%c' in ROT13.\n", plaintext, ciphertext);
	//testEncode();
   return EXIT_SUCCESS;
}

void testEncode(void){
	assert(encode('h')=='u');
	assert(encode('u')=='h');
	assert(encode('m')=='z');
	assert(encode('p')=='c');
	assert(encode('T')=='G');
	assert(encode('Y')=='L');
	
	printf("Congratulations, all tests passed");

}
char encode(char plaintext){
	char ciphertext;
	if(plaintext >= FIRST_CAPITAL && plaintext<=LAST_CAPITAL){
		ciphertext= plaintext + ROT13;
		if(ciphertext>LAST_CAPITAL){
			ciphertext= ciphertext-LETTERS_IN_ALPHABET;
		}
	}
	else if (plaintext >=FIRST_LOWER_CASE && plaintext<LAST_LOWER_CASE){//in this one i check for overflow first because running past the end of ascii breaks the char.
			if(plaintext >=CHAR_OVERFLOW_THREAT){
				plaintext=plaintext-LETTERS_IN_ALPHABET;
			}
			ciphertext = plaintext+ROT13;
			/*if(ciphertext<0){					This test chunk shows that if you take out the overflow test the char ends up in the negatives i.e. <0 (on my compiler)
				printf("OK so it tripped.");*/
			}
		}
	
		
	else{
		ciphertext = plaintext;
	}
	
	return ciphertext;
}