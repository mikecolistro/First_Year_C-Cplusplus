#include <stdio.h>
// Michael Colistro ASsignment 4 question 1. 
//There is 1 small problem that i have spent numerous hours on and i cant seem to solve.
//For somereason my ID counter isnt counting properly after the first student.
int main(){
	char answer[20], letter = ' ', grade, temp;
	int ID = 0, counter2 = 0;
	float counter = 0;
	FILE *cfPtr;

	if((cfPtr = fopen("testdata.txt", "r")) == NULL){
		printf("File could not be opened");
	}
	else{
		printf("The correct answers are:\n ");
		for(int i = 0; i < 20; i++){
		fscanf( cfPtr, "%c", &answer[i]);
		printf("%c", answer[i]);
		}
		printf("\n");
		printf("Student ID\tStudent Answers\n");
		while(!feof(cfPtr)){
			printf("%c", letter);
			fscanf(cfPtr, "%c", &letter);
			

			if(ID >= 31){
								
								printf(" %.0f", counter);
								float avg = counter / 40;
								printf("  %.0f", avg*100);
								if((counter / 40) * 100 >= 90)
									grade = 'A';
								else if((((counter / 40) * 100) >= 80) && ((counter / 40) * 100 < 90))
									grade = 'B';
								else if((((counter / 40) * 100) >= 70) && ((counter / 40) * 100 < 80))
									grade = 'C';
								else if ((((counter / 40) * 100) >= 60) && ((counter / 40) * 100 < 70))
									grade = 'D';
								else if((((counter / 40) * 100) < 60))
									grade = 'F';
								printf("%c", grade);
								
								ID = 0;
								counter = 0;
								//printf("ID is %d and counter is %d", ID, counter);
				}
			

			if(ID > 9){
				
				//for(int j = 0; j < 20; j++){
					
					
					
					
						if(((letter == 'T') && (answer[counter2] == 'T')) || ((letter == 'F') && (answer[counter2] == 'F'))){
							counter = counter + 2;
							//printf(" ! ");
						}
						else if(((letter == 'T') && (answer[counter2] == 'F') ) || ((letter == 'F') && (answer[counter2] == 'T'))){
							counter--;
						}
						else if(letter == ' '){
							counter = counter + 0;
						}

				counter2++;
				
				
				
	

			}ID++;
			
			
			
		}

		printf("\n");

	}

	printf("1st person got 27 2nd got 40 3rd got 34 4th got 26\n");
	return 0;
}