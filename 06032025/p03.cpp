/*3-> WAP to input user id and password. Show the password character as $. Match 
the user id as drbpsharma and password as 123456. If authentication passed print
 "Welcome to Secure System" else print "Authentication Failed"*/
 #include<stdio.h>
 #include<string.h>
 #include<conio.h>
 int main(){
 	char userid[50], password[50], ch;
 	int i=0;
 	printf("Enter the userid : \n");
 	scanf("%s", userid);
 	printf("Enter the password : \n");
 	while(1){
 		ch = getch();
 		if(ch==13){
 			break;
		 }
		 printf("$");
		 password[i] = ch;
		 i++;
	 }
	 password[i] = '\0';
//	 Checking the userid and password (logic)
	 if(strcmp(userid, "drbpsharma")==0 && strcmp(password, "123456")==0){
	 	printf("\nWelcome to Secure System : ");
	 }
	 else{
	 	printf(" \nAuthentication Error ");
	 }
	 return 0;
 }
