#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	char chars[] =
	"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
	
	srand(time(0));
	
	printf("Generated Password: ");
	
	for(int i = 0; i < 12; i++){
		int index = rand() % (sizeof(chars) - 1);
		printf("%c", chars[index]);
    }
    
    return 0;
}