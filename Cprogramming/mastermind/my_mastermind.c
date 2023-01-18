#include <stdio.h>
#include "headers.h"
/*
void start_info() {
    printf("Will you find the secret code?\n");
    printf("Please enter a valid guess\n");
}

char* commandInput() {
    char* save = (char*)malloc(5*sizeof(char));
    save[5] = '\0';
    fflush(stdout);
    read(0, save, 5);
    return save;
}

int my_strlen(char* param_1) {
    int length = 0;
    while (*param_1 != '\0') {
        length ++;
        param_1 ++;
    }
    return length;
}


int equality(char* param1, char* param2) {
    int flag = 0;
    while (*param1 != '\0' && *param2 != '\0') {
        if (*param1 != *param2) {
            flag = 1;
            break;
        }
        param1 ++;
        param2 ++;
    }
    
    if (flag == 0) {
        return 0;
    } else {
        return 1;
    }
}

int random_num() {
    int num = rand() % 8;
    char val = num + '0';
    return val;
}

int my_isdigit(char* param_1) {
    int i = 0;
    while (param_1[i] != '\0'){
        if (isdigit(param_1[i])) {
            return 0;
        }
        i++;
    }
    
    return 1;
}

void endfile() {
    return;
}

void countUserChar(char* get_code, char* secret) {
    int well_placed = 0, misplaced = 0;
    for (int x=0; x<my_strlen(get_code); x++) {
        for (int y=0; y<my_strlen(secret); y++) {
            if ((x == y) && (get_code[x] == secret[y])) {
                well_placed ++;
            } else if ((x != y) && (get_code[x] == secret[y])) {
                misplaced ++;
            }
        }
    }
    printf("Well placed pieces: %d\n", well_placed);
    printf("Misplaced pieces: %d\n", misplaced);
}

void checkCode(char* secret) {
    int i=0;
    while (i<10){
        printf("Round %d\n", i);
        char* get_code = commandInput();
        if (get_code[0] == '\0') {
            break;
        }
        if((my_isdigit(get_code) == 1) && (equality(get_code, secret) == 1)) {
            printf("Congratz! You did it!\n");
            break;
        } else if((my_isdigit(get_code) == 1) && (equality(get_code, secret) != 1)) {
            countUserChar(get_code, secret);
            i++;
        } else {
            printf("Wrong input!\n");
            continue;;
        }
    }
}
*/








int main(int argc, char** argv) {
    int i=0;
    char* __devb_game_secret;
    if (argc == 2) {
        __devb_game_secret = argv[1];
        if (__devb_game_secret == NULL) {
            return 0;
        }
    } else if (argc == 3){
        __devb_game_secret = argv[2];
        if (__devb_game_secret == NULL) {
            return 0;
        }
    }

    printf("Will you find the secret code?\n");
    printf("Please enter a valid guess\n");

    while (i<10){
        printf("Round %d\n", i);
        char* __devb_buffer_input = __devb_read_buffer_input_handler();
        if (__devb_buffer_input[0] == '\0') {
            break;
        }
        if((__devb_digit_check_handler(__devb_buffer_input) == 1) && (__devb_result_check_handler(__devb_buffer_input, __devb_game_secret) == 1)) {
            printf("Congratz! You did it!\n");
            break;
        } else if((__devb_digit_check_handler(__devb_buffer_input) == 1) && (__devb_result_check_handler(__devb_buffer_input, __devb_game_secret) != 1)) {
            __devb_count_wellNotWell_place_handler(__devb_buffer_input, __devb_game_secret);
            i++;
        } else {
            printf("Wrong input!\n");
            continue;;
        }
    }
    return 0;
}