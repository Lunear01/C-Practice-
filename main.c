#include <stdio.h>
#include "methods.h"

int main () {
    print_welcome_message();
    char *str = "Welcome!!!";
    char *l = convert_lower_case(str);
    char *u = convert_upper_case(str);
    printf("lowercase: %s\n", l);
    printf("uppercase: %s\n", u);
    return 0;
}