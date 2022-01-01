#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



void main(int argc, char *argv[]) {
    /*
    Check for number of arguments and compute accordingly
    */
    if (argc==1){
        printf("Usage: encrypt shift str\n");
        exit(0);
    }

    if ((argc >= 4) || (argc==2)){
        fprintf(stderr, "Incorrect number of command-line arguments\n");
        exit(1);
    }

    if (argc==3){

        /*
        Create varibles for the two input arguments
        */
        int n = atoi(argv[1]);
        char *message = argv[2];
        

        /*
        Convert the message string to uppercase
        */
        char *upper_message = message;
        while (*upper_message){
            *upper_message = toupper((unsigned char) *upper_message);
            upper_message++;
        }

        /*
        Use the Caeser Cipher to encrypt the message
        */
        for(int i = 0; message[i] != '\0'; ++i){
            char character = message[i];
            if(character >= 'A' && character <= 'Z'){
                character = character + n;
                if(character < 'A'){
                    character = character + 'Z' - 'A' + 1;
                }
                message[i] = character;
            }
        }

    /*
    Output message to user
    */
    printf("%s", message);
    printf("\n");
    }
}   