#include <stdio.h>
#include <stdlib.h>
#include "methods.h"

int main () {
    print_welcome_message();
    char *str = "Welcome!!! here!!!!";
    char *l = convert_lower_case(str);
    char *u = convert_upper_case(str);
    char *o = remove_exclamation(str);
    printf("lowercase: %s\n", l);
    printf("uppercase: %s\n", u);
    printf("boring: %s\n", o);

    free(l);
    free(u);
    free(o);
    return 0;
}