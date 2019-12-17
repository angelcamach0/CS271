// CS 271 - lab assignment #4
// Functions
// Functions and Arrays
// by: angel camacho
// sep 23, 2019

#include "lab4.h"
#include <stdio.h>
#include <stdlib.h>
#include<time.h> 
int main (void) {
    
    //a
    int mainArray[100];
    
    //b I was unsure how to do use.
    time_t t;
    srand((unsigned) time(&t));
    
    //c
    for(int i = 0; i < 100; i++){
        //will put a random value in each index of the array
        mainArray[i] = ((rand() % 1000) );
    }
    
    //d
    printIntArray(mainArray, 100);
    
    //e
    printf("\nLoctated at: ");
    printf("%d",linearSearch(mainArray, 100, 30));
    printf(", ");
    printf("%d",linearSearch(mainArray, 100, 86));
    printf(", ");
    printf("%d",linearSearch(mainArray, 100, 87));
    printf("\n");
    
    //f
    bubbleSort(mainArray, 100);
    
    //g
    printf("\n");
    printIntArray(mainArray, 100);
    
    
    //h
    printf("\nLoctated at : ");
    printf("%d",binarySearch(mainArray, 100, 11));
    printf(", ");
    printf("%d",binarySearch(mainArray, 100, 28));
    printf(", ");
    printf("%d",binarySearch(mainArray, 100, 74));
    printf(", ");
    printf("%d",binarySearch(mainArray, 100, 99));
    printf("\n");
    
    
}
