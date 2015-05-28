// this program works except for the two functions that involve the 2D array because im getting an error Error	8	error LNK2001: unresolved external symbol "void __cdecl setinStock(int (* const)[4],int * const)" (?setinStock@@YAXQAY03HQAH@Z)	C:\Users\Michael\Documents\Visual Studio 2010\Projects\Assignment 4.0\Assignment 4.0\question2.obj	Assignment 4.0
// and i even looked it up on the internet there was no solutions
#include <stdio.h>
#include <string.h>
void setinStock(int ary[][4], int ary2[]);
void printArray(int ary[]);
void copyAlphaBeta(int ary[], int ary2[], int ary3[][4]);
void setzero(int ary[],int);
void inputArray(int ary[]);
void doubleArray(int ary[], int ary2[]);
void copyGamma(int ary[], int ary2[]);
int main()
{
	int inStock[10][4];
	int alpha[20];
	int beta[20];
	int gamma[4] = {11,13,15,17};
	int delta[10] = {3,5,2,6,10,9,7,11,1,8};
	int num1;
	printf("Choose one of the following menus and enter the integer beside it\n 1 - inputArray\n 2 - setzero\n 3 - copyAlphaBeta\n 4 - copyGamma\n 5 - printArray\n 6 - setinStock		");
	scanf("%d", &num1);
	if(num1 = 1){
		inputArray(alpha);
	}
	else if (num1 = 2){
		setzero(alpha, 3);
	}
	else if (num1 = 3){
		//copyAlphaBeta(alpha,beta,inStock);
	}
	else if (num1 = 4){
		//copyGamma(gamma, inStock[10]);
	}
	else if (num1 = 5){
		printArray(delta);
	}
	else if (num1 = 6){
		setinStock(inStock,delta);
	}
	
	//for(int i = 0; i < 20; i++)
		//printf("%d", alpha[i]);
return 0;
}
void setzero(int *x,int num1){
	x[num1] = 0;
}
void inputArray(int *x){
	for(int i = 0; i < 20; i++){
		printf("Enter in a value for alpha[%d]", i);
		scanf("%d", &x[i]);
	}
}
void doubleArray(int *x, int *y){
	int num1;
	for(int i =0; i < 20; i++){
		num1 = x[i];
		y[i] = num1 * 2;
	}
}
void copyGamma(int *x, int *ary[][4]){
	int num1;
	for(int row = 0; row < 10; row++){
		for(int col = 0; col < 4; col++){
			if(row = 0){
			num1 = x[col];
			*ary[row][col] = num1;
			}
			else{
				*ary[row][col] = *ary[(row-1)][col] * 3;
			}
		}

	}

}
void copyAlphaBeta(int *x, int *y, int *z[][4]){
	for(int i =0; i< 10; i++){
		for(int j = 0; i<4; j++){
			if(i = 0){
				z[i][j]= x;
			}
			else if(i = 9){
				z[i][j] = y;
			}
		}
	}

}
void printArray(int *x){
	int num1;
	printf("How big is the array");
	scanf("%d", &num1);
	for(int i = 0; i < num1; i++)
		printf("%d", x[i]);
}
void setinStock(int *x[], int *y){
	
	int num1;
	for(int i = 0; i < 4; i++){
		printf("Enter in a value for instock[0][%d]");
		scanf("%d", &num1);
		x[0][i] = num1;
	}
	for(int i = 1; i < 10; i++){
		for(int j = 0; j <4; j++){
			x[i][j] = (((x[i-1][j]) * 2) - y[i]);
		}
	}
}