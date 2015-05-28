/*

Michael Colistro
Assignment #3 Question 1
The program asks the user to input there choice of Rock, Paper or Scissors, 
Than asks the other user to input the same.
It then calculates who won between the two than outputs the score.
It also then asks if the player wants to continue.
*/
#include <stdio.h>
#include <ctype.h>

char choice1(char,char);

int main (){
	int p1points = 0, p2points = 0, ties = 0, count, returned;
	char player1, player2, temp, contin;
	count = 1;
	for(int i =0; i < count;){
		
		printf("Player 1 please enter either p for paper r for rock or s for scissors\n");
		scanf("%c", &player1);
		scanf("%c", &temp);
		printf("Player 2 please enter either p for paper r for rock or s for scissors\n");
		scanf("%c", &player2);
		scanf("%c", &temp);
		
		
		player1 = tolower(player1);
		player2 = tolower(player2);

		returned = choice1(player1, player2);
		
		if (returned == 1){
			p1points++;
		}
		else if(returned == 2){
			p2points++;
		}
		else if(returned == 0){
			ties++;
		}
		
		printf("Current score is:\n Player one has %d wins\n Player two has %d wins\n There has been %d ties\n", p1points, p2points, ties);
		printf("Do you want to play again. Y for yes N for no\n");
		scanf("%c", &contin);
		scanf("%c", &temp);

		contin = tolower(contin);
		
			if(contin == 121)
				count = 1;
			else if (contin == 110)
				count = 0;
		
	}
	return 0;
}

//this function determines who won between the two players
char choice1(char player1, char player2){
	
	if (((player1 == 112) && (player2 == 114)) || ((player1 == 114) && (player2 == 115)) || ((player1 == 115) && (player2 == 112))){
			return 1; 
		}
		else if (((player2 == 112) && (player1 == 114)) || ((player2 == 114) && (player1 == 115)) || ((player2 == 115) && (player1 == 112))){
			return 2;
		}
		else if (((player1 == 112) && (player2 == 112)) || ((player1 == 114) && (player2 == 114)) || ((player1 == 115) && (player2 == 115))){
			return 0;
		}
		

}