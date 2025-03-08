/* 2->  WAP to input a string and print that string in upper case,
lower case, reverse case, sentence case and toggle case*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[100], lower[100], upper[100], reverse[100], sen[100], toggle[100];
	int i;
	printf("Enter the string : \n");
	gets(str);
	// Logic of to lowercase
	for(i=0;str[i] != '\0';i++){
		lower[i] = tolower(str[i]);
	}
	lower[i] = '\0';
	printf("The lower case string is : %s \n", lower);
	// Logic of to uppercase
	for(i=0;str[i] != '\0';i++){
		upper[i] = toupper(str[i]);
	}
	upper[i] = '\0';
	printf("The upper case string is : %s \n", upper);
	// Logic of to reverse case
	for(i=0;str[i] != '\0';i++){
		if(islower(str[i])){
			reverse[i] = toupper(str[i]);
		}
		else if(isupper(str[i])){
			reverse[i] = tolower(str[i]);
		}
		else{
			reverse[i] = str[i];
		}
	}
	reverse[i] = '\0';
	printf("The reverse case string is :  %s \n", reverse);
	// Logic of sentence case of string
	int firstletter = 1;
	for(i=0;str[i] != '\0';i++){
		if(firstletter && isalpha(str[i])){
			sen[i] = toupper(str[i]);
			firstletter = 0;
		}
		else{
			sen[i] = tolower(str[i]);
		}
	}
	sen[i] = '\0';
	printf("The sentence case string is : %s \n", sen);
	// Logic of toggle case
	for(i=0;str[i] != '\0';i++){
		if(islower(str[i])){
			toggle[i] = toupper(str[i]);
		}
		else if(isupper(str[i])){
			toggle[i] = tolower(str[i]);
		}
		else{
			toggle[i] = str[i];
		}
	}
	toggle[i] = '\0';
	printf("The toggle case string is : %s", toggle);
	
	return 0;	
}
