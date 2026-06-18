#include <stdio.h> 
#include <string.h>

int main(){
	char password[50];
	
	printf("Enter password: ");
	scanf("%s", password);
	
	if(strcmp(password, "Phoenix123") == 0){
		printf("Access Granted\n");
	}else {
		printf("Access Denied\n");
	}
	
	return 0;
}