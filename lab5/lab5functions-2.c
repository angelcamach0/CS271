//angel camacho
//cs 271
//Lab 5
//extending knowledge of functions and arrays
#include <stdio.h>
int duplicates(int array[], int size){
    
    int i = 0 , k = 0;
    int x = 0; int numOfDuplicates = 0, opCounter = 1;
    int u = 0; int numExtraDuplicates = 0;


    for(i = 0; i < size; i++){
        for(k = opCounter ; k < size; k++){
          
              if((array[i] == array[k]) && (array[k] != '\0') && (x == 0)){
                //condition that if the next val is null then it should break.
                 numOfDuplicates++;
                 x++;
              }
              //this will essentially keep count of how many duplicates there are that repeat more than twice
              if((array[i] == array[k]) && (array[k] != '\0')){
                  
                 if( u == 1 ){
                   numExtraDuplicates++;
                 }
                 u++;
              }

        }
        //resets my conditions makeing them valid for the next iteration
        u=0;
        x=0;
        opCounter++;
    }
    //depeding on how many duplicates there were that where more that 2 
    //it will decrement the total number of possible combinations
    return numOfDuplicates - numExtraDuplicates; 
}


void highestTwo(float array[], int size){

  float firstHighest = 0;
  float secondHighest = 0;

  firstHighest = array[0];
  secondHighest = array[0];

  //looks for the highest val
  for(int i = 0; i < size; i++){
    for(int k = 0; k < size; k++){
      if(firstHighest < array[k]){
        firstHighest = array[k];
      }
    }
  }

  //looks for the highest val and if its not equal
  // to the first highest vall then it will make it equal to that.
  for(int i = 0; i < size; i++){
    for(int k = 0; k < size; k++){
      if(array[i] < array[k] && array[k] != firstHighest){
        secondHighest = array[k];
      }
    }
  }

  printf("\nThe First Highest values is: ");
  printf("%f",firstHighest);
  printf("\nThe Second Highest values is: ");
  printf("%f",secondHighest);

}



void columnSums(int numRows, int numColums, double doubleArray[][numColums], double singleArray[]){
    int sum = 0;
    
    for(int i = 0; i < numColums; i++){
        for(int k = 0; k < numRows; k++){
            sum = sum + doubleArray[k][i];
        }
        singleArray[i] = sum;
        sum = 0;
    }
    
    for(int i = 0; i < 3; i++){
        printf("The Sum of the colum #%d is : %f\n",i+1, singleArray[i]);
    }
    
}



























/*
will first alocate values in the empty 2d array.
for(int i = 0; i < numRows; i++){
  for(int k = 0; k < numColums; k++){
    doubleArray[i][k] = singleArray[k];
  }
}

then make the summation of those values
for(int i = 0; i < numRows; i++){
  for(int k = 0; k < numColums; k++){
    sum = sum + doubleArray[i][k];
  }
}

*/
