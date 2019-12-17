//Angel Camacho
//Lab 4
//CS 271
//Fuctions and Arrays
#include <stdio.h> 
#include <math.h> 
int linearSearch (int array[], int arraySize, int key){
    
    int k = 0;
    int count = 1;
    for(k = 0; k < arraySize; k++){
        if (array[k] == key){
            return count;
        }
        count++;
    }
    return -1;
}

int binarySearch(int array[], int arraySize, int key){
    int number = arraySize;
    int k = 0;
    int middle = 1;
    
    while(k <= number){
        middle = (k+number)/2;
        if(array[middle]==key){
            return middle+1;
        }
        if(key < array[middle]){
            number = middle -1;
        }else{
            k = middle + 1;
        }
    }
    return -1;
}

void printIntArray(int array[], int arraySize){
    
    array[arraySize];
    int k = 0;
    int counter = 1;
    for(k = 0; k < arraySize; k++){
        printf("%5.d", array[k]);
        if(counter % 10 == 0){
            printf("\n");
        }
        counter++;
    }
}

void bubbleSort(int array[], int arraySize){
    
    int param = arraySize;
    int k = 0;
    int l = 0;
    int temporaryVal;
    for(k = 1; k < arraySize; k++){
        for(l = 0; l < (param - k); l++){
            if(array[l] > array[l+1]){
                //switch
                temporaryVal = array[l];
                array[l] = array[l+1];
                array[l+1] = temporaryVal;
            }
        }//end for of l
    }//end for of K
    
}
