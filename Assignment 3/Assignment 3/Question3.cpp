/*
Michael Colistro
Assignment #3 Question 3
The user inputs how intense the work out is, Their weight, How long in minutes they worked out for, then the amount of calories
Then it outputs The amount of calories needed for Basal Metabolic Rate, The amount of calories needed for Exercise, The total amount of calories you need with Basal and Activity
The number of servings of that food should be eaten per day to maintain your current weight at the specified activity level,
The amount of calories needed to digest your food.
*/
#include <stdio.h>
#include <math.h>
float BasalMetaRate(float);
float Exercise1(float,float,float);

int main(){
float calneeded, favfoodcal, weight, intense, minutes, dailycal, foodcal, servings, total, digest;
int option;

		
		printf("Enter how intense the work out it from a scale from 1 - 10,\n Then enter your weight in pounds,\n then enter in how long in minutes did you work out for,\n Then lastly enter in the amount of calories for your favourite food for one serving?\n");
		scanf("%f %f %f %f", &intense, &weight, &minutes, &favfoodcal);
		dailycal = BasalMetaRate(weight);
		printf("The amount of calories needed for Basal Metabolic Rate is %.2f\n", dailycal);
		calneeded = Exercise1(intense,weight,minutes);
		printf("The amount of calories needed for Exercise is %.2f\n", calneeded);
		total = dailycal + calneeded;
		printf("The total amount of calories you need with Basal and Activity is %f\n", total);
		servings = total / favfoodcal;
		printf("%.2f servings of that food should be eaten per day to maintain your current weight at the specified activity level.\n", servings);
		digest = total * 0.1;
		printf("The amount calories required to digest your food is %f\n", digest);
		
	return 0;
}

float BasalMetaRate(float weight){
	float calneeded, x;
		x =  pow((weight/2.2),0.756);
		calneeded = 70 * x;
		
	return calneeded;
}

float Exercise1(float intensity, float weight, float min){
	float calneeded = 0;
		calneeded = 0.0385 * intensity * weight * min;
	return calneeded;

}
