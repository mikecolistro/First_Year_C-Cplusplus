/*#include <stdio.h>
void main (void){
	int accntnum, minbal; 
	float curbal;
	char accnttype;
	printf("Enter you account number than enter your account type (S for savings or C for   checking) then enter the minimum balance then enter your current balance\n");
	scanf("%d %c %d %f", &accntnum, &accnttype, &minbal, &curbal);
	if( minbal > curbal && accnttype == 83){
		curbal = curbal - 10;
	}
	if( minbal > curbal && accnttype == 67){
		curbal = curbal - 25;
	}
	if( minbal <= curbal && accnttype == 83){
		curbal = curbal * 1.04;
	}
	if( curbal >= minbal + 5000 && accnttype == 67){
		curbal = curbal * 1.05;
	}
	if( curbal < minbal + 5000 && accnttype == 67){
		curbal = curbal * 1.03;
	}
	printf("Your account number is %d\n Your account type is %c\n Your current balance is %.2f\n", accntnum, accnttype, curbal);
}*/