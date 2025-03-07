// 5--> WAP to input a string and reverse print it
#include<stdio.h>
#include<string.h>
int main(){
	int i,j=0;
	char s[50];
	char r[50];
	printf("Enter a string : ");
	gets(s);
	for(i=strlen(s)-1;i>=0;i--){
		r[j]=s[i];
		j++;
	}
	r[j]='\0';
	printf("The reveresed string is : %s", r);
	
}
