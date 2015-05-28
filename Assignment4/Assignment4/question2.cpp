//Michael Colistro
//Assignment 4 question 2

//libraries
#include <iostream>
using namespace std;

//function prototype
int bank(double amount, double interest, int years);

//recursive function that applies teh interest according to year
int bank(double amount, double interest, int years){
	//checks to see if year is only one
	if(years == 1){

		amount = amount * interest;
		return amount;
	}
	else{
		amount = amount * interest;
		bank(amount,interest,years-1);
	}
}

//main function
int main(){
	//variable definitons
	int years;
	double amount, interest;

	//prompts the user for info
	cout << "How much money would u like to deposit: ";
	cin >> amount;
	cout << "\n What is the interest rate per year in percentage form: ";
	cin >> interest;
	//changes the interest percentage to decimal
	interest = interest / 100;
	interest = interest + 1;
	cout << "\n How many years will the money accrue compound interest: ";
	cin >> years;

	//calls the function and the ammount is returned
	amount = bank(amount,interest,years);
	cout << "The amount of money accumulated is: $" << amount << endl;
	return 0;
}