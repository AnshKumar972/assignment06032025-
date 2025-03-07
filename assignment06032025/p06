// 6--> WAP to input a string and check it to be palindrome
#include<stdio.h>
int main(){
	char str[100];
	printf("Enter a string : ");
	gets(str);
	int i=0,j=0,length=0;
	int check;
	while(str[i]){
		i++;
	}
	length=i;
	for(i=0,j=length-1;i<=length/2;i++,j--){
		if(str[i]!=str[j]){
			check++;
		}
	}
	if(check!=0){
		printf("The string is not palindrome : %s", str);
	}
	else{
		printf("The string is palindrome : %s", str);
	}
}
