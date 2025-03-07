// 2-->  WAP to input two numbers and print all prime numbers in range
#include<stdio.h>
int main(){
	int n1, n2, i, j;
	printf("Enter the range numbers to print the prime numbers : ");
	scanf("%d%*c%d%*c", &n1, &n2);
	for(i=n1;i<=n2;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(j==i){
			printf("%d ", i);
		}
	}
}
