#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char* rand_string(char *c, int size){
    //int i = 0;
    char char_pool[27];
        for (int i = 0; i < 26; i++){
            *(char_pool + i) = i + 'a';
    }
        char_pool[26] = '\0';
        char *array_to_print = malloc(size + 1);

        //srand((unsigned) time(NULL));
    for (int i = 0; i < size; i++){
        
        int random_char = rand() % 26;
        char char_to_print = char_pool[random_char];
        c[i] = char_to_print;
    }
        array_to_print[size] = '\0';
    return array_to_print;
}