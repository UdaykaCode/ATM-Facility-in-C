#include<stdio.h>
#include<stdlib.h>
// Function Decleration -->
float dpt(float a,float b){
	if (b == 0){ // If input is 0, then it will break the program
    printf("Amount should be Rs: 1.00 or Above");
	return 1;
    }
	float sum = a + b;
	return sum;
}
float wth(float a,float b){
    if (a == 0){ // If the main amount is 0, then the program is end
    printf("Insufficient Amount for Transation");
    return 1;
    }
    else if (b == 0){ // If input is 0, then it will break the program
    printf("Amount should be Rs: 1.00 or Above");
    return 1;
    }
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
						if (result == 1) // Checking the return for error handeling
						result=0; // Reinitilizating the variable value
						else
						printf("\n--Deposite Successfull!\n***************************************\n"); break;
			case 3 :	printf("***************************************\nEnter Your Amount : ");
						scanf("%f",&x);
						result = wth(result,x);
						if (result == 1)
						result = 0;
						else
						printf("\n--Withdraw Successfull!\n***************************************\n");break;
			case 4 :	printf("**Thank You! Have a nice day.**");exit(1); // Direct Exit or close the program
			default : printf("\n--Invalid Input\n");
		}
	}while(opt!=4);
	return 0;
}