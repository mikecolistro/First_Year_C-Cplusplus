/*Michael Colistro
Assignment #3 Question 4
The program asks for the next coin to enter than adds it to the current balance. 
It keeps looping till 3.50 is reached.
If the amount goes over it returns the amount of change you will recieve and a message.

*/

#include <stdio.h>

int main(){
	char amountentered, temp;
	float j=0, total, change;
	for(float i = 0; i < 3.50; j++){
		printf("Next coin to enter?\nD for dollar, Q for quarter, I for dime, N for nickel.\n");
		scanf("%c", &amountentered);
		scanf("%c", &temp);

		if(amountentered == 68){
			i = i + 1.00;
		}
		else if(amountentered == 81){
			i = i + 0.25;
		}
		else if(amountentered == 73){
			i = i + 0.10;
		}
		else if(amountentered == 78){
			i = i + 0.05;
		}
		printf("Current balance: $%.2f\n", i);

		if(i >= 3.50){
			total = i;
		}


	}

	if(total >= 3.50){
		printf("Enjoy your twinkie\n");
		change = total - 3.50;
		printf("Your change is $%.2f\n", change);
	}


	return 0;
}