// 3--> WAP to input a number and print that much of prime numbers
#include<Stdio.h>
int main(){
	int n,i,j;
	printf("Enter a number to print that much of prime numbers : \n");
	scanf("%d%*c", &n);
	printf("1 ");
	for(i=1;i<=n;i++){
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
