#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int secret, guess;
	
	srand(time(0));
	secret = rand() % 10 + 1;
	
	printf("Guess the number (1 to 10): ");
	scanf("%d", &guess);
	
	if (guess == secret) {
		printf("You hacked the system ! Correct!\n");
	} else {
		printf("Nope. The number was %d\n", secret);
	}
	
	return 0;
}