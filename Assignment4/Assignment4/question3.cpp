//Michael Colistro
//Assignment 4 Question 3
//libraries
#include <iostream>
#include "preprocessor.h"
#include <string.h>
using namespace std;

//main function
int main(){
	//string definition
	char s1[100];
	//prompts the user for input
	cout << "Enter in a sequence of characters: ";
	cin >> s1;


	//loop that goes through ever character entered
	for(int i = 0; i < strlen(s1); i++){
		//counter definition or known as j
		int j = 0;
		cout << "\n";
		//infinite loop that breaks if a match is found
		for(;;){
			
			
			//if statements that finds the matcha nd prints the preprocessor
			if(s1[i] == LOWERS[j]){
				cout << s1[j] << " was found in LOWERS here is the values of LOWERS: " << LOWERS << "\n";
				break;
			}
			else if(s1[i] == DIGITS[j]){
				cout << s1[j] << " was found in DIGITS here is the values of DIGITS: " << DIGITS << "\n";
				break;
			}
			else if(s1[i] == UPPER[j]){
				cout << s1[j] << " was found in UPPER here is the values of UPPER: " << UPPER << "\n";
				break;
			}
			else if(s1[i] == PUNCTUS[j]){
				cout << s1[j] << " was found in PUNCTUS here is the values of PUNCTUS: " << PUNCTUS << "\n";
				break;
			}
			else if(s1[i] == BRACKETS[j]){
				cout << s1[j] << " was found in BRACKETS here is the values of BRACKETS: " << BRACKETS << "\n";
				break;
			}
			else if(s1[i] == QUOTES[j]){
				cout << s1[j] << " was found in QUOTES here is the values of QUOTES: " << QUOTES << "\n";
			}
			else if(s1[i] == OTHER[j]){
				cout << s1[j] << " was found in OTHER here is the values of OTHER: " << OTHER << "\n";
			}
			//counter incrementation
				j++;
		}
	}

	return 0;
}