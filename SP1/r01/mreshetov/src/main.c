#include "header.h"

int main(int argc, char *argv[]){
    if (argc != 5){
    mx_printerr("usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]\n");
    exit (-1);
    }

    char *arguments[4];
    //deleting "empty" charachters
    for (int i = 1; i < 5; i++){
        arguments[i-1] = mx_strtrim(argv[i]);
    }

    //is operation invalid?
            if (mx_strlen(arguments[1]) != 1 ||
            (arguments[1][0] != '?' && 
            !( arguments[1][0] == '+' ||
            arguments[1][0] == '-' ||
            arguments[1][0] == '*' ||
            arguments[1][0] == '/' ))){
            
            mx_strerrout("Invalid operation: ", arguments[1]);
            }

    //searching for the emplicit arguments
    for(int i = 0; i < 4; i++){

        //is operand (and answer) valid
        if(i != 1){

            //check for string length
            if(mx_strlen(arguments[i]) >= 10){
                if(i != 3){
                mx_strerrout("Invalid operand: ", arguments[i]);
                }
                else{ //is answer valid
                mx_strerrout("Invalid answer: ", arguments[i]);
                }
            }

            for (int p = 0; p < mx_strlen(arguments[i]); p++){
                if(arguments[i][p] != '?' && !(mx_isdigit(arguments[i][p]))){

                if(i != 3)
                mx_strerrout("Invalid operand: ", arguments[i]);
                
                else //is answer valid
                mx_strerrout("Invalid answer: ", arguments[i]);
                }
            } 

        }
    
    } 

    mx_print_rc(arguments[1], arguments[0], arguments[2], arguments[3]);




    return 0;
}

