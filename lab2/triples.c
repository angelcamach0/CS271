// CS 271 - lab assignment #2
// Triples
// to print all the triples 
// by: angel camacho
// sep 10, 2019
#include<stdio.h>
#include<math.h>

int main(void){
  
    int a=0;
    int b=0;
    int c=0; 
     
    printf("Side 1\tSide 2\tHypotenuse\n");
    printf("------\t------\t----------\n");
    for(a = 1; a <= 1000; a++){
        for(b = 0; b <= 1000; b++){
            for(c = 0; c <= 1000; c++){

                if( a<b && a * a + b * b == c * c){
                    if(c <= 1000){
                    printf("%6d\t%6d\t   %6d\n", a, b, c);
                    }
                }
            }
        }
    }
}//end main
