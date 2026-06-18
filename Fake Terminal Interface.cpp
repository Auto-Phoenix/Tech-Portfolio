#include <stdio.h>
#include <windows.h>

int main(){
	
	printf("Connecting to server");
	
	for(int i = 0; i < 5; i++){
		printf(".");
		Sleep(500);
	}
	
	printf("\nAccess Granted\n");
	
	return 0;
}