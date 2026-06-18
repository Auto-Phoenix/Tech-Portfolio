#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char command[100];
	
	printf("=== Welcome to your AI Assistant ===\n");
	
	while (1){
		printf("\nEnter command: ");
		fgets(command, sizeof(command), stdin);
		
		// Remove newline
		command[strcspn(command, "\n")] = 0;
		
		if (strcmp(command, "open chrome") == 0){
		    system("start chrome");
		}
		else if (strcmp(command, "open notepad") == 0){
		    system("start notepad");
		}
		else if (strcmp(command, "open music") == 0){
		    system("start C:\\Users\\DELL\\Music");
		}
		else if (strcmp(command, "open calculator") == 0){
		    system("start calc");
		}
		else if (strcmp(command, "exit") == 0){
		    printf("Goodbye!\n");
		    break;
		}
		else{
			printf("Command not recognized.\n");
		}
	}
	
	return 0;
}