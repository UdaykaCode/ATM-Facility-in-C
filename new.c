#include<stdio.h>
#include<stdlib.h>
// Function Declaration -->
float dpt(float a,float b){
	if (b == 0) // If input is 0, then it will break the program
	return a;
	float sum = a + b;
	return sum;
}
float wth(float a,float b){
    if (a == 0) // If the main amount is 0, then the program cannot run
    return 1;
    else if (b == 0) // If input is 0, then it will break the program
    return b;
	float sub = a - b;
	return sub;
}
// Main -->
int main(void){
	float result=0,x;
	int opt;
	printf("--------------------------\nDeveloped by : @UdaykaCode");
	do{
		printf("\n--------------------------\n1. Check Balance\n2. Deposite\n3. Trancation\n4. Exit\n--------------------------\nEnter Your Choice --> ");
		scanf("%d",&opt);
		switch(opt){
			case 1 :	
						printf("***************************************\nYour Current Balance is : %.2f Rs.\n***************************************\n",result); break;
			case 2 :	printf("***************************************\nEnter Your Amount : ");
						scanf("%f",&x);
						result = dpt(result,x);  // Calling function
						if (result == 0) // Checking the return 
						printf("Amount should be Rs: 1.00 or Above");
						else
						printf("\n--Deposite Successfull!\n***************************************\n"); break;
			case 3 :	printf("***************************************\nEnter Your Amount : ");
						scanf("%f",&x);
						result = wth(result,x);
						if (result == 1){
						printf("Insufficient Amount for Transation");
						result = 0;
						}
						else if(result == 0)
						printf("Amount should be Rs: 1.00 or Above");
						else
						printf("\n--Withdraw Successfull!\n***************************************\n");break;
			case 4 :	printf("**Thank You! Have a nice day.**");exit(1); // Direct Exit or close the program
			default : printf("\n--Invalid Input\n");
		}
	}while(opt!=4);
	return 0;
}
