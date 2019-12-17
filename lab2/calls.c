//CS 271 - lab assignment #2
// calls
// scan data file and print min, max, mean, etc.
// by: angel camacho
// sep 3, 2019
#include<stdio.h>
#include<math.h>

int main(){
    double numCalls=0;
    double mean=0;
    double min=0;
    double max=0;
    
    //my stuff
    int value_read = 0; 
    int count = 0;
    

    while(value_read != -1){
        scanf("%d", &value_read);
        
        //this will set my min and max to the first value
        if(count != 1){
        min = value_read;
        max = value_read;
        count++;
        }
        
        //make sure that what im working with is not -1
        if(value_read != -1){
           numCalls++;
           
           //if theres a smaller value then set that to min
           if(min > value_read ){
               min = value_read;
           }
           
           //if there is a larger val then set that to max
           if(max < value_read ){
               max = value_read;
           }
            mean = mean + value_read;
       }else{
           break;
    }
    }//end of while
    
    mean = mean/numCalls;
    
    //output stuff
    printf("\nTotal Number of Calls:         " "%7.0f", numCalls);
    printf("\nMean Call Length:      " "%7.1f Seconds", mean);
    printf("\nMinimum Call Length:   " "%7.0f Seconds", min);
    printf("\nMaximum Call Length:   " "%7.0f Seconds\n", max);
    
}
