#include <stdio.h>
int main(){
	// We define 2D character arrays to store 5names, each up to 49 characters long
	char songs[5][50];
	char *parts[] = {"kyrie", "Gloria", "Credo", "Sanctus", "Agnus Dei"};
	
	printf("--- Catholic Mass Liturgical Song Entry ---\n");
	printf("Please enter the specific name/composition for each part:\n\n");
	
	for (int i = 0; i  < 5; i++){
		printf("Enter name for %s: ", parts[i]);
		
		// fgets is safer than scanf for strings because it prevents buffer overflow
		fgets(songs[i], sizeof(songs[i]),stdin);
	}

	printf("\n--- Today's Liturgy Selection ---\n");
	for (int i = 0; i < 5; i++){
		printf("%s: %s", parts[i], songs[i]);
	}
	
	return 0;
}