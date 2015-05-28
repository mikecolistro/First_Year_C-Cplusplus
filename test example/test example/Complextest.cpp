#include <iostream> 
#include <cstdarg>
using std::cout;
using std::endl;

#include "Complex.h"

int dubdub(int);
void (*funcptr)(int n,...);

void funct(int n, ...);

void funct(int n, ...){
	va_list args;

	va_start(args,n);
	for(int i = 0; i < n; i++){
		cout << va_arg(args,int) << endl;
	}

}

int dubdub(int n){
	n = n * n;
	return n;
}

int main()
{
	
	int chose = 0;
	funcptr = funct;
	funcptr(5,4,5,6,7,8);
	//funct(5,3,4,5,7,8);

	/*cout << "Enter in a number to choose which part of the program you want to run : \n 1- overloading function operaters 2- functions to pointers ";
	cin >> chose;
	*/
	
	//if(chose == 1){
	#if Num1
	cout << "y:  (4.3,8.2) z:  (3.3,1.1)\n";

     Complex x;
     Complex y;
     Complex z;
	 cout << "Enter in values for complex y with values in the form (num1,num2): ";
	 cin >> z;
	 cout << "\nEnter in the values for complex z with values in the form of (num1,num2): ";
	 cin >> y;

     cout << "x:  ";
	 cout << x;
     cout << "\ny:  ";
     cout << y;
     cout << "\nz:  ";
     cout << z;

    x = y + z;
     cout << "\n\nx = y + z: " << endl;
     cout << x;
     cout << " = ";
     cout << y;
     cout << " + ";
     cout << z;
	     x = y - z;
     cout << "\n\nx = y - z: " << endl;
     cout << x;
     cout << " = ";
     cout << y;
     cout << " - ";
     cout << z;
     cout << endl;
#endif
	if(chose == 2){

		
		int num1;
		cout << "enter in a number to send to the function to double it!: ";
		cin >> num1;

		cout<< "the number your entered was doubled to" << num1;



	}
	
     return 0;
}
