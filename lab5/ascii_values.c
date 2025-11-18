#include<stdio.h>
int main(){
	char c;
	printf("enter your char:");
	scanf("%c",&c);
	if(c>=65 && c<=90){
		printf("the character is uppercase");
	}
	else if(c>=97 && c<=122){
		printf("the character is lowercase");
	}
	else if(c>=33 && c<=47){
		printf("the character is a special character");
	}
	else if(c>=48 && c<=57){
		printf("the character is an integer");
	}
	return 0;
}