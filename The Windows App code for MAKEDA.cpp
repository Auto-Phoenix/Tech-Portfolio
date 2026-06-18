#include<windows.h>
#include<stdio.h>

// This function makes the computer actually speak!
void MakedaSpeak(char* text){
	char command[500];
	// This calls a small PowerShell Script to use the Windows Voices
	printf(command, "powershell-Command \" Add-Type -AssemblyNameSystem.Speech; (New-Object System.Speech.Synthesis.SpeechSynthesizer).Speak('%s')\"",text);
	system(command);	
}

int main(){
	// 1. A real Windows Greeting Box MessageBox(NULL, "I am MAKEDA.Your Personal Assistant is starting...","MAKEDA v1.0", MB_OK | MB_ICONINFORMATION);
	
	char choice;
	while(1){
		// 2. A simple GUI-style menu in the console
		printf("\n-- MAKEDA MENU ---\n");
		printf("1. Get a Greeting\n");
		printf("2. Check Exam Status\n");
		printf("3. Exit\n");
		printf("Choose (1-3): ");
		
		choice = getchar();
		getchar(); // Catch the 'Enter' key
		
		if (choice == '1'){
			printf("MAKEDA is speaking..\n");
			MakedaSpeak("Hello student! I am MAKEDA. Let us build your portfolio together.");
		}
		else if (choice == '2'){
			MakedaSpeak("The GCE is approaching. Keep coding every day!");
		}
		else if (choice == '3'){
			MakedaSpeak("Goofbye. See you in the next session.");
			break;
		}
	}
	return 0;
}