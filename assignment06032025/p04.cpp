// 4--> WAP to input a string and print length of it
#include<stdio.h>
int main(){
	int i;
	char s[50];
	printf("Enter a string :");
	gets(s);
	while(s[i] != '\0'){
		i++;
	}
	printf("The total character in the string is : %d",i);
	return 0;
}
