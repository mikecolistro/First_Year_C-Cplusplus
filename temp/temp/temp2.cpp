#include <stdio.h>
int factorial(int);
int main (){
	int sum;
	sum = factorial(5);
	printf("5! is %d", sum);
	return 0;
}
int factorial ( int n){
	int sum = 1;
	if(n == 1){

		return 1;

	}
	else{
		sum = sum * n;
		factorial(n-1);
		return sum;

	}

	
}