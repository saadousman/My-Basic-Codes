// C program to generate random password
#include <stdio.h> 
#include <stdlib.h> 
#include<time.h> 

// Driver program 
int main(void) 
{   srand(time(0));
    int length;
	char randar1[60]{'1','a','!','2','b','@','3','c','#','4','d','$','5','e','%','6','f','&','7','g','*','8','h','!','9','i','@','1','J','%','3','V','$','6','E','3','^','U','#','*','X','3','H','t','%','I','$','*','&','g','T','U','I','O','6','4','@','a','F','0'};
    printf("Enter the Length of the password you require: ");
    scanf("%d",&length);
	for(int i=0;i<length;i++){
	
    printf("%c",randar1[rand()%60]);
}
}
