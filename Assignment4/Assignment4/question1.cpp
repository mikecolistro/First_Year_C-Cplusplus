//Michael Colistro
//Assignment 4 Question 1
//Uses Newtons Theory to find the square root of a number

#include <iostream>
using namespace std;

//Function prototype for Newton_sqrt function
double * Newton_sqrt(double, double);

//main function
int main(){
	
	//variable declarations
	double x, n; 
	
	for(;;){
	//asks the user to enter the number which they want square rooted
	cout << "Enter the positive number that you would like to find the square root of: ";
	cin >> x;

	//breaks the loop if the user entered a valid number
		if(x > 0){
			break;

		}

	cout << "\nERROR the number was below zero re-enter";
	}
	
	

	n = x;
	
	//calls the square root function and returns a pointer because the number returned with just a double gives the number -1*#00
	double *ans;
	ans = Newton_sqrt(x, n);
	
	cout << "The square root of " << x << " is " << *ans << "\n\n";
	
	return(0);
}

//recursive function for finding the square root
double * Newton_sqrt(double a, double b){
	
	double epsilon = 0.000001;
	
	if (abs(b*b-a) <= epsilon){
		
		double *x = &b;
		return x;    
	}
    
	else 
		Newton_sqrt(a, (b*b+a)/(2*b));	
}
