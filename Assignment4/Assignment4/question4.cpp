//Michael Colistro
//Assignment 4 question 4

//libraries
#include <iostream>
#include <stdarg.h>
using namespace std;

//function prototype
int linSearch(double i, ...);

//function that linear searches with va_list
int linSearch(double i, ...){
	//functiond efinitions
	double num1, amount;
	double x;
	//prompts the user for what to search and how many elements are in it
	cout << "What number would you like to search for: ";
	cin >> num1;
	cout << "How many elements are in the list (enter 7 if using teacher example): ";
	cin >> amount;
	va_list num;

	va_start(num,i);

	//checks the first parameter
	if(num1 == i)
		return 1;

	//checks the all the parameter except the first
	for(int j = 0; j < amount; j++){
		x = va_arg(num,double);
		if(num1 == x){
			return 1;
		}
	}
	va_end(num);
	return -1;
}

//main function
int main(){


	int x;
	x = linSearch(  90.2, 20.4, 25.7, 72.9, 73.1, 88.6, 100.0);
	if(x == 1)
		cout << " The number was found in the list" <<  endl;
	else if(x == -1)
		cout << "The number was NOT found in the list" << endl;
	return 0;
}