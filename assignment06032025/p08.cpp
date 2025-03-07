// 8 WAP to input a string and sum of all digits
#include<Stdio.h>
int main(){
	char s[100];
	int i=0;
	printf("Enter the string : ");
	gets(s);
	int sum=0;
	while(s[i] != '\0'){
		sum++;
		i++;
	}
	printf("The sum of the digits of string is : %d", sum);
	return 0;
}
