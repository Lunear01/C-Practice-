#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h>  
#include "methods.h"

void print_welcome_message() {
    printf("Welcome to Iker's C learning journey!!!\n");
}

char *convert_upper_case(char *input) {
    char *formatted = malloc(strlen(input) + 1);
    
    for (int i = 0; input[i] != '\0'; i++) {
        formatted[i] = toupper(input[i]);
    }

    formatted[strlen(input)] = '\0'; 
    return formatted;

}


char *convert_lower_case(char *input) {
    char *formatted = malloc(strlen(input) + 1);
    
    for (int i = 0; input[i] != '\0'; i++) {
        formatted[i] = tolower(input[i]);
    }

    formatted[strlen(input)] = '\0'; 
    return formatted;

}

char *remove_exclamation(char *input) {

    // Counts the number of letters without '!'
    int no_exclamation = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != '!') {
            no_exclamation += 1;
        }
    }

    // Allocate exact memory for the string
    char *formatted = malloc(no_exclamation + 1);
    int index = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != '!') {
            formatted[index] = input[i];
            index += 1;
        }
    }

    formatted[no_exclamation] = '\0';
    return formatted;
}