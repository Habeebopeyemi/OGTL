#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#define NUMBER_OF_INPUT 5
#define FILE_DESCRIPTOR 0


char* __devb_read_buffer_input_handler(){
    char* buffer_input = (char *)malloc(sizeof(char) * NUMBER_OF_INPUT);
    buffer_input[NUMBER_OF_INPUT] = '\0';
    fflush(stdout);
    read(FILE_DESCRIPTOR, buffer_input, NUMBER_OF_INPUT);
    return buffer_input;
};
int __devb_strlen_handler(char* __ptr_to_param_1){
    int __devb_length = 0;
    while(*__ptr_to_param_1 != '\0'){
        __devb_length++;
        __ptr_to_param_1++;
    }
    return __devb_length;
};
int __devb_result_check_handler(char* __ptr_to_param1, char* __ptr_to_param2){
    int __devb_success_res = 1;
    
    while(*__ptr_to_param1 != '\0' && *__ptr_to_param2 != '\0'){
        if(*__ptr_to_param1 != *__ptr_to_param2){
            __devb_success_res = 0;
            break;
        }
        __ptr_to_param1++;
        __ptr_to_param2++;
    }

    return __devb_success_res;
};

int __devb_digit_check_handler(char* __ptr_to_param1){
    while(*__ptr_to_param1 != '\0'){
        if(isdigit(*__ptr_to_param1)){
            return 1;
        }
        __ptr_to_param1++;
    }
    return 0;
};

void __devb_count_wellNotWell_place_handler(char* __ptr_to_param_1, char* __ptr_to_param_2){
    int __devb_good_piece = 0, __devb_param1_index;
    int __dev_bad_piece = 0, __devb_param2_index;
    for(__devb_param1_index = 0; __devb_param1_index < __devb_strlen_handler(__ptr_to_param_1); __devb_param1_index++){
        for(__devb_param2_index = 0; __devb_param2_index < __devb_strlen_handler(__ptr_to_param_2); __devb_param2_index++){
            if((__devb_param1_index == __devb_param2_index) && (__ptr_to_param_1[__devb_param1_index] == __ptr_to_param_2[__devb_param2_index])){
                __devb_good_piece++;
            }else if((__devb_param1_index != __devb_param2_index) && (__ptr_to_param_1[__devb_param1_index] == __ptr_to_param_2[__devb_param2_index])){
                __dev_bad_piece++;
            }
        }
    }
    
    printf("Well placed pieces: %d\n", __devb_good_piece);
    printf("Misplaced pieces: %d\n", __dev_bad_piece);
};