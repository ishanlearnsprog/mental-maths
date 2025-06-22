#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "utils.h"

void start_practise_session() {
    clear();
    printf("START PRACTISE SESSION");
}

void view_session_logs() {
    clear();
    printf("VIEW SESSION LOGS");
}

int main(int argc, char **argv) {
    if (argc == 1) {
        printf("\n");
        printf("WELCOME TO MENTAL MATHS!\n\n");
        printf("mm supports two main commands:\n");
        printf("-> ss\tto start a practise session\n");
        printf("-> vs\tto view session logs\n\n");
        printf("\n");
    } else if (argc > 1){
        if (strcmp(argv[1], "ss") == 0) {
            start_practise_session();
        } else if (strcmp(argv[1], "vs") == 0) {
            view_session_logs();
        } else {
            printf("there was an error! try 'mm ss' or 'mm vs'\n");
        }
    } else {
        printf("there was an error! try 'mm ss' or 'mm vs'\n");
    }
    return 0;
}
