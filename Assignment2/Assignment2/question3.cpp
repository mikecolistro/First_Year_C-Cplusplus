#include <stdio.h>
#include <stdlib.h>

void main (void){
	char sign;
	
	int num1, num2, total;
	printf("Enter in the first integer than your operation than the second integer\n");
	scanf("%d %c %d", &num1, &sign, &num2);
	//scanf("%c", &sign);
	printf("Your integers where %d and %d\n", num1, num2);
	printf("The operation chosen is %c\n", sign);
	if(num2 == 0 && sign == 47){
	printf("ERROR ERROR Division by zero!!!!\n");
		exit(EXIT_FAILURE);
	}
	if(sign == 43){
		printf("The equation is %d %c %d\n", num1, sign, num2);
		total = num1 + num2;
		printf("The total is %d\n", total);
	}
	else if(sign == 45){
		printf("The equation is %d %c %d\n", num1, sign, num2);
		total = num1 - num2;
		printf("The total is %d\n", total);
	}
	else if(sign == 42){
		printf("The equation is %d %c %d\n", num1, sign, num2);
		total = num1 * num2;
		printf("The total is %d\n", total);
	}
	else if(sign == 47){
		
		printf("The equation is %d %c %d\n", num1, sign, num2);
		total = num1 / num2;
		printf("The total is %d\n", total);
	}
}