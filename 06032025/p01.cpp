/*1-> WAP to input 10 floating valuesfrom user and show the
smallest and biggest numbers in given values*/
#include<stdio.h>
int main(){
	float arr[10];
	int i,j;
	float smallest, biggest;
	printf("Enter the 10 elements one by one : ");
	for(i=0;i<10;i++){
		scanf("%f%*c", &arr[i]);
	}
	smallest = arr[0];
	biggest = arr[0];
	for(int i=0;i<10;i++){
		
		if(smallest>arr[i]){
			smallest = arr[i];
		}
		if(biggest<arr[i]){
			biggest = arr[i];
		}
	}
	printf("The smallest number is %f \n", smallest);
	printf("The biggest number is %f", biggest);
	
}
