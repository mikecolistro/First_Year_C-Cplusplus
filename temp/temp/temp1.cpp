/*#include <stdio.h>

int main(){

FILE *cfPtr;
FILE *wrPtr;
char name[30], destination[15], source[15], data[10000];
int grade1, grade2, grade3, average;
printf("What is the name of the source file you would like to open and what is the name of teh destination file\n");
scanf("%s %s", source, destination);
	if((wrPtr = fopen(destination, "w")) == NULL){
		printf("File could not be opened1\n");
	}
	if((cfPtr = fopen(source, "r")) == NULL){
		printf("File could not be opened2\n");
	}
	else{
		//printf("%s%s%s%s", "name","	grade1","	grade2","	grade3\n");
		fscanf(cfPtr, "%s", data);

		while(!feof(cfPtr)){
			printf("%s ", data);
			fprintf(wrPtr, "%s ", data);
			fscanf(cfPtr, "%s ", data);
			
		}
		printf("%s\n ", data);
		
		fprintf(wrPtr, "%s ", data);

	}


return 0;
}*/