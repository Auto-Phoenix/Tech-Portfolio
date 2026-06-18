#include <stdio.h>
#include <conio.h>

int main(){
	
	char ch;
	
	printf("Press keys (press q to quit)\n");
	
	while (1){
		
		ch = getch();
		
		printf("You pressed: %c\n", ch);
		
		if(ch == 'q'){
			break;
		}
	}
	
	return 0;
}