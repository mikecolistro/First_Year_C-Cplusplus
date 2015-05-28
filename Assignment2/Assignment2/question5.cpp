/*#include <stdio.h>
#include <stdlib.h>
void main (void){
int accntnum, daymin, nightmin, totalmin;
float bill, bill2, total;
char service;
total = 0;
bill2 = 0;
printf("Enter in your account number, which service you use ('R' for Regular service and 'P' for Premium service), the number of day times minutes used (if using regular service just put all minutes under day time minutes and 0 for night time) and night time minutes\n");
scanf("%d %c %d %d", &accntnum, &service, &daymin, &nightmin);
if((service != 82) || (service != 80)){
	printf("ERROR ERROR incorrect service type! Make sure you enter S or P (both capitilized)\n");
		exit(EXIT_FAILURE);
}
if(service == 82){
	bill = 10;
	if(daymin > 50){
		bill = bill + ((daymin - 50) * 0.20);
	}
	total = bill;
}
else if(service == 80){
	bill = 25;
	if(daymin > 75){
		bill = bill + ((daymin - 75) * 0.10);
	}
	if(nightmin > 100){
		bill2 = ((nightmin - 100) * 0.05);
	}
	total = bill + bill2;
}
totalmin = daymin + nightmin;
printf("Your account number is %d\n Type of service was %c\n The total number of minutes used was %d\n The amount due from the user is $%.2f\n", accntnum, service, totalmin, total);
}*/
