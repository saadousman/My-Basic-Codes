#include <stdio.h>
#include <string.h>
const int wordlength=20;
int main(){

	//Declaring variables for storing input,holding original word, holding reversed word
	char captureinput[wordlength];
	char storeinput[wordlength];
	//code begins by capturing input
	scanf("%s",captureinput);
    for(int i=0;i<=wordlength;i++) //for loop for copying input array to storeinput array
	{storeinput[i]=captureinput[i];}
	strrev(captureinput);				// reversing the array	
   int result=  strcmp(captureinput,storeinput); // compares the reversed and entered array and stores the result 
   
   if (result==0)						// final if statement
   printf("The Word You have Entered is indeed a Palindrome");
   else
   printf("The Word you have entered is not a Palindrome");

}
