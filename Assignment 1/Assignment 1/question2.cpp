#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int fillDeck(int arry1[52]);

int main(){
	int Deck[52];

	fillDeck(Deck);



	return 0;
}

int fillDeck(int arry1[52]){
	srand ( time(NULL) );
	
	for(int i = 0; i < 52; i++){
		
		int num1 = (rand() % 52) + 1;
		if( num1
		printf("%d\n", num1);
	
	}

	return 0;
	}
