#include <stdio.h>

int main(){
	FILE *file;
	
	file = fopen("notes.txt", "W");
	
	fprintf(file, "Hello Auto-Phoenix!\n");
	fprintf(file, "Welcome to C programming.");
	
	fclose(file);
	
	printf("File created successfully.\n");
	
	return 0;
}