#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int __devb_my_strlen(char *__dev_ptr_param_1){
    int __devb_counter = 0;
    while (*__dev_ptr_param_1 != '\0'){
        ++__devb_counter;
        __dev_ptr_param_1++;
    }

    return __devb_counter;
}

char* __devb_my_strcpy(char* __dev_ptr_param_1, char* __dev_ptr_param_2) {
    int i;
    for (i=0; __dev_ptr_param_2[i] != '\0'; i++) {
        __dev_ptr_param_1[i] = __dev_ptr_param_2[i];
    }
    return __dev_ptr_param_1;
}

char* __devb_my_strrev(char* __devb_ptr_str_to_rev) {
    int i;
    int __devb_str_length=0;
    char c;
    if(!__devb_ptr_str_to_rev) {
        return NULL;
    }
    while (__devb_ptr_str_to_rev[__devb_str_length] != '\0') {
        __devb_str_length ++;
    }
    for (i=0; i < (__devb_str_length/2); i++) {
        c = __devb_ptr_str_to_rev[i];
        __devb_ptr_str_to_rev[i] = __devb_ptr_str_to_rev[__devb_str_length -i -1];
        __devb_ptr_str_to_rev[__devb_str_length - i - 1] = c;
    }
    return __devb_ptr_str_to_rev;
}

char* __devb_my_int_to_alphabet(int __devb_input_int, char* __devb_output_string, int __devb_base) {
    char* __devb_ptr_output_str = __devb_output_string;
    int __devb_modulus, sign = 0;
    if(__devb_input_int < 0) {
        sign = 1;
        __devb_input_int *= -1;
    }
    while (__devb_input_int) {
        __devb_modulus = __devb_input_int % __devb_base;
        *__devb_ptr_output_str = (__devb_modulus > 9) ? ('A' + __devb_modulus - 10) : '0' + __devb_modulus;
        __devb_input_int = __devb_input_int / __devb_base;
        __devb_ptr_output_str ++;
    }
    if (sign) {
        *__devb_ptr_output_str ++ = '-';
    }
    *__devb_ptr_output_str = '\0';
    __devb_my_strrev(__devb_output_string);
    return __devb_output_string;
}

void __devb_my_print__proto(char* __devb_format_string, ...) {
    char __devb_str_base_addr[100] = {0}, temp[20];
    va_list __devb_var_arg_list;
    int i=0, __devb_copied_byte=0;
    char* str_arg;

    va_start( __devb_var_arg_list, __devb_format_string );
    while (__devb_format_string && __devb_format_string[i]) {
        if (__devb_format_string[i] == '%') {
            i++;
            switch (__devb_format_string[i]){
                case 'c': {
                    __devb_str_base_addr[__devb_copied_byte] = (char)va_arg( __devb_var_arg_list, int );
                    __devb_copied_byte++;
                    break;
                }
                
                case 'd': {
                    __devb_my_int_to_alphabet(va_arg( __devb_var_arg_list, int ), temp, 10);
                    __devb_my_strcpy(&__devb_str_base_addr[__devb_copied_byte], temp);
                    __devb_copied_byte += __devb_my_strlen(temp);
                    break;
                }
                case 'x': {
                    __devb_my_int_to_alphabet(va_arg( __devb_var_arg_list, int ), temp, 16);
                    __devb_my_strcpy(&__devb_str_base_addr[__devb_copied_byte], temp);
                    __devb_copied_byte += __devb_my_strlen(temp);
                    break;
                }
                case 'o': {
                    __devb_my_int_to_alphabet(va_arg( __devb_var_arg_list, int ), temp, 8);
                    __devb_my_strcpy(&__devb_str_base_addr[__devb_copied_byte], temp);
                    __devb_copied_byte += __devb_my_strlen(temp);
                    break;
                }
                case 's': {
                    str_arg = va_arg(__devb_var_arg_list, char* );
                    __devb_my_strcpy(&__devb_str_base_addr[__devb_copied_byte], str_arg);
                    __devb_copied_byte += __devb_my_strlen(str_arg);
                    break;
                }
            }
        } else {
            __devb_str_base_addr[__devb_copied_byte] = __devb_format_string[i];
            __devb_copied_byte++;
        }
        i++;
    }
    fwrite(__devb_str_base_addr, __devb_copied_byte, 1, stdout);
    va_end(__devb_var_arg_list);
    // return j;
}


int main() {
    // int num = 42;
    // char str[12];
    // sprintf(str, "%d", num);
    // for (int i = 0; str[i] != '\0'; i++) {
    //     putchar(str[i]);
    // }
    // return 0;

    // int num = 42;
    // char str[12];
    // __devb_my_int_to_alphabet(num, str, 10);
    // puts(str);
    // return 0;

    // int ret;
    // ret = print("%c %d %o %x %s\n", 'A', 10, 100, 1000, "Hello from printf!");
    __devb_my_print__proto("%c %d %o %x %s\n", 'A', 10, 100, 1000, "Hello from printf!");

    // printf("printf returns %d bytes\n", ret);
    return 0;
}