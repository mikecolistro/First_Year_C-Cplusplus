#include <stdio.h>
void printNum(int n);
void (*pointfunc)(int n);
struct employee {
	int number;
	int hours;
	char *name;
} emp[10];
int main(){
	int n;
	char string1[40];
	pointfunc = &printNum;
	emp[1].number = 4;
	gets(string1);
	emp[6].name = string1;
	
	for(int i = 0; i < 10000000000000000;i++)
	puts(emp[6].name);

	return 0;
}
void printNum(int n){
	for(int i = 0; i < n; i++){
		printf("%d\n", i);


	}


}