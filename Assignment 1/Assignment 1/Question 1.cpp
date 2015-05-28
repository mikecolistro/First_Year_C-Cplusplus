/*#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 3
#define EXAMS 4
void printArray(int *arry1[][], int n, int k);
int main(){
	int studentGrades[STUDENTS][EXAMS]= {{ 77 , 68 , 86 , 73 },{ 96 , 87 , 89 , 78 },{ 70 , 90 , 86 , 81 } } ;
	int *ptr1, *ptr2, *ptr3, *ptr4;
	
	//typedef pointer printArray = pointtofunc1;
	typedef cat (pointtofunc1)(int,int, int);
	pointtofunc1 ptr1 printArray;
	int choice;
	printf("Enter in a value to select the following options from the menu\n0-Print the array of grades\n1-Find the minimum grade\n2-Find the maximum grade\n3-Print the average on all tests for each student\n4-End program\n");  
	scanf("%d", &choice);

	if(choice == 0){
	}
	else if(choice == 1){
	}
	else if(choice == 2){
	}
	else if(choice == 3){
	}
	else if(choice == 4){
		exit(1);
	}

}

void printArray(int *arry1[][], int n, int k){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			printf("%d", arry1[i][k]);
		}
	}

}

void findMin(int *arry1[][], int n, int k){
	int min = arry1[0][0];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			if(min < arry1[i][j])
				min = arry1[i][j];
		}
	}
	printf("The minimum grade in the array is %d", min);
}

void findMax(int *arry1[][], int n, int k){
	int &max = arry1[0][0];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			if(&max < arry1[i][j])
				&max = arry1[i][j];
		}
	}
	printf("The maximum grade in the array is %d", max);


}

void findAVG(int *arry1[][], int n, int k){
	int avg, temp;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			temp = temp + arry1[i][j];
		}
	}
	avg = temp / (n * k);
	printf("The average grade in the array is %d", avg);

}*/