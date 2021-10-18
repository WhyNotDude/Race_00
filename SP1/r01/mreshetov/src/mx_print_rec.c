#include "header.h"
void mx_print_rc(char *operation, char *operand1, char *operand2, char *result){

if (*operation == '?') {
        mx_print_rc(operand1, "+", operand2, result);
        mx_print_rc(operand1, "-", operand2, result);
        mx_print_rc(operand1, "*", operand2, result);
        mx_print_rc(operand1, "/", operand2, result);
        return;
    }

    bool is1BelowZero = false, is2BelowZero = false, isABelowZero = false;

    if (operand1[0] == '-'){
        operand1++;
    }

    if (operand2[0] == '-'){
        operand2++;
    }

    if (result[0] == '-'){
        result++;
    }

    long long frst = mx_atoi(operand1);
    long long scnd = mx_atoi(operand2);
    long long thrd = mx_atoi(result);

    for (long long i = 0; i < mx_pow(10, mx_strlen(operand1)); i++) {
        if (frst > 0) {
            i = frst;
        }
        char *i_str = mx_itoa(i);
        int i_str_length = mx_strlen(i_str);
        bool isCorrectI = true;

        for (int i_i = 0; i_i < mx_strlen(operand1) - i_str_length; i_i++) {
            if (mx_isdigit(operand1[i_i]) && operand1[i_i] != '0') {
                isCorrectI = false;
                break;
            }
        }

        for (int i_i = mx_strlen(operand1) - i_str_length, i_str_i = 0; i_i < mx_strlen(operand1); i_i++, i_str_i++) {
            if (operand1[i_i] != '?' && operand1[i_i] != i_str[i_str_i]) {
                isCorrectI = false;
                break;
            }
        }
        free(i_str);
        i_str = NULL;

        if (!isCorrectI) {
            continue;
        }

        for (long long j = 0; j < mx_pow(10, mx_strlen(operand2)); j++) {  
            if (scnd > 0) {
                j = scnd;
            }

            char *j_str = mx_itoa(j);
            int j_str_length = mx_strlen(j_str);
            bool isCorrectJ = true;

            for (int j_i = 0; j_i < mx_strlen(operand2) - j_str_length; j_i++) {
                if (mx_isdigit(operand2[j_i]) && operand2[j_i] != '0') {
                    isCorrectJ = false;
                    break;
                }
            }

            for (int j_i = mx_strlen(operand2) - j_str_length, j_str_i = 0; j_i < mx_strlen(operand2); j_i++, j_str_i++) {
                if (operand2[j_i] != '?' && operand2[j_i] != j_str[j_str_i]) {
                    isCorrectJ = false;
                    break;
                }
            }

            free(j_str);
            j_str = NULL;

            if (!isCorrectJ) {
                continue;
            }
            
            for (long long k = 0; k < mx_pow(10, mx_strlen(result)); k++) {
                if (thrd > 0) {
                    k = thrd;
                }
                char *k_str = mx_itoa(k);
                int k_str_length = mx_strlen(k_str);
                bool isCorrectK = true;

                for (int k_i = 0; k_i < mx_strlen(result) - k_str_length; k_i++) {
                    if (mx_isdigit(result[k_i]) && result[k_i] != '0') {
                        isCorrectK = false;
                        break;
                    }
                }

                for (int k_i = mx_strlen(result) - k_str_length, k_str_i = 0; k_i < mx_strlen(result); k_i++, k_str_i++) {
                    if (result[k_i] != '?' && result[k_i] != k_str[k_str_i]) {
                        isCorrectK = false;
                        break;
                    }
                }

                free(k_str);
                k_str = NULL;

                if (!isCorrectK) {
                    continue;
                }

                //output
                if (is1BelowZero) {
                    i *= -1;
                }
                if (is2BelowZero) {
                    j *= -1;
                }
                if (isABelowZero) {
                    k *= -1;
                }

                if (*operation == '+') {
                    if (i + j == k) {
                        mx_printint(i);
                        mx_printstr(" + ");
                        mx_printint(j);
                        mx_printstr(" = ");
                        mx_printint(k);
                        mx_printchar('\n');
                    }
                }
                else if (*operation == '-') {
                        if (i - j == k) {
                        mx_printint(i);
                        mx_printstr(" - ");
                        mx_printint(j);
                        mx_printstr(" = ");
                        mx_printint(k);
                        mx_printchar('\n');
                    }
                }
                else if (*operation == '*') {
                        if (i * j == k) {
                        mx_printint(i);
                        mx_printstr(" * ");
                        mx_printint(j);
                        mx_printstr(" = ");
                        mx_printint(k);
                        mx_printchar('\n');
                    }
                }
                else if (*operation == '/') {
                    if (j != 0 && i / j == k) {
                        mx_printint(i);
                        mx_printstr(" / ");
                        mx_printint(j);
                        mx_printstr(" = ");
                        mx_printint(k);
                        mx_printchar('\n');
                    }
                }
                
                if (is1BelowZero) {
                    i *= -1;
                }
                if (is2BelowZero) {
                    j *= -1;
                }
                if (isABelowZero) {
                    k *= -1;
                }
                if (thrd > 0) {
                    break;
                }
            }
            if (scnd > 0) {
                break;
            }
        }
        if (frst > 0) {
            break;
        }
    }

    if (is1BelowZero) {
        operand1--;
    }
    if (is2BelowZero) {
        operand2--;
    }
    if (isABelowZero) {
        result--;
    }

}

