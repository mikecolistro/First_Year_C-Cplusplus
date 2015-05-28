/*
Assignment 4 - Question 3
Couldnt end up gettin the second function to work so just did it in the main but my second function attempt is commented out
This program simulates a simple calculator*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void scan_data(char *x, double *y);
double do_next_op(char, double);
double total = 0;
int main(){
	char oper, temp;
	double rOperand;
	
	

	while(total!='q'){
		scanf("%c %lf%c", &oper, &rOperand, &temp);
		//scan_data(&oper, &rOperand);
		total = do_next_op(oper, rOperand);
		printf("Result so far is %.1lf\n", total);
	}
}

double do_next_op(char oper, double rOperand){
	double answer, base=total;
	if(oper=='+')
		answer = total + rOperand;
	else if(oper=='-')
		answer = total - rOperand;
	else if(oper=='*')
		answer = total * rOperand;
	else if(oper=='/')
		answer = total / rOperand;
	else if(oper=='^')
		for(int i=1;i<rOperand;i++){
			total = base*total;
			answer = total;
		}
	else if(oper=='q'){
		printf("The final answer is %.1lf\n", total);
		exit(0);
	}
	return answer;
}

/*void scan_data(char *x,double *rOperand){
	char temp, opera;
	scanf("%c%lf%c", &x, &rOperand, &temp);
}*/