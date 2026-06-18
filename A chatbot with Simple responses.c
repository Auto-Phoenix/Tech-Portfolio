#include<stdio.h>
#include<string.h>

int main(){
    char message[100];

    printf("Simple Chatbot\n");
    printf("Type 'bye' to quit.\n\n");

    while (1){
        printf("You: ");
        fgets(message, sizeof(message), stdin);

        //Remove the newline character
        message[strcspn(message, "\n")] = 0;

        if(strcmp(message, "hello") == 0){
            printf("Bot: Hi there!\n");
        }
        else if(strcmp(message, "how are you") == 0){
            printf("Bot: I'm doing great! Thanks for asking.\n");
        }
        else if(strcmp(message, "what is your name") == 0){
            printf("Bot: My name is CBot.\n");
        }
        else if(strcmp(message, "bye") == 0){
            printf("Bot: Goodbye!\n");
            break;
        }
        else{
            printf("Bot: Sorry, I don't understand that.\n");
        }
    }

    return 0;
}