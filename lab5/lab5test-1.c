// CS 271 - lab assignment #4
// Functions
// Extending Knowledge of Functions and Arrays
// by: angel camacho
// October 1, 2019

#include "lab5functions.h"
#include <stdio.h>

int main(){
    printf("\n");
    
    //duplicates
    int arrayName[] = {7,4,5,4,7,12,4,8,4,5};
    printf("Number of Duplicates: %d\n", duplicates(arrayName,10));

    //highestTwo
    float arrayName2[] = {7,4,5,9,7,12,4,8,4,5};
    highestTwo(arrayName2,10);
    printf("\n\n");
    
    //columnSums
    int numRows = 3; int numColums = 3;//must change the number of Colums directly form arrayName4
    double arrayName3[numRows];
    double arrayName4 [][3] = {{1,2,3},{4,5,6},{7,8,9}};
    columnSums(3, 3, arrayName4, arrayName3);
    
    printf("\n");
}
