/*This program simulates a simple calculator*/
/*#include <stdio.h>
#include <iostream>
#include <math.h>
//void scan_data(char,double);
void scan_data(char, double);
double do_next_op(char, double);
double total = 0;
int main(){
	char oper, temp, x;
	double rOperand, y;
	
	while(total!='q'){
		//scanf("%c%lf%c", &oper, &rOperand, &temp);
		scan_data(&oper, &rOperand);
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
		for(int i=0;i<rOperand;i++)	
			answer = base*total;
	else if(oper=='q'){
		printf("The final answer is %lf", total);
		return 'q';
	}
	return answer;
}

void scan_data(char *oper,double *rOperand){
	char temp, opera=*oper;
	double rOperandn=*rOperand;
	scanf("%c%lf%c", &oper, &rOperand, &temp);
}*/
/*
+ 	add
- 	subtract
* 	multiply
/ 	divide
^ 	power (raise left operand to the power of the right operand)
q	quit
*/