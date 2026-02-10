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