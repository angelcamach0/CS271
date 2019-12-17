//angel camacho
//October 8, 2019
//CS 271
//Lab 6: C Strings

#include <stdio.h>
#include <ctype.h>
#include "strFunctions.h"

int main(void){
    
    char upperCase[30]; char upperCase2[30]; 
    char lowerCase[30]; char lowerCase2[30]; 
    char numbers[30];
    char ogSentence[] = "abck123@XY";
    char ogSentence0[] = "The symbol for Intel is INTC.";

    
  printf("\n splitAlpha Functions: ");
  splitAlpha(ogSentence0, lowerCase, upperCase);
  printf("\n\n");

  printSequences(ogSentence);
  printf("\n\n");
}
