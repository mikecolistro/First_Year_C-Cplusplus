/*
Michael Colistro
Assignment #3 Question 2
This simulates a game show 10000 times.
it picks carlocation and the door thats picked randomly.
it also picks if you swtich you door randomly. its a 50 50 chance


*/
#include <stdio.h>
#include <cstdlib>
#include <ctime>
int main(){
srand(time(0));
int  carlocation, doorpicked, change, doorchanged = 0, doorchangewon = 0, wonwithoutdoorchange = 0, totalwin;
	
	for(int i = 0; i != 10000; i++){
	
	carlocation = (rand() % 3) + 1;
	doorpicked = (rand() % 3) + 1;
	change = (rand() % 2) + 1;
	
		if (change == 1){
			doorpicked = (rand() % 3) + 1;
			if(doorpicked == carlocation){
				doorchangewon++;
			}
			doorchanged++;
		}
		else if(change == 2){
			if(doorpicked == carlocation){
				wonwithoutdoorchange++;
			}
		}
	}
totalwin = wonwithoutdoorchange + doorchangewon;
printf("The simulation was run 10000 times\nSwitched doors %d times \nWhen Switching doors you won %d times\nWithout switching you won %d times\nThe total times you won is %d / 10000\n", doorchanged, doorchangewon, wonwithoutdoorchange, totalwin);

return 0;
}