//Angel Camacho
//Lab 7
//October 17, 2019
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    //6
    void printTable(int array[], int rows, int columns);

    //8
    void columnSort(int array[], const int rows, const int columns);

int main(){
    
    //1
    int oneDimensional[80];
    int betterTest[] = {78,14,283,419,6,794,91,52,89,511,386,29};
    
    //2
    time_t t;
    srand((unsigned) time(&t));
    for(int i = 0; i < 80; i++){
        oneDimensional[i] = (rand()% 1000 + 1);
    }
    
    
    //3
    printf("Printing..\n");
    printTable( oneDimensional, 8, 10 );
    printf("Printing seoncd..\n");
    printTable( betterTest, 3, 4 );
    
    //4
    columnSort( betterTest, 3, 4 );
    columnSort( oneDimensional, 8, 10 );
    
    //5
    printf("Sorting...\n");
    printTable( betterTest, 3, 4 );
    printf("Sorting second...\n");
    printTable( oneDimensional, 8, 10 );    
    
}
    //7
    void printTable(int array[], int rows, int columns){
        int placeHolder = 0;
        for(int i = 0; i < rows; i++){
            for(int k = 0; k < columns; k++){
                printf("%5d", array[placeHolder]);
                placeHolder++;
            }
            printf("\n");
        }
    }
 
    //9  
    void columnSort(int arrayI[], const int rows, const int columns){
        int test = columns;
        //int size = rows * columns;
        int i=0,j=0,k=0, temporary=0;
        
        for(k = 0; k <= columns;k++ ){

       
        //regular for
        for (i = k; i < (k*rows)-1; i++){
          //regular for 
          
          for (j = 0; j < (k*rows)-i; j++){
            //this is a long if statement because i want to make sure that im not sorting elements that are not within the array
            if ((arrayI[j] > arrayI[j+test] && arrayI[j] != '\0' && arrayI[j + test] != '\0' )){
              temporary = arrayI[j];
              arrayI[j] = arrayI[j+test];
              arrayI[j+test] = temporary;
              } 
           }
        }

        }

} 


    
    
    
