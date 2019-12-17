//angel camacho
//October 8, 2019
//CS 271
//Lab 6: C Strings

#include <stdio.h>
#include <ctype.h>
#include "strFunctions.h"

void splitAlpha( const char * original, char * lower, char * upper ){

    int counterForLowerCase = 0;
    int counterForUperCase = 0;

    for(int i = 0; original[i] != '\0'; i++){
        if(islower(original[i])){
            lower[counterForLowerCase] = original[i];
            counterForLowerCase++;
        }
        if(isupper(original[i])){
            upper[counterForUperCase] = original[i];
            counterForUperCase++;
          }
    }// end for

    //for loops to print my strings.
    //prints lower cases in string
    printf("\n");
    printf(" Lower cases in string: ");
    for(int i = 0; i < counterForLowerCase; i++){
      printf("%c", lower[i]);
    }

    //prints upercases in string
    printf("\n");
    printf(" Upser Cases in String: ");
    for(int i = 0; i < counterForUperCase; i++){
      printf("%c", upper[i]);
    }

    //prints original  string
    printf("\n");
    printf(" Upser Cases in String: ");
    for(int i = 0; original[i] != '\0'; i++){
      printf("%c", original[i]);
    }

}


void printSequences( const char * text ){
    
    int reset = 1;
    for(int i = 0; text[i] != '\0' ; i++){
        if(text[i]+1 == text[i+1] || text[i]-1 == text[i-1]){
            printf("%c", text[i] );
            reset++;
        }
        if( ( text[i]+1 != text[i+1] && text[i]-1 != text[i-1] ) && ( reset % 2 == 0 ) ){ // checks conditions since reset only updates every time there is a 
            printf("\n");
            reset = 1;
        }
    }
    
}
