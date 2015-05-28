#include <stdio.h>
#include <iostream>
#include <string.h>
#include <ctime>
using namespace std;

#define PRINTSTATEMENT printf("\nmegans sucks!!!!\n");

struct employer{
	int age;
	int year;
	char name[10];
};


int findDay(char n[]);
int findMonth(char n[]);

int main(){
	PRINTSTATEMENT;
	
	employer emp1;

	cout << "Enter in a value for the employers age";
	cin >> emp1.age;
	cout << "enter in a value for teh number of eyars the person has been employed";
	cin >> emp1.year;
	cout << "enter in the empployees name";
	cin >> emp1.name;

	cout << "The employers age is " << emp1.age << "The years the employee has been working there has been for " << emp1.year << "and finally the employees name is" << emp1.name;
	
	for(int i  = 0; i < 4000000000; i++)
		PRINTSTATEMENT; 
	
	/*
	int month,day,hour,difmonth,difday;
	const int winmonth = 4 ,winday = 24 ;
	char date[10];
	_strdate(date);
	

	month = findMonth(date);
	
	day = findDay(date);
	
	
	
	
	difmonth = winmonth - month;
	
	if(day > winday){
		difday = (winday - day) * -1;
	}
	else
		difday = winday - day;

	if(difmonth > 0){
			difday = difday + 31 ;
		}
	cout << "\n" << day << " days until departure\n";
	*/
	return 0;
}

int findMonth(char date[]){

	int month;
	if(date[1] == 49){
		month = 1;
	}
	else if(date[1] == 50){
		month = 2;
	}
	else if(date[1] == 51){
		month = 3;
	}
	else if(date[1] == 52){
		month = 4;
	}
	else if(date[1] == 53){
		month = 5;
	}
	else if(date[1] == 54){
		month = 6;
	}
	else if(date[1] == 55){
		month = 7;
	}
	else if(date[1] == 56){
		month = 8;
	}
	else if(date[1] == 57){
		month = 9;
	}
	else if((date[0] == 49) && (date[1] == 48)){
		month = 10;
	}
	else if((date[0] == 49) && (date[1] == 49)){
		month = 11;
	}
	else if((date[0] == 49) && (date[1] == 50)){
		month = 12;
	}
	return month;
}

int findDay(char date[]){

	int day =0;

	if(date[4] == 49){
		day = 1;
	}
	else if(date[4] == 50){
		day = 2;
	}
	else if(date[4] == 51){
		day = 3;
	}
	else if(date[4] == 52){
		day = 4;
	}
	else if(date[4] == 53){
		day = 5;
	}
	else if(date[4] == 54){
		day = 6;
	}
	else if(date[4] == 55){
		day = 7;
	}
	else if(date[4] == 56){
		day = 8;
	}
	else if(date[4] == 57){
		day = 9;
	}
	else if((date[4] == 49) && (date[5] == 48)){
		day = 10;
	}
	else if((date[4] == 49) && (date[5] == 49)){
		day = 11;
	}
	else if((date[4] == 49) && (date[5] == 50)){
		day = 12;
	}
	else if((date[4] == 49) && (date[5] == 51)){
		day = 13;
	}
	else if((date[4] == 49) && (date[5] == 52)){
		day = 14;
	}
	else if((date[4] == 49) && (date[5] == 53)){
		day = 15;
	}
	else if((date[4] == 49) && (date[5] == 54)){
		day = 16;
	}
	else if((date[4] == 49) && (date[5] == 55)){
		day = 17;
	}
	else if((date[4] == 49) && (date[5] == 56)){
		day = 18;
	}
	else if((date[4] == 49) && (date[5] == 57)){
		day = 19;
	}
	else if((date[4] == 50) && (date[5] == 48)){
		day = 20;
	}
	else if((date[4] == 50) && (date[5] == 49)){
		day = 21;
	}
	else if((date[4] == 50) && (date[5] == 50)){
		day = 22;
	}
	else if((date[4] == 50) && (date[5] == 51)){
		day = 23;
	}
	else if((date[4] == 50) && (date[5] == 52)){
		day = 24;
	}
	else if((date[4] == 50) && (date[5] == 53)){
		day = 25;
	}
	else if((date[4] == 50) && (date[5] == 54)){
		day = 26;
	}
	else if((date[4] == 50) && (date[5] == 55)){
		day = 27;
	}
	else if((date[4] == 50) && (date[5] == 56)){
		day = 28;
	}
	else if((date[4] == 50) && (date[5] == 57)){
		day = 29;
	}
	else if((date[4] == 51) && (date[5] == 48)){
		day = 30;
	}
	else if((date[4] == 51) && (date[5] == 49)){
		day = 31;
	}
	return day;
}
